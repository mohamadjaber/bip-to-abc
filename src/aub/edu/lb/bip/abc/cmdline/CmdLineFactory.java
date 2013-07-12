package aub.edu.lb.bip.abc.cmdline;

import java.io.File;
import java.util.Scanner;

import jcmdline.BooleanParam;
import jcmdline.CmdLineHandler;
import jcmdline.FileParam;
import jcmdline.HelpCmdLineHandler;
import jcmdline.Parameter;
import jcmdline.StringParam;
import jcmdline.VersionCmdLineHandler;

public class CmdLineFactory {
	private static final String defaultProperty = "property.txt";
	private static final String helpProperty = "Pre and Post condition written in two different lines";
	private static final String defaultOutputABC = "ouput.abc";
	private static final String defaultInputBIP = "input.bip";
	private static final String helpOneCycle = "Generate one cycle-based code";
	private static final String helpInitialization = "Initialize free variables";
	private static final String helpInputBIPFile = "input BIP file name";
	private static final String helpOutputABCFile = "ABC file name to be generated";
	private static final String cmdLineTool = "java -jar bip-to-abc.jar";
	private static final String cmdLineDescription = "Translation from BIP to ABC";
	private static final String helpText = "Have Fun!";
	private static final String propertyErrorMsg = "The property file name should contain the pre and the post conditions in two seperate lines.";
	private static final String helpEmulatorGen = "Generate emulation code " + defaultOutputABC + ".cpp\n" +
			"  1- guide.txt: indices of interactions assigned to selector\n" +
			"  2- integer <= 0: infinite exection\n" +
			"  3- integer > 0: number of cycles to be executed\n";
	
	protected static final String errorGuide = "The guide should contain a list of integers seperated by either commas or spaces.";
	

	
	private FileParam inputBIP; 
	private FileParam outputABC; 
	private FileParam property; 
	
	private BooleanParam oneCycleOption;
	private BooleanParam defaultInitVarOption; 
	
	private StringParam generateEmulationCode;
	
	
	private CmdLineHandler cmdLineHandler;
	
	private String preCondition = null;
	private String postCondition = null; 

	
	public CmdLineFactory(String[] args) {
		inputBIP = new FileParam(defaultInputBIP,	helpInputBIPFile,
				FileParam.EXISTS & FileParam.IS_READABLE,
				!FileParam.OPTIONAL,
				!FileParam.MULTI_VALUED
			);
		
		outputABC = new FileParam(defaultOutputABC, helpOutputABCFile,
				FileParam.NO_ATTRIBUTES,
				!FileParam.OPTIONAL, 
				!FileParam.MULTI_VALUED
			);
		
		property = new FileParam(defaultProperty, helpProperty,
				FileParam.NO_ATTRIBUTES,
				FileParam.OPTIONAL, 
				!FileParam.MULTI_VALUED
			);
		

		// command line options
		oneCycleOption = new BooleanParam("optimized", helpOneCycle);
		defaultInitVarOption = new BooleanParam("initialize-vars", helpInitialization);
		
		generateEmulationCode = new StringParam("emulator", helpEmulatorGen);
	

		cmdLineHandler = new VersionCmdLineHandler("V 1.0",
				(CmdLineHandler) new HelpCmdLineHandler(helpText, cmdLineTool, cmdLineDescription,
						new Parameter[] { oneCycleOption, defaultInitVarOption, generateEmulationCode },
						new Parameter[] { inputBIP, outputABC, property } ));
		
		cmdLineHandler.parse(args);
		
		/**
		 * set pre and post conditions
		 */
		if(property.isSet()) {
			try {
				Scanner scanner = new Scanner(new File(property.getValue().getAbsolutePath()));
				preCondition = scanner.nextLine();
				postCondition = scanner.nextLine();
			} catch(Exception e) {
				System.out.println(propertyErrorMsg);
				System.exit(0);
			}
			
		}			
	}
	
	public String getInputBIPFile() {
		return inputBIP.getValue().getAbsolutePath();
	}
	
	public String getOutputABC() {
		return outputABC.getValue().getAbsolutePath();
	}
	
	public boolean isOptimized() {
		return oneCycleOption.isTrue();
	}
	
	public boolean isDefaultInitVar() {
		return defaultInitVarOption.isTrue();
	}
	
	public String getPreCondition() {
		return preCondition; 
	}
	
	public String getPostCondition() {
		return postCondition; 
	}
	
	public boolean generateEmulationCode() {
		return  generateEmulationCode.isSet();
	}
	
	public String getOptionEmulationCode() {
		return generateEmulationCode.getValue();
	}
	

	
}
