package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TEnumType;

public class T2DArrayVariable extends TVariable {
	private int nbOfLines;
	private int nbOfColumns; 
	
	public T2DArrayVariable(String n, TEnumType t, int line, int column) {
		super(n,t);
		nbOfLines = line; 
		nbOfColumns = column; 
	}
	
	public int getNbOfLines() {
		return nbOfLines;
	}
	
	public int getNbOfColumns() {
		return nbOfColumns;
	}
}
