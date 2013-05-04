package aub.edu.lb.bip.abc.expression;

import java.util.LinkedList;
import java.util.List;

public class TFunctionCall implements TExpression {
	
	private String functionName; 
	private List<TExpression> actualData; 
	
	public TFunctionCall(String fn, List<TExpression> ad) {
		functionName = fn; 
		actualData = new LinkedList<TExpression>(ad);
	}
	
	public String getFunctionName() {
		return functionName; 
	}
	
	public List<TExpression> getActualData() {
		return actualData; 
	}

}
