package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TEnumType;

public class T2DArrayVariable extends TVariable {
	private TExpression line;
	private TExpression column; 
	
	public T2DArrayVariable(String n, TEnumType t, TExpression line, TExpression column) {
		super(n,t);
		this.line = line; 
		this.column = column; 
	}
	
	public TExpression getNbOfLines() {
		return line;
	}
	
	public TExpression getNbOfColumns() {
		return line;
	}
	
	public String createType() {
		return type.getName() + "[" + line + "][" + column + "]";
	}
	

	
	public String toString() {
		return name + "[" + line + "][" + column + "]";
	}
}
