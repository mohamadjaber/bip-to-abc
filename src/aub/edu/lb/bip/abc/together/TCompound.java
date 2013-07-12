package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.Map;

import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;
import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAction;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TDoTogetherAction;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TVariable;

public abstract class TCompound {
	protected Map<Component, TComponent> mapComponents;
	protected TInteractions tInteractions;
	protected TPriorities tPriorities;
	protected TVariable selector; 
	protected TCompositeAction togetherAction; 

	protected CompoundType compoundType; 
	
	protected boolean withPriority; 
	protected boolean optmized; 
	
	protected boolean defaultInitializeVariables; 
	
	protected String preCondition; 
	protected String postCondition; 

	
	/**
	 * @param compound
	 * @param optmized: if true one cycle execution (port as wires, etc.), otherwise two cycles.
	 * @param defaultInitilizeVariables: if true initially, initialize all BIP variables to zero if integers, or false if boolean.
	 * This will improve the verification time.  
	 */
	public TCompound(CompoundType compound, 
			boolean optmized, 
			boolean defaultInitializeVariables,
			String preCondition, String postCondition) {
		
		compoundType = compound; 
		withPriority = compoundType.getPriorityRule().size() > 0;
		this.optmized = optmized; 
		this.defaultInitializeVariables = defaultInitializeVariables; 
		this.preCondition = preCondition;
		this.postCondition = postCondition; 
		
		tInteractions = new TInteractions(this);
		
		selector = new TVariable(TogetherSyntax.selecter, TEnumType.WIRE_INT);
		
		mapComponents = new HashMap<Component, TComponent>(compound.getSubcomponent().size());

		// Variables of the components use the interaction. 
		for(Component comp: compound.getSubcomponent()) {
			mapComponents.put(comp, new TComponent(comp, this));
		}
		
		setTogetherAction();
	}
	
	protected void setTogetherAction() {
		togetherAction = new TCompositeAction();
		createVariables();
		createCurrentStates();
		createPorts();
		createInteractions();
		
		createStateEnum();
		
		if(defaultInitializeVariables)
			defaultInitializeVariables();
		
		initializeComponentsVariables();
		
		
		injectPreCondition();
		
		
		mainWhileLoopAction();
	}
	
	
	protected void injectPreCondition() {
		if(preCondition != null && postCondition != null) {
			togetherAction.getContents().add(new TNamedElement(preCondition));
		}	
	}
	
	protected void injectPostCondition(TCompositeAction compositeAction) {
		if(preCondition != null && postCondition != null) {
			compositeAction.getContents().add(new TNamedElement(postCondition));
		}	
	}
	
	private void defaultInitializeVariables() {
		TDoTogetherAction initialization = new TDoTogetherAction();
		TCompositeAction compositeAction = new TCompositeAction();
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			compositeAction.getContents().add(tComp.initializeVariables());
		}
		initialization.setAction(compositeAction);
		togetherAction.getContents().add(initialization);
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
		return selector; 
	}
	
	public boolean containsPriority() {
		return withPriority; 
	}
	
	protected abstract void mainWhileLoopAction();
	

	protected void setInteractionEnablement(TCompositeAction ca) {
		setFirstInteractionEnablement(ca);
		if(withPriority)
			setFilterInteractionPriority(ca);
		setSelectOneInteraction(ca, withPriority);
	}

	protected void setSelectOneInteraction(TCompositeAction ca, boolean withPriority) {
		for(TInteraction tInteraction: tInteractions.getTInteractions()) {
			ca.getContents().add(tInteraction.getSelectOneInteraction(withPriority));
		}	
	}

	protected void setFilterInteractionPriority(TCompositeAction ca) {
		for(TInteraction tInteraction: tInteractions.getTInteractions()) {
			ca.getContents().add(tInteraction.getFilterInteractionPriority());
		}
	}

	protected void setPortInteractionEnablement(TCompositeAction action) {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TPort tPort: tComp.getTPorts()) {
				action.getContents().add(
						tPort.getEnable().set(tPort.getEnable().getInteractionEnablement()));
			}
		}
	}

	private void setFirstInteractionEnablement(TCompositeAction ca) {
		ca.getContents().add(getTInteractions().getFirstInteractionEnablement());
	}

	protected void setLocalPortEnablement(TCompositeAction action) {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TPort tPort: tComp.getTPorts()) {
				action.getContents().add(
						tPort.getLocalEnable().set(tPort.getLocalEnable().getEnablementExpression()));
			}
		}		
	}

	protected void setNextStateFunctionLocationVariable(TCompositeAction action) {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			action.getContents().add(tComp.nextStateFunctionLocationVariable());
		}			
	}
	
	protected void setNextStateFunctionInteraction(TCompositeAction action) {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			action.getContents().add(tComp.nextStateFunctionInteraction());
		}			
	}


	


	protected void initializeComponentsVariables() {
		TDoTogetherAction tDoTogether = new TDoTogetherAction();
		TCompositeAction action = new TCompositeAction();
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			action.getContents().add(tComp.initialize());
		}
		
		tDoTogether.setAction(action);
		togetherAction.getContents().add(tDoTogether);
	}

	protected void createStateEnum() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TState state: tComp.getTStates()) {
				togetherAction.getContents().add(state.create());
			}
		}			
	}

	

	protected void createInteractions() {
		togetherAction.getContents().add(this.getTInteractions().create());	
		togetherAction.getContents().add(this.getTInteractions().getTInteractionsFirstEnable().create());
		if(withPriority)
			togetherAction.getContents().add(this.getTInteractions().getTInteractionsFilterPriority().create());		
	}

	protected void createPorts() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TPort tPort: tComp.getTPorts()) {
				togetherAction.getContents().add(tPort.getLocalEnable().create());
				togetherAction.getContents().add(tPort.getEnable().create());
			}
		}			
	}

	protected void createCurrentStates() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			togetherAction.getContents().add(tComp.getCurrentState().create());
		}			
	}

	protected void createVariables() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			togetherAction.getContents().add(tComp.createVariables());
			togetherAction.getContents().add(tComp.createInitializeDataParameter());
			
		}	
		togetherAction.getContents().add(selector.create());
	}
}
