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
	
	public TAssignmentAction create() {
		return new TAssignmentAction(this, null, true);
	}
	
	public TAssignmentAction create(TExpression e) {
		return new TAssignmentAction(this, e, true);
	}
	
	public TAssignmentAction set(TExpression e) {
		return new TAssignmentAction(this, e, false);
	}
	
	public TAssignmentAction set(TExpression e, int i) {
		return new TAssignmentAction(this, e, false, i);
	}
	
	public TAssignmentAction set(TExpression e, int i, int j) {
		return new TAssignmentAction(this, e, false, i, j);
	}
}
