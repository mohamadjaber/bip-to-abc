import java.io.FileNotFoundException;

import aub.edu.lb.bip.abc.together.TCompound;
import aub.edu.lb.bip.abc.together.TCompoundOneCycle;
import aub.edu.lb.bip.abc.together.TGenerator;
import ujf.verimag.bip.Core.Interactions.CompoundType;
import BIPTransformation.TransformationFunction;




public class Test1 {
	public static void main(String[] args) throws FileNotFoundException {
		//CompoundType ct = TransformationFunction.ParseBIPFile("/home/jaberm/work/bipExamples/QuorumBackupDFinder2b.bip");
		CompoundType ct = TransformationFunction.ParseBIPFile("examples/maya/Q_T_error.bip");
		TCompound tCompound = new TCompoundOneCycle(ct, true, null, null);
		
		
		new TGenerator(tCompound, "output/Q_T_error.abc");
	}
}
