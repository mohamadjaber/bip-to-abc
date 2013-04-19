package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TogetherSyntax;
import ujf.verimag.bip.Core.Behaviors.Port;
import ujf.verimag.bip.Core.Interactions.Component;

public class TPort extends TNamedElement {
	private Port port;
	private Component component;
	
	
	public TPort(Port p, Component comp) {
		port = p; 
		component = comp; 
		setName();
	}
	
	public void setName() {
		name += component.getName() + "_" + port.getName();
	}
	
	public String declareEnable() {
		return TogetherSyntax.declareWire(TogetherSyntax.boolean_type, localEnable());
	}
	
	public String declareSelected() {
		return TogetherSyntax.declareWire(TogetherSyntax.boolean_type, selected());
	}
	
	public String declareInterEnable() {
		return TogetherSyntax.declareWire(TogetherSyntax.boolean_type, interactionEnable());
	}
	
	public String localEnable() {
		return TogetherSyntax.port + "_" + 
				TogetherSyntax.port_local_enable + "_" +
				component.getName() + "_" +
				port.getName();
	}
	
	public String selected() {
		return TogetherSyntax.port + "_" + 
				TogetherSyntax.port_selected + "_" +
				component.getName() + "_" +
				port.getName();
	}
	
	public String initializeSelected(boolean b) {
		return TogetherSyntax.initializeVar(selected(), "" + b);
	}
	
	public String interactionEnable() {
		return TogetherSyntax.port + "_" + 
				TogetherSyntax.port_inter_enable+ "_" +
				component.getName() + "_" +
				port.getName();
	}
	

}
