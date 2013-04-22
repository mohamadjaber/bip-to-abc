package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TogetherSyntax;

public class TIfAction implements TAction{
	
	private TExpression condition;
	private TAction ifCase; 
	private TAction elseCase; 
	
	public TIfAction() {
		
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
	
	
	public String toString() {
		return TogetherSyntax.if_condition + "(" + condition + ") {\n"  +
				ifCase + "\n" +
				"} else {\n" +
				elseCase + "\n" +
				"}";
	}

}
