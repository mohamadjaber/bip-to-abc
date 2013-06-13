import java.io.FileNotFoundException;
import aub.edu.lb.bip.abc.together.TGenerator;
import ujf.verimag.bip.Core.Interactions.CompoundType;
import BIPTransformation.TransformationFunction;




public class Test1 {
	public static void main(String[] args) throws FileNotFoundException {
<<<<<<< HEAD
		//CompoundType ct = TransformationFunction.ParseBIPFile("/home/jaberm/work/bipExamples/QuorumBackupDFinder2b.bip");
		CompoundType ct = TransformationFunction.ParseBIPFile("tmp/bipExamples/atm100.bip");

=======
		CompoundType ct = TransformationFunction.ParseBIPFile("tmp/bipExamples/traffic.bip");
>>>>>>> 802ac097f0cf74eda82a71e29fb9a6189c507734
		new TGenerator(ct, "output1.c");
	}
}
