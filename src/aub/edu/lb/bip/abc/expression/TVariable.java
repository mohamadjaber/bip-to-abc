package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TEnumType;

public class TVariable extends TNamedElement {
	
	protected TEnumType type; 


	public TVariable() {
	}
	
	public TVariable(String n, TEnumType t) {
		name = n; 
		type = t; 
	}
	
	public TEnumType getType() {
		return type;
	}
	
	public TAssignmentAction create() {
		return new TAssignmentAction(this, null, true);
	}
	
	public TAssignmentAction create(TExpression e) {
		return new TAssignmentAction(this, e, true);
	}
	
	public TAssignmentAction set(TExpression e) {
		return new TAssignmentAction(this, e, false);
	}

}
