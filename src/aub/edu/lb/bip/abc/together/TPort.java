package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import ujf.verimag.bip.Core.Behaviors.Port;

public class TPort extends TNamedElement {
	protected Port port;
	protected TComponent tComponent;
	
	protected TPortLocalEnable localEnable;
	protected TPortEnable enable; 
	@SuppressWarnings("deprecation")
	protected TPortEnableDelayed enableDelayed; 
	
	
	
	public TPort(Port p, TComponent comp) {
		port = p; 
		tComponent = comp; 
		setName();
		setPorts();
	}
	
	private void setPorts() {
		setEnableDelayed();
		setLocalEnable();
		setEnable();
	}

	public void setName() {
		name += tComponent.getName() + "_" + port.getName();
	}
	
	
	
	private void setLocalEnable() {
		localEnable = new TPortLocalEnable(TogetherSyntax.port + "_" + 
				TogetherSyntax.port_local_enable + "_" +
				tComponent.getName() + "_" +
				port.getName()
			, this);
	}
	
	@SuppressWarnings("deprecation")
	private void setEnableDelayed() {
		enableDelayed = new TPortEnableDelayed(TogetherSyntax.port + "_" + 
				TogetherSyntax.port_enable_delayed + "_" +
				tComponent.getName() + "_" +
				port.getName()
			, this);
	}
	
	
	private void setEnable() {
		enable = new TPortEnable(TogetherSyntax.port + "_" + 
				TogetherSyntax.port_enable + "_" +
				tComponent.getName() + "_" +
				port.getName()
			, this);
	}
	
	public TPortLocalEnable getLocalEnable() {
		return localEnable; 
	
	}
		
	public TPortEnable getEnable() {
		return enable; 
	}
	
	@SuppressWarnings("deprecation")
	public TPortEnableDelayed getEnableDelayed() {
		return enableDelayed; 
	}
	
	public TComponent getTComponent() {
		return tComponent; 
	}
	
	public Port getPort() {
		return port; 
	}

}
