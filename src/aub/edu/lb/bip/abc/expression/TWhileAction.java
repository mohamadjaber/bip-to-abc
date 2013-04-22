package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.TogetherSyntax;

public class TWhileAction implements TAction{
	private TAction action; 
	private TExpression condition; 
	
	public TWhileAction(TAction action, TExpression condition) {
		this.action = action; 
		this.condition = condition; 
	}
	
	public TAction getAction() {
		return action; 
	}
	
	public TExpression getCondition() {
		return condition; 
	}
	
	
	public String toString() {
		return TogetherSyntax.while_loop + "(" + condition + ") {\n"+
				action + "\n" +
				"}";
	}
	

}
