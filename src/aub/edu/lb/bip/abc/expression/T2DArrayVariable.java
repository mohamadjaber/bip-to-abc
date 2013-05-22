package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TEnumType;

public class T2DArrayVariable extends TVariable {
	private int line;
	private int column; 
	
	public T2DArrayVariable(String n, TEnumType t, int line, int column) {
		super(n,t);
		this.line = line; 
		this.column = column; 
	}
	
	public int getNbOfLines() {
		return line;
	}
	
	public int getNbOfColumns() {
		return line;
	}
	
	public String toString() {
		return name + "[" + line + "][" + column + "]";
	}
	
	public TVariable getInstance() {
		return new TVariable(name, type);
	}
}
