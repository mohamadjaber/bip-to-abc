package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TogetherSyntax;

public class TIfAction implements TAction{
	
	private TExpression condition;
	private TAction ifCase; 
	private TAction elseCase; 
	public TIfAction() {
		condition = null;
		ifCase = null;
		elseCase = null; 
	}
	
	public TIfAction(TExpression cond, TAction ifC, TAction elseC) {
		condition = cond; 
		ifCase = ifC; 
		elseCase = elseC; 
	}
	
	public void setCondition(TExpression cond) {
		condition = cond; 
	}
	
	public void setIfCase(TAction ifC) {
		ifCase = ifC; 
	}
	
	public void setElseCase(TAction elseC) {
		elseCase = elseC; 
	}
	
	
	public TExpression getCondition() {
		return condition; 
	}
	
	public TAction getIfCase() {
		return ifCase;
	}
	
	public TAction getElseCase() {
		return elseCase; 
	}
	
	private void setLastElseCase(TIfAction ifAction, TAction a) {
		if(ifAction.condition == null || ifAction.ifCase == null)
			return;
		if(ifAction.elseCase == null) {
			ifAction.elseCase = a;
		}
		else {
			if(ifAction.elseCase instanceof TIfAction)
				setLastElseCase((TIfAction)ifAction.elseCase, a);
		}
	}
	
	public void setLastElseCase(TAction a) {
		setLastElseCase(this, a);
	}
	
	
	public String toString() {
		return TogetherSyntax.if_condition + "(" + condition + ") {\n"  +
				ifCase + "\n" +
				"} else {\n" +
				elseCase + "\n" +
				"}";
	}
	
}
