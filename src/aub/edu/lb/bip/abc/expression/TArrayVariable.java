package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TEnumType;

public class TArrayVariable extends TVariable {
	
	private int index; 
	
	public TArrayVariable(String n, TEnumType t, int index) {
		super(n,t);
		this.index = index; 
	}
	
	public int getIndex() {
		return index; 
	}
	
	public String toString() {
		return name + "[" + index + "]";
	}
	
	public TVariable getInstance() {
		return new TVariable(name, type);
	}
}
