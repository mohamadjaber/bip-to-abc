import java.io.FileNotFoundException;

import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.together.TCompound;
import aub.edu.lb.bip.abc.together.TGenerator;
import ujf.verimag.bip.Core.ActionLanguage.Actions.AssignmentAction;
import ujf.verimag.bip.Core.ActionLanguage.Actions.CompositeAction;
import ujf.verimag.bip.Core.Behaviors.AtomType;
import ujf.verimag.bip.Core.Behaviors.PetriNet;
import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;
import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Interactions.ConnectorType;
import ujf.verimag.bip.Core.Interactions.InteractionSpecification;
import BIPTransformation.TransformationFunction;


public class Test1 {
	public static void main(String[] args) throws FileNotFoundException {
		CompoundType ct = TransformationFunction.ParseBIPFile("tmp/bipExamples/traffic.bip");
		TGenerator tg = new TGenerator(ct, "output.c");
	
	}
	
}
