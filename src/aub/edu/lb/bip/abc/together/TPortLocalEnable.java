package aub.edu.lb.bip.abc.together;

import java.util.List;

import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.UnaryOperator;
import ujf.verimag.bip.Core.Behaviors.Transition;
import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TBinaryExpression;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TUnaryExpression;

public class TPortLocalEnable extends TNamedElement{
	
	private TPort port; 
	
	// Enablement expression
	// ((state1 /\ guard1) \/ (state2 /\ guard2) ... ) /\ (!portSelected)
	private TExpression expression; 
	
	public TPortLocalEnable(String n, TPort p) {
		name = n; 
		port = p; 
		setExpression();
	}
	
	// Enablement expression
	// ((state1 /\ guard1) \/ (state2 /\ guard2) ... ) /\ (!portSelected)
	private void setExpression() {
		List<Transition> transitions = TransformationFunction.getTransitions(port.getPort());
		expression = new TNamedElement(TogetherSyntax.true_condition);
		for(Transition t: transitions) {
			TExpression andTransition = new TBinaryExpression(
					BinaryOperator.LOGICAL_AND, 
					port.getComponent().getState(t.getOrigin().get(0)),
					new TNamedElement(Parser.decompile(t.getGuard(), port.getComponent()))
				);
			expression = new TBinaryExpression(
					BinaryOperator.LOGICAL_OR,
					expression,
					andTransition
				);
			
		}
		expression = new TBinaryExpression(
				BinaryOperator.LOGICAL_OR,
				expression,
				new TUnaryExpression(UnaryOperator.LOGICAL_NOT, 
						new TNamedElement(port.getSelected().getName()))
			); 	
	}

	public TPort getPort() {
		return port; 
	}
	
}
