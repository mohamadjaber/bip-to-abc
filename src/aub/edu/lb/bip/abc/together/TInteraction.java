package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.Map;


import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;

import ujf.verimag.bip.Core.Behaviors.Port;
import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Interactions.InnerPortReference;

public class TInteraction extends TVariable {
	private static int constInteractionID = 0; 
	private Connector connector; 
	private Map<Component, Port> mapCompPort = new HashMap<Component, Port>();
	private int size; 
	private final int id; 

	
	public TInteraction(Connector conn) {
		connector = conn;
		size = conn.getActualPort().size();
		for(Object o : conn.getActualPort()) {
			InnerPortReference ipr = (InnerPortReference) o;
			
			//No hierarchical connectors
			assert(ipr.getTargetInstance().getTargetPart() instanceof Component);
			
			Component comp = (Component) ipr.getTargetInstance().getTargetPart();
			Port p = ipr.getTargetPort();
			mapCompPort.put(comp, p);
		}
		setName();
		setType();
		id = constInteractionID++;
	}
	
	
	
	private void setType() {
		type = TEnumType.BOOLEAN;
	}



	public String temporary() {
		return toString() + "_" + TogetherSyntax.temporary;
	}
	
	private void setName() {
		name = TogetherSyntax.interaction + "_" +
				connector.getName();
	}
	
	public int getId() {
		return id; 
	}
	
	public int getSize() {
		return size; 
	}
	

}
