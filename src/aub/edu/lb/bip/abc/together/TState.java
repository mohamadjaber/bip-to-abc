package aub.edu.lb.bip.abc.together;


import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAction;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TBinaryExpression;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TIfAction;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TVariable;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;
import ujf.verimag.bip.Core.Behaviors.State;
import ujf.verimag.bip.Core.Behaviors.Transition;

public class TState extends TVariable {
	private static int constStateID = 0; 
	
	private State state; 
	private TComponent tComponent;
	final int value; 
	
	public TState(State s, TComponent comp) {
		state = s; 
		value = constStateID++;
		tComponent = comp;
		setName();
		type = TEnumType.CONST_INT;
	}
	
	public TAssignmentAction create() {
		return super.create(new TNamedElement("" + value));
	}

	
	
	public TIfAction nextStateFunctionTransition(Transition t) {
		TIfAction transAction = null;
		if(t.getDestination().size() == 1) { 
			TState next = tComponent.getTState(t.getDestination().get(0));
			TPort port = tComponent.getTPort(TransformationFunction.getPort(t.getTrigger()));
			transAction = new TIfAction();
			
			TExpression checkCurrentState = new TBinaryExpression(
					BinaryOperator.EQUALITY,
					tComponent.getCurrentState(), 
					new TNamedElement("" + value)
				);
	
			transAction.setCondition(new TBinaryExpression(
					BinaryOperator.LOGICAL_AND,
					checkCurrentState, 
					port.getSelected()
				));
		
			TAction updateStateAction = new TAssignmentAction(
					tComponent.getCurrentState(), 
					new TNamedElement("" + next.value), false
				);
			transAction.setIfCase(updateStateAction);
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
	
	public State getState() {
		return state;
	}
	
}
