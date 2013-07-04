package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TEnumType;

public class TArrayVariable extends TVariable {
	
	private TExpression index; 
	
	public TArrayVariable(String n, TEnumType t, TExpression index) {
		super(n,t);
		this.index = index; 
	}
	
	public TExpression getIndex() {
		return index; 
	}
	
	public String createType() {
		return type.getName() + "[" + index + "]";
	}
	
	public String toString() {
		return name + "[" + index + "]";
	}
}
