package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.Parser;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.UnaryOperator;

public class TUnaryExpression implements TExpression {
	
	private UnaryOperator operator; 
	private TExpression expression; 

	public TUnaryExpression(UnaryOperator op, TExpression exp) {
		operator = op;
		expression = exp; 
	}
	
	public TExpression getExpression() {
		return expression; 
	}
	public UnaryOperator getOperator() {
		return operator; 
	}
	
	public String toString() {
		return "( " + Parser.decompile(operator) + " " + expression + ") ";
	}

}
