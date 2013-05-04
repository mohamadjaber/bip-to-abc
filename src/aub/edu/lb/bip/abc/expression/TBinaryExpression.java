package aub.edu.lb.bip.abc.expression;

import aub.edu.lb.bip.abc.api.Parser;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;

public class TBinaryExpression implements TExpression {
	
	private BinaryOperator operator;
	private TExpression rightOperand;
	private TExpression leftOperand; 
	
	public TBinaryExpression(BinaryOperator op, TExpression ro, TExpression lo) {
		operator = op; 
		rightOperand = ro; 
		leftOperand = lo; 
	}
	
	public BinaryOperator getOperator() {
		return operator; 
	}
	
	public TExpression getRightOperand() {
		return rightOperand; 
	}
	
	public TExpression getLeftOperand() {
		return leftOperand; 
	}
	
	public void setOperator(BinaryOperator bo) {
		operator = bo; 
	} 
	
	public void setRightOperand(TNamedElement ro) {
		rightOperand = ro; 
	}
	
	public void setLeftOperand(TExpression lo) {
		leftOperand = lo; 
	}

	public String toString() {
		return "(" + rightOperand.toString() + ") " + 
				Parser.decompile(operator) + " (" +
				leftOperand.toString() + ")";
	}
	
}
