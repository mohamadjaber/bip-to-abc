package aub.edu.lb.bip.abc.api;


public enum TEnumType {
	INT(0, "int"),
	CONST_INT(1, "const int"),
	BOOLEAN(2, "boolean"),
	WIRE_BOOLEAN(3, "wire boolean"),
	ARRAY_WIRE_BOOLEAN(4, "wire boolean"),
	TwoD_ARRAY_WIRE_BOOLEAN(5, "wire boolean");

	private int value; 
	private String type; 
	
	public static final int INT_VALUE = 0;
	public static final int CONS_INT_VALUE = 1;
	public static final int BOOLEAN_VALUE = 2;
	public static final int WIRE_BOOLEAN_VALUE = 3;
	public static final int ARRAY_WIRE_BOOLEAN_VALUE = 4;
	public static final int TwoD_ARRAY_WIRE_BOOLEAN_VALUE = 5;
	
	TEnumType(int v, String t) {
		value = v;
		type = t; 
	}

	public String getName() {
		return type; 
	}

	public int getValue() {
		return value; 
	}
}
