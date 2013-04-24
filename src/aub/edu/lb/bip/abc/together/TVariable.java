package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.expression.TExpression;

public class TVariable extends TNamedElement{
	
	protected TEnumType type; 


	public TVariable() {
		
	}
	

	public TVariable(String n, TEnumType t) {
		name = n; 
		type = t; 
	}
	
	
	public String createVariable() {
		return type.getName() + " " + this + ";";
	}
	
	public String initialize(TExpression exp) {
		return  type.getName() + " " + this + exp + ";";
	}
	
	



}
