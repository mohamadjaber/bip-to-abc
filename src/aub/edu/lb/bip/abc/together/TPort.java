package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TogetherSyntax;
import ujf.verimag.bip.Core.Behaviors.Port;

public class TPort extends TNamedElement {
	protected Port port;
	protected TComponent tComponent;
	
	protected TPortLocalEnable localEnable;
	protected TPortInteractionEnable interactionEnable; 
	protected TPortSelected selected; 
	
	
	
	public TPort(Port p, TComponent comp) {
		port = p; 
		tComponent = comp; 
		setName();
		setPorts();
	}
	
	private void setPorts() {
		setSelected();
		setLocalEnable();
		setInteractionEnable();
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
	
	private void setSelected() {
		selected = new TPortSelected(TogetherSyntax.port + "_" + 
				TogetherSyntax.port_selected + "_" +
				tComponent.getName() + "_" +
				port.getName()
			, this);
	}
	
	
	private void setInteractionEnable() {
		interactionEnable = new TPortInteractionEnable(TogetherSyntax.port + "_" + 
				TogetherSyntax.port_inter_enable+ "_" +
				tComponent.getName() + "_" +
				port.getName()
			, this);
	}
	
	public TPortLocalEnable getLocalEnable() {
		return localEnable; 
	
	}
		
	public TPortInteractionEnable getInteractionEnable() {
		return interactionEnable; 
	}
	
	public TPortSelected getSelected() {
		return selected; 
	}
	
	public TComponent getTComponent() {
		return tComponent; 
	}
	
	public Port getPort() {
		return port; 
	}

}
