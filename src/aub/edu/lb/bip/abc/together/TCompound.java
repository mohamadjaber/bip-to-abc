package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.Map;

import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;

public class TCompound {
	private Map<Component, TComponent> mapComponents;
	private TInteractions tInteractions;
	private TPriorities tPriorities;


	private CompoundType compoundType; 
	
	public TCompound(CompoundType compound) {
		compoundType = compound; 
		tInteractions = new TInteractions(this);
		tPriorities = new TPriorities(this);
		
		mapComponents = new HashMap<Component, TComponent>(compound.getSubcomponent().size());

		// Variables of the components use the interaction. 
		for(Component comp: compound.getSubcomponent()) {
			mapComponents.put(comp, new TComponent(comp, this));
		}
	}
	
	public TComponent getTComponent(Component comp) {
		return mapComponents.get(comp);
	}
	
	public CompoundType getCompoundType() {
		return compoundType;
	}
	
	public TInteractions getTInteractions() {
		return tInteractions; 
	}
	
	public TPriorities getPriorities() {
		return tPriorities; 
	}
	
}
