package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TogetherSyntax;
import ujf.verimag.bip.Core.Behaviors.Port;

public class TPort extends TNamedElement {
	private Port port;
	private TComponent component;
	
	private TPortLocalEnable localEnable;
	private TPortInteractionEnable interactionEnable; 
	private TPortSelected selected; 
	
	
	
	public TPort(Port p, TComponent comp) {
		port = p; 
		component = comp; 
		setName();
		setPorts();
	}
	
	private void setPorts() {
		setLocalEnable();
		setSelected();
		setInteractionEnable();
	}

	public void setName() {
		name += component.getName() + "_" + port.getName();
	}
	
	
	
	private void setLocalEnable() {
		localEnable = new TPortLocalEnable(TogetherSyntax.port + "_" + 
				TogetherSyntax.port_local_enable + "_" +
				component.getName() + "_" +
				port.getName()
			, this);
	}
	
	private void setSelected() {
		selected = new TPortSelected(TogetherSyntax.port + "_" + 
				TogetherSyntax.port_selected + "_" +
				component.getName() + "_" +
				port.getName()
			, this);
	}
	
	
	private void setInteractionEnable() {
		interactionEnable = new TPortInteractionEnable(TogetherSyntax.port + "_" + 
				TogetherSyntax.port_inter_enable+ "_" +
				component.getName() + "_" +
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
	
	public TComponent getComponent() {
		return component; 
	}
	
	public Port getPort() {
		return port; 
	}



	

}
