package aub.edu.lb.bip.abc.together;

import java.util.List;
import java.util.Map;

import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAction;
import aub.edu.lb.bip.abc.expression.TArrayVariable;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TBinaryExpression;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TIfAction;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TVariable;
import ujf.verimag.bip.Core.ActionLanguage.Actions.AssignmentAction;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;
import ujf.verimag.bip.Core.Behaviors.Transition;
import ujf.verimag.bip.Core.Behaviors.Variable;
import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Modules.OpaqueElement;

public class TVariableComp extends TVariable{
	
	private Variable variable; 
	private TComponent tComponent;
	
	public TVariableComp(Variable var, TComponent comp) {
		variable = var;
		tComponent = comp;
		setName();
		setType();
	}
	
	
	
	private void setType() {
		String t = ((OpaqueElement) variable.getType()).getBody();
		if(t.equals("int")) {
			type = TEnumType.INT;
		}
		else if(t.equals("boolean")) {
			type = TEnumType.BOOLEAN;
		}
		else {
			//TODO
		}
	}
	
	public TAction nextStateFunction() {
		TAction action = nextStateFunctionVariableTransition(); 
		if(action == null) {
			return nextStateFunctionVariableInteraction();
		}
		else {
			TIfAction ifAction = (TIfAction) action; 
			ifAction.setLastElseCase(nextStateFunctionVariableInteraction());
			return ifAction; 
		}
	}
	
	public TAction nextStateFunctionVariableTransition() {
		List<Transition> transitionsUpdateVariable = TransformationFunction.getTransitionsUpdateVariable(variable);
		if(transitionsUpdateVariable.size() == 0)
			return null;
		
		TIfAction nextStateFunc = new TIfAction();
		// for each transition generate nested if and else cases
		TAction currentAction = nextStateFunc;
		boolean firstTransition = true; 
		for(Object o : transitionsUpdateVariable) {
			Transition t = (Transition) o; 
			TIfAction transitionFunc = nextStateFunctionTransition(t);
			
			if(firstTransition) {
				nextStateFunc = transitionFunc; 
				currentAction = nextStateFunc; 
				firstTransition = false;
			}
			else {
				((TIfAction) currentAction).setElseCase(transitionFunc);
				currentAction = transitionFunc; 
			}
		}
		return nextStateFunc;
	}
	
	public TAction nextStateFunctionVariableInteraction() {
		Map<Connector, AssignmentAction> mapInteractionAction = TransformationFunction.getAssignmentActions(tComponent.getComponent(), variable);
		TIfAction nextStateFunc = new TIfAction();
		
		
		// for each transition generate nested if and else cases
		TAction currentAction = nextStateFunc;
		TIfAction interactionFunction = null;
		boolean firstTransition = true; 
		for(Connector connector : mapInteractionAction.keySet()) {
			interactionFunction = nextStateFunctionInteraction(connector, mapInteractionAction.get(connector));
			if(firstTransition) {
				nextStateFunc = interactionFunction; 
				currentAction = nextStateFunc; 
				firstTransition = false;
			}
			else {
				((TIfAction) currentAction).setElseCase(interactionFunction);
				currentAction = interactionFunction; 
			}
		}
		TAssignmentAction autoAssingment = new TAssignmentAction(this, this, false); 
		if(interactionFunction != null) {
			interactionFunction.setElseCase(autoAssingment);
			return interactionFunction;
		}
		else 
			return autoAssingment;
	}

	
   
	private TIfAction nextStateFunctionInteraction(Connector connector, AssignmentAction assignmentAction) {
		TIfAction interactionAction = new TIfAction();
		TInteraction tInteraction = tComponent.getTCompound().getTInteractions().getTInteraction(connector);
		TInteractions tInteractions = tComponent.getTCompound().getTInteractions();

		TArrayVariable condition = new TArrayVariable(tInteractions.getName(), tInteractions.getType(), tInteraction.getId());
		interactionAction.setCondition(condition);
		interactionAction.setIfCase(new TNamedElement(Parser.decompile(assignmentAction, null, connector, tComponent.getTCompound())));
		interactionAction.setElseCase(null);
		return interactionAction;		
	}



	private TIfAction nextStateFunctionTransition(Transition t) {
		TIfAction transAction = null;
		if(t.getDestination().size() == 1) { 
			AssignmentAction assignAction = TransformationFunction.getAssignmentAction(t, variable);
			TPort port = tComponent.getTPort(TransformationFunction.getPort(t.getTrigger()));
			transAction = new TIfAction();
			
			TExpression checkCurrentState = new TBinaryExpression(
					BinaryOperator.EQUALITY,
					tComponent.getCurrentState(), 
					new TNamedElement("" + tComponent.getTState(t.getOrigin().get(0)))
				);
	
			transAction.setCondition(new TBinaryExpression(
					BinaryOperator.LOGICAL_AND,
					checkCurrentState, 
					port.getSelected()
				));
		
			TAction updateFunction = new TAssignmentAction(
					this, 
					new TNamedElement("" + Parser.decompile(assignAction.getAssignedValue(), tComponent)), false
				);
			transAction.setIfCase(updateFunction);
		}
		return transAction;
	}

	
	private void setName() {
		name = TogetherSyntax.variable + "_" + 
				tComponent.getName() + "_" + 
				variable.getName();
	}

}
