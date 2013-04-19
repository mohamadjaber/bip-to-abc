package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TogetherSyntax;
import ujf.verimag.bip.Core.Interactions.Component;

public class TCurrentState extends TNamedElement{
	
	private Component component; 
	
	
	public TCurrentState(Component comp) {
		component = comp; 
		name = comp.getName() + "_" + TogetherSyntax.currentState;
	}
	

	public Component getComponent() {
		return component; 
	}
	

}
