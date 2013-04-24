package aub.edu.lb.bip.abc.together;

import java.util.List;

import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAction;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TBinaryExpression;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TIfAction;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;
import ujf.verimag.bip.Core.Behaviors.AbstractTransition;
import ujf.verimag.bip.Core.Behaviors.State;
import ujf.verimag.bip.Core.Behaviors.Transition;

public class TState extends TNamedElement{
	private static int constStateID = 0; 
	
	private State state; 
	private TComponent tComponent;
	private final int value; 
	
	public TState(State s, TComponent comp) {
		state = s; 
		value = constStateID++;
		tComponent = comp;
		setName();
	}
	
	public String initialize() {
		return new TAssignmentAction(
					this, 
					new TNamedElement("" + value)
				).toString();
	}

	
	public TAction nextStateFunction() {
		List<AbstractTransition> outTransitions = state.getOutgoing();
		TIfAction nextStateFunc = new TIfAction();

		// generate upper condition--> if(currentState == value)
		nextStateFunc.setCondition(new TBinaryExpression(
						BinaryOperator.EQUALITY,
						tComponent.getCurrentState(), 
						new TNamedElement("" + value)
					)
				);

		// generate upper else case --> currentState = currentState;
		nextStateFunc.setElseCase(new TAssignmentAction(
				tComponent.getCurrentState(), 
				tComponent.getCurrentState()
			));
		
		// for each transition generate nested if and else cases
		TIfAction currentAction = nextStateFunc;
		int countTransition = 1; 
		for(Object o : outTransitions) {
			Transition t = (Transition) o; 
			if(countTransition == 1) {
				TIfAction transitionFunc = (TIfAction) nextStateFunctionTransition(t);
				currentAction.setIfCase(transitionFunc);
				currentAction = transitionFunc; 
				
			}
			else if(countTransition < outTransitions.size()) {
				TIfAction transitionFunc = (TIfAction) nextStateFunctionTransition(t);
				currentAction.setElseCase(transitionFunc);
				currentAction = transitionFunc; 
			}
			else { // last transition
				currentAction.setElseCase(new TAssignmentAction(
						tComponent.getCurrentState(), 
						tComponent.getCurrentState()
					));
			}
		}
		return nextStateFunc;
	}
	
	private TAction nextStateFunctionTransition(Transition t) {
		TIfAction transAction = null;
		if(t.getDestination().size() == 1) { 
			TState next = tComponent.getState(t.getDestination().get(0));
			TPort port = tComponent.getPort(TransformationFunction.getPort(t.getTrigger()));
			transAction = new TIfAction();
			transAction.setCondition(port.getSelected());
			TAction fAction = new TNamedElement(Parser.decompile(t.getAction(), tComponent));
			TAction updateStateAction = new TAssignmentAction(
					tComponent.getCurrentState(), 
					new TNamedElement("" + next.value)
				);
			TCompositeAction ca = new TCompositeAction();
			ca.getContents().add(fAction);
			ca.getContents().add(updateStateAction);
			transAction.setIfCase(ca);
		}
		return transAction;
	}

	private void setName() {
		name = TogetherSyntax.state + "_" + 
				tComponent.getName() + "_" +
				state.getName();
	}
	

	public int getValue() {
		return value; 
	}
	

}
