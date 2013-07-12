package aub.edu.lb.bip.abc.cmdline;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

import ujf.verimag.bip.Core.Interactions.CompoundType;
import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.builder.BuildCppSim;
import aub.edu.lb.bip.abc.together.TCompound;
import aub.edu.lb.bip.abc.together.TCompoundOneCycle;
import aub.edu.lb.bip.abc.together.TCompoundTwoCycle;
import aub.edu.lb.bip.abc.together.TGenerator;

public class CmdLine {

	public static void main(String[] args)  {
		
		CmdLineFactory cmdLine = new CmdLineFactory(args);

		CompoundType ct = TransformationFunction.ParseBIPFile(cmdLine.getInputBIPFile());
		TCompound tCompound = null;
		
		if(cmdLine.isOptimized()) {
			tCompound = new TCompoundOneCycle(ct, cmdLine.isDefaultInitVar(), cmdLine.getPreCondition(), cmdLine.getPostCondition());
		} else {
			tCompound = new TCompoundTwoCycle(ct, cmdLine.isDefaultInitVar(), cmdLine.getPreCondition(), cmdLine.getPostCondition());		
		}
		new TGenerator(tCompound, cmdLine.getOutputABC());
		System.out.println(cmdLine.getOutputABC() + " has been generated.");
		
		
		/**
		 * Generate Emulation Code
		 */
		
		if(cmdLine.generateEmulationCode()) {
			String option = cmdLine.getOptionEmulationCode(); 
			try{
				int limit = Integer.parseInt(option);
				if(limit <= 0) {
					new BuildCppSim( cmdLine.getOutputABC(), -1 , null);

				} else {
					new BuildCppSim( cmdLine.getOutputABC(), limit, null);
				} 
			} catch (NumberFormatException e) {
				int[] interactionIds = getInteractionIndices(cmdLine.getOptionEmulationCode());
				new BuildCppSim( cmdLine.getOutputABC() , interactionIds.length, interactionIds);
			}
			System.out.println(cmdLine.getOutputABC() + ".cpp" + " has been generated.");
		}
		
	}
	
	
	
	private static int[] getInteractionIndices(String guide) {
		int[] interactionIds = null;
		try {
			int countInteractions = countIntegers(guide);
			interactionIds = new int[countInteractions];
			Scanner scanner = new Scanner(new File(guide));
			scanner.useDelimiter("\\s*,\\s*|\\s+");
			int i = 0; 
			while(scanner.hasNextInt()) {
				interactionIds[i++] = scanner.nextInt();
			}
		} catch (FileNotFoundException e) {
			System.out.println(CmdLineFactory.errorGuide);
			System.exit(0);
		}
		return interactionIds;
	}
	
	private static int countIntegers(String guide) {
		int count = 0; 
		try {
			Scanner scanner = new Scanner(new File(guide));

			scanner.useDelimiter("\\s*,\\s*|\\s+");
			while(scanner.hasNextInt()) {
				scanner.nextInt();
				count++;
			}
		} catch (FileNotFoundException e) {
			System.out.println(CmdLineFactory.errorGuide);
			System.exit(0);
		}
		return count;
	}

	
}
