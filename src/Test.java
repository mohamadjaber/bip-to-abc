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
import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;


public class Test {
	
	public static void main(String[] args) {
		CompoundType ct = TransformationFunction.ParseBIPFile("tmp/bipExamples/traffic.bip");
		Component c = ct.getSubcomponent().get(0);
		System.out.println(c);
		AtomType at = (AtomType)c.getType();
		PetriNet pn = (PetriNet) at.getBehavior();
		Expression e;
		BinaryExpression be;
		AssignmentAction a; 
		State s = pn.getInitialState().get(0);
		Transition t = (Transition) s.getOutgoing().get(0);
		PortDefinitionReference pdr = (PortDefinitionReference) t.getTrigger();
		
		Port p = at.getPort().get(0);
		DefinitionBinding db = (DefinitionBinding) p.getBinding();
		System.out.println(db.getDefinition());
		//System.out.println(p.getBinding());
		PortDefinition p1 = at.getPortDefinition().get(0);
		System.out.println(p1);
		//Port p1; 
		//Port p = (Port) pdr.getTarget();
		//System.out.println(t.getTrigger());
		
	}

}
