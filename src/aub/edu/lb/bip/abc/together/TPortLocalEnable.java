package aub.edu.lb.bip.abc.together;

import java.util.List;

import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.UnaryOperator;
import ujf.verimag.bip.Core.Behaviors.Transition;
import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TBinaryExpression;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TUnaryExpression;
import aub.edu.lb.bip.abc.expression.TVariable;

public class TPortLocalEnable extends TVariable{
	
	private TPort tPort; 
	
	
	
	public TPortLocalEnable(String n, TPort p) {
		name = n; 
		tPort = p; 
		type = TEnumType.WIRE_BOOLEAN;
	}
	
	// Enablement expression
	// ((state1 /\ guard1) \/ (state2 /\ guard2) ... ) /\ (!portSelected)
	public TExpression getEnablementExpression() {
		List<Transition> transitions = TransformationFunction.getTransitions(tPort.getPort());
		TExpression expression = new TNamedElement(TogetherSyntax.false_condition);
		for(Transition t: transitions) {
			TExpression andTransition = new TBinaryExpression(BinaryOperator.EQUALITY,
					tPort.getTComponent().getTState(t.getOrigin().get(0)),
					tPort.getTComponent().getCurrentState()
				);
			if(t.getGuard() != null) {
				andTransition = new TBinaryExpression(
						BinaryOperator.LOGICAL_AND, 
						andTransition,
						new TNamedElement(Parser.decompile(t.getGuard(), tPort.getTComponent()))
					);
			}
			
			
			expression = new TBinaryExpression(
					BinaryOperator.LOGICAL_OR,
					expression,
					andTransition
				);
			
		}
		expression = new TBinaryExpression(
				BinaryOperator.LOGICAL_AND,
				expression,
				new TUnaryExpression(UnaryOperator.LOGICAL_NOT, 
						new TNamedElement(tPort.getSelected().getName()))
			); 	
		return expression; 
	}

	public TPort getPort() {
		return tPort; 
	}
	
}
