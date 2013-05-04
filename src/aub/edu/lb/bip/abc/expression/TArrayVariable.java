package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TEnumType;

public class TArrayVariable extends TVariable {
	
	private int size; 
	
	public TArrayVariable(String n, TEnumType t, int size) {
		super(n,t);
		this.size = size; 
	}
	
	public int getSize() {
		return size; 
	}
}
