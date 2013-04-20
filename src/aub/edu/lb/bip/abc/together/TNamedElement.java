package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.expression.TExpression;

public class TNamedElement implements TExpression{
	protected String name; 
	
	public TNamedElement() {
		
	}
	
	public TNamedElement(String name) {
		this.name = name; 
	}
	
	public String getName() {
		return name; 
	}
	
	public String toString() {
		return name; 
	}

}
