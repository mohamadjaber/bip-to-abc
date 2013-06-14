package aub.edu.lb.bip.abc.cmdline;

import java.io.FileNotFoundException;

import ujf.verimag.bip.Core.Interactions.CompoundType;
import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.together.TGenerator;

public class CmdLine {
	
	public static String jarToolName = "bip-to-abc.jar";
	public static String cmdLineHelp = "help: java -jar " + jarToolName + " input.bip output.abc";

	
	public static void main(String[] args) {
		if(args.length != 2) {
			System.err.println(cmdLineHelp);
		}
		else {
			try {
				CompoundType ct = TransformationFunction.ParseBIPFile(args[0]);
				if(ct != null) {
					new TGenerator(ct, args[1]);
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
