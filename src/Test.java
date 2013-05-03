import BIPTransformation.TransformationFunction;
import ujf.verimag.bip.Core.ActionLanguage.Actions.AssignmentAction;
import ujf.verimag.bip.Core.ActionLanguage.Actions.CompositeAction;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.RequiredDataParameterReference;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.VariableReference;
import ujf.verimag.bip.Core.Behaviors.AtomType;
import ujf.verimag.bip.Core.Behaviors.DefinitionBinding;
import ujf.verimag.bip.Core.Behaviors.Expression;
import ujf.verimag.bip.Core.Behaviors.PetriNet;
import ujf.verimag.bip.Core.Behaviors.Port;
import ujf.verimag.bip.Core.Behaviors.PortDefinition;
import ujf.verimag.bip.Core.Behaviors.PortDefinitionReference;
import ujf.verimag.bip.Core.Behaviors.State;
import ujf.verimag.bip.Core.Behaviors.Transition;
import ujf.verimag.bip.Core.Behaviors.Variable;
import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;
import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Interactions.ConnectorType;
import ujf.verimag.bip.Core.Interactions.InnerPortReference;
import ujf.verimag.bip.Core.Interactions.Interaction;
import ujf.verimag.bip.Core.Interactions.InteractionSpecification;
import ujf.verimag.bip.Core.Interactions.PartElementReference;
import ujf.verimag.bip.Core.Priorities.PriorityRule;


public class Test {
	
	public static void main(String[] args) {
		CompoundType ct = TransformationFunction.ParseBIPFile("tmp/bipExamples/traffic.bip");
		PriorityRule p = ct.getPriorityRule().get(0);
		Interaction i = (Interaction) p.getLower();
		PartElementReference conn = (PartElementReference) i.getConnector(); 
		Component c = ct.getSubcomponent().get(0);
		AtomType at = (AtomType)c.getType();
		PetriNet pn = (PetriNet) at.getBehavior();
		CompositeAction a = (CompositeAction)pn.getTransition().get(0).getAction();
		AssignmentAction aa = (AssignmentAction)a.getContent().get(0);
		System.out.println(aa.getAssignedTarget());
		Variable v = at.getVariable().get(0);
		ConnectorType connType = ct.getConnector().get(1).getType();
		
		InteractionSpecification is = connType.getInteractionSpecification().get(0);
		CompositeAction compositeAction = (CompositeAction) is.getDownAction();
		AssignmentAction assignmentAction = (AssignmentAction) compositeAction.getContent().get(0);
		
		RequiredDataParameterReference rdpr = (RequiredDataParameterReference) assignmentAction.getAssignedTarget();
		System.out.println(rdpr.getPortReference().getTarget());
		System.out.println(rdpr.getTargetParameter());
		
		
		
		InnerPortReference ipr = (InnerPortReference) ct.getConnector().get(1).getActualPort().get(0);
		System.out.println(((PortDefinition)((DefinitionBinding)ipr.getTargetPort().getBinding()).getDefinition()).getExposedVariable().get(0));
		
		System.out.println(connType.getPortParameter().get(0));

	}

}