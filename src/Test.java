import BIPTransformation.TransformationFunction;
import ujf.verimag.bip.Core.ActionLanguage.Actions.AssignmentAction;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryExpression;
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


public class Test {
	
	public static void main(String[] args) {
		CompoundType ct = TransformationFunction.ParseBIPFile("tmp/bipExamples/traffic.bip");
		Component c = ct.getSubcomponent().get(0);
		System.out.println(c);
		AtomType at = (AtomType)c.getType();
		
		Variable v = at.getVariable().get(0);
		System.out.println(v.getType());
		
		
		
	}

}
