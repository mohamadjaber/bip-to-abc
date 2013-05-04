package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TVariable;
import ujf.verimag.bip.Core.Interactions.Component;

public class TCurrentState extends TVariable {
	
	private Component component; 
	
	public TCurrentState(Component comp) {
		component = comp; 
		name = comp.getName() + "_" + TogetherSyntax.currentState;
		type = TEnumType.INT;
	}
	

	public Component getComponent() {
		return component; 
	}
	

}
