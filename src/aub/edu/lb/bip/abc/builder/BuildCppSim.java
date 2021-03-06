package aub.edu.lb.bip.abc.builder;

import java.io.File;
import java.io.PrintStream;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;


public class BuildCppSim {
	
	private PrintStream output; 
	private static String suffixOutput = ".cpp"; 
	private static String suffixVariableName = "_nsf"; 
	
	private Map<String, String> mapVariables; 
	
	private String counterVarName = "__cycle_num__";
	private int nbInteractions = 0;
	private String interactionsArray = "__interactionsArray__";
	
	/**
	 * 
	 * @param fileName the name of a dotogether file generated from BIP. 
	 * @param limit: number of cycles [default -1, that is, infinitely run]
	 * @param interactions: selector guidance. [default null]
	 */
	public BuildCppSim(String fileName, int limit, int[] interactions) {
		try {
			output = new PrintStream(new File(fileName + suffixOutput));
			Scanner input = new Scanner(new File(fileName));
			
			mapVariables = new HashMap<String, String>();
			
			boolean findWhileTrue = false; 			
			
			output.println("#include<iostream>");
			output.println("#include<stdlib.h>");
			output.println("#include<time.h>");

			output.println("using namespace std;");
			output.println("#define wire");
			output.println("#define boolean bool");

			output.println("int main() {");
			output.println("  int " + counterVarName + " = 0;");
			output.println("  int __sed = time(NULL);");
			output.println("  srand (__sed);");
			output.println("cout<< \"The sed is \" << __sed << endl;");


			if(interactions != null) {
				output.println("  int " + interactionsArray +  "[" + interactions.length + "] = " + 
						Arrays.toString(interactions).replaceAll("\\[", "{").replaceAll("\\]", "}") + ";");
			}
			
			while(input.hasNextLine()) {
				String line = input.nextLine();
				
				if(line.contains("@pre") || line.contains("@post")); // do nothing
	
				else if(line.matches("^\\s*wire boolean\\[\\d*\\][^;]+;")) {
					String arrayVariable = line.replaceFirst("(^\\s*wire boolean)(\\[\\d*\\])([^;]+);", "$1 $3$2;");
					output.println(arrayVariable);
					nbInteractions = Integer.parseInt(line.replaceFirst("^\\s*wire boolean\\[(\\d*)\\][^;]+;", "$1"));
				}
				else if(line.matches("^\\s*wire int\\[\\d*\\][^;]+;")) {
					String arrayVariable = line.replaceFirst("(^\\s*wire int)(\\[\\d*\\])([^;]+);", "$1 $3$2;");
					output.println(arrayVariable);
				}
				else if(line.matches("^\\s*wire ")) {
					output.println(line);
				}  
				else if(line.matches("^\\s*boolean\\[\\d*\\][^;]+;")) {
					String arrayVariable = line.replaceFirst("(^\\s*boolean)(\\[\\d*\\])([^;]+);", "$1 $3$2;");
					output.println(arrayVariable);
				}
				else if(line.matches("^\\s*int\\[\\d*\\][^;]+;")) {
					String arrayVariable = line.replaceFirst("(^\\s*int)(\\[\\d*\\])([^;]+);", "$1 $3$2;");
					output.println(arrayVariable);
				}
				else if(line.matches("\\s*int [^;]+;")) {
					String vName = line.replaceFirst("\\s*int ([^;]+);", "$1");
					output.println(line);
					mapVariables.put(vName.trim(), "int");
					output.println("  int " + vName + suffixVariableName + ";");
				} else if(line.matches("\\s*boolean [^;]+;")) {
					String vName = line.replaceFirst("\\s*boolean ([^;]+);", "$1");
					output.println(line);
					mapVariables.put(vName.trim(), "boolean");
					output.println("  boolean " + vName + suffixVariableName + ";");
				} else if(line.contains("do_together")) {
					output.println("{");
				} else if(line.contains("while(true")) {
					
					//	initially put the value of the variables in their buffers. 
					for(String varName: mapVariables.keySet()) {
						output.println("  " + varName + suffixVariableName + " = " + varName + ";");
					}
					
					findWhileTrue = true; 
					output.println(line);
					if(interactions != null)
						output.println("  wire_selector = " + interactionsArray + "[" + counterVarName +"];");
					else 
						output.println("  wire_selector = rand() % " +  nbInteractions + ";");
				} else if(line.matches("^\\s*[^=]+=[^=]+")) {
					if(!findWhileTrue) {
						output.println(line);
					} else {
						String vName = line.replaceFirst("\\s*([^=]+)=[^=]+", "$1");
						vName = vName.trim();
						if(mapVariables.containsKey(vName)) {
							String updateExpression = line.replaceFirst("(\\s*)([^=]+)(=[^=]+)", "$1"+ vName + suffixVariableName + "$3");
							output.println(updateExpression);
						}
						else {
							output.println(line);
						}
					}
				} else if(line.matches("^}\\s*")) {
					if(!findWhileTrue) {
						output.println(line);
					}
					else {
						for(String varName: mapVariables.keySet()) {
							output.println("  " + varName + " = " + varName + suffixVariableName + ";");
						}
						
						output.println("cout << \"cycle\" << \" \" << " + counterVarName + "<< \",\";");
					

						
						for(String varName: mapVariables.keySet()) {
							output.println("  cout<< \"" + varName + "\" << \" \" << " + varName + " << \",\"; ");
						}
						
						// print selected interaction
						output.println("  for(int i = 0; i < " + this.nbInteractions + "; i++) ");
						output.println("  	if(interactions_enablement[i] == true) cout<< \"selected\" << \" \"  << i << \",\"; ");
				
						output.println("  cout<< endl;");	

						output.println(counterVarName + "++;");
						if(limit > 0)
							output.println("if(" + counterVarName + " >= " + limit + ") break;");
						
						output.println("}"); // end while true
					}
				}
				else {
					output.println(line);
				}
 			}
			output.println("}");
			input.close();
		}
		catch(Exception e) {
			System.out.println(e);
		}
	}
	
	
	public static void main(String[] args) {
		int[] interactions = {16, 24, 25, 19, 12, 20, 22, 18, 27, 13, 28, 29, 23, 10, 31, 11, 5, 3, 17, 19, 12, 20, 21, 23, 14, 0, 4};
		new BuildCppSim("output/Quorum22OneCycleERROR.abc", interactions.length, interactions);
		
		//int[] interactions = {18, 26, 27, 21, 12-16, 22, 24, 20, 29, 13-17, 30, 31, 25, 10, 33, 11, 5, 3, 19, 21, 12-16, 22, 23, 25, 14, 0, 4};
		//int[] interactions = {18, 26, 27, 21, 12, 22, 24, 20, 29, 13, 30, 31, 25, 10, 33, 11, 5, 3, 19, 21, 12, 22, 23, 25, 14, 0, 4};
		//new BuildCppSim("output/Quorum22OneCycle.abc", interactions.length, interactions);
	}
}
