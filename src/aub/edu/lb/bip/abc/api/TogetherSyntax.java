package aub.edu.lb.bip.abc.api;

public class TogetherSyntax {
	
	public final static String state = "state";
	public final static String variable = "var";
	public final static String port = "port";
	public final static String interaction = "interaction";
	public final static String currentState = "currentState";


	public final static String port_local_enable = "le";
	public final static String port_inter_enable = "ie";
	public final static String port_selected = "s";

	public final static String temporary = "tmp";

	
	
	public final static String wire = "wire";
	public final static String boolean_type = "boolean";
	public final static String int_type = "int";
	public final static String const_var = "const";
	public final static String if_condition = "if";
	public final static String else_condition = "else";
	public final static String while_loop = "if";
	public final static String true_condition = "true";

	public final static String assignment = "=";
	public final static String equal = "==";
	public final static String greater = ">";
	public final static String greaterEqual = ">=";
	public final static String less = "<";
	public final static String lessEqual = "<=";


	
	public static String declareWire(String type, String wireName) {
		return wire + " " + type + " " + wireName + ";";
	}
	
	public static String declareVar(String type, String varName) {
		return type + " " + varName + ";";
	}
	
	public static String initializeVar(String varName, String initialValue) {
		return varName + " = " + initialValue + ";";
	}

	public static String createInitializeConstVar(String type, String varName, String initialValue) {
		return const_var + " " + type + " " + varName + " = " + initialValue + ";";
	}
	







}
