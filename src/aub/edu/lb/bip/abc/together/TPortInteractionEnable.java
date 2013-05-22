package aub.edu.lb.bip.abc.together;

import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;
import ujf.verimag.bip.Core.Interactions.ActualPortParameter;
import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Interactions.InnerPortReference;
import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TArrayVariable;
import aub.edu.lb.bip.abc.expression.TBinaryExpression;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TVariable;

public class TPortInteractionEnable extends TVariable {

	private TPort tPort; 
	
	public TPortInteractionEnable(String n, TPort p) {
		name = n; 
		tPort = p; 
		type = TEnumType.WIRE_BOOLEAN;
	}
	
	public TPort getTPort() {
		return tPort; 
	}
	
	public TExpression getInteractionEnablement() {
		TExpression expressionEnablement = new TNamedElement(TogetherSyntax.false_condition);
		for(Connector connector : tPort.getTComponent().getTCompound().getCompoundType().getConnector()) {
			for(ActualPortParameter app : connector.getActualPort()) {
				InnerPortReference ipr = (InnerPortReference) app;
				if(ipr.getTargetPort().equals(tPort.port) && ipr.getTargetInstance().getTargetPart().equals(tPort.tComponent.getComponent())) {
					TInteractions interactions = tPort.getTComponent().getTCompound().getTInteractions(); 
					TArrayVariable arrayVariable = new TArrayVariable(
							interactions.getName(),interactions.getType(), 
							interactions.getTInteraction(connector).getId());
					expressionEnablement = new TBinaryExpression(BinaryOperator.LOGICAL_OR,
							expressionEnablement, 
							arrayVariable);

					break;
				}
			}
		}
		return expressionEnablement; 
	}
}
