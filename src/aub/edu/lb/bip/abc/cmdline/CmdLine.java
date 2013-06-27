package aub.edu.lb.bip.abc.cmdline;

import java.io.FileNotFoundException;

import ujf.verimag.bip.Core.Interactions.CompoundType;
import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.together.TCompound;
import aub.edu.lb.bip.abc.together.TCompoundOneCycle;
import aub.edu.lb.bip.abc.together.TCompoundTwoCycle;
import aub.edu.lb.bip.abc.together.TGenerator;

public class CmdLine {
	
	public static String jarToolName = "bip-to-abc.jar";
	public static String param1 = "--optimized";

	public static String cmdLineHelp = "help: java -jar " + jarToolName + " [" + param1 + "] input.bip output.abc";

	/**
	 * FIXME: quick version to improve. 
	 * @param args
	 */
	public static void main(String[] args) {

		int cmdLen = args.length;
		if(cmdLen != 2 && cmdLen != 3) {
			System.err.println(cmdLineHelp);
		}
		else {
			try {
				CompoundType ct = null; 
				boolean optimized = false; 
				String outputFileName = null;
				TCompound tCompound = null;
				
				if(cmdLen == 3 && args[0].equals(param1)) {
					ct = TransformationFunction.ParseBIPFile(args[1]);
					outputFileName = args[2];
					optimized = true; 
				}
				else if(cmdLen == 2) {
					ct = TransformationFunction.ParseBIPFile(args[0]);
					outputFileName = args[1];
				}
				if(ct != null) {
					if(optimized) 
					 tCompound = new TCompoundOneCycle(ct);
					else 
						 tCompound = new TCompoundTwoCycle(ct);
					new TGenerator(tCompound, outputFileName);
					System.out.println(args[1] + " has been generated.");
				}
				else
					throw new FileNotFoundException();
			}
			catch (FileNotFoundException e) {
				System.err.println("File not found.");
				System.err.println(cmdLineHelp);
			}
		}
	}

}
