package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.Map;

import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;
import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAction;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TVariable;

public abstract class TCompound {
	protected Map<Component, TComponent> mapComponents;
	protected TInteractions tInteractions;
	protected TPriorities tPriorities;
	protected TVariable selecter; 
	protected TCompositeAction togetherAction; 

	protected CompoundType compoundType; 
	
	protected boolean withPriority; 
	
	public TCompound(CompoundType compound) {
		compoundType = compound; 
		withPriority = compoundType.getPriorityRule().size() > 0;

		tInteractions = new TInteractions(this);
		if(withPriority)
			tPriorities = new TPriorities(this);
		selecter = new TVariable(TogetherSyntax.selecter, TEnumType.WIRE_INT);
		
		mapComponents = new HashMap<Component, TComponent>(compound.getSubcomponent().size());

		// Variables of the components use the interaction. 
		for(Component comp: compound.getSubcomponent()) {
			mapComponents.put(comp, new TComponent(comp, this));
		}
		
		setTogetherAction();
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
	
	public TPriorities getTPriorities() {
		return tPriorities; 
	}
	
	public TAction getTogetherAction() {
		return togetherAction;
	}
	
	public TVariable getSelecter() {
		return selecter; 
	}
	
	public boolean containsPriority() {
		return withPriority; 
	}
	
	protected abstract void setTogetherAction();
}
