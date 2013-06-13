package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAction;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TDoTogetherAction;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TFunctionCall;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TVariable;
import aub.edu.lb.bip.abc.expression.TWhileAction;

import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;

public class TCompound {
	private Map<Component, TComponent> mapComponents;
	private TInteractions tInteractions;
	private TPriorities tPriorities;
	private TVariable selecter; 
	private TCompositeAction togetherAction;


	private CompoundType compoundType; 
	
	public TCompound(CompoundType compound) {
		compoundType = compound; 
		tInteractions = new TInteractions(this);
		tPriorities = new TPriorities(this);
		selecter = new TVariable(TogetherSyntax.selecter, TEnumType.WIRE_INT);
		
		mapComponents = new HashMap<Component, TComponent>(compound.getSubcomponent().size());

		// Variables of the components use the interaction. 
		for(Component comp: compound.getSubcomponent()) {
			mapComponents.put(comp, new TComponent(comp, this));
		}
		
		setTogetherAction();
		
	}
	
	private void setTogetherAction() {
		togetherAction = new TCompositeAction();
		createVariables();
		createCurrentStates();
		createPorts();
		createInteractions();
		createPriorities();
		createStateEnum();
		
		initializeComponentsVariables();
		
		mainWhileLoopAction();
	}

	private void mainWhileLoopAction() {
		TDoTogetherAction doTogether = new TDoTogetherAction();	
		TCompositeAction ca = new TCompositeAction();
		doTogether.setAction(ca);
		TWhileAction whileLoop = new TWhileAction(ca, new TNamedElement(TogetherSyntax.true_condition));
		whileLoop.setAction(doTogether);
		togetherAction.getContents().add(whileLoop);
		setTransitionEnablementDelay(ca);
		setNextStateFunction(ca);
		setPortEnablement(ca);
		setInteractionEnablement(ca);
		// setFilerInteraction(ca);
		setPortInteractionEnablement(ca);
	}

	private void setInteractionEnablement(TCompositeAction ca) {
		setFirstInteractionEnablement(ca);
		setFilterInteractionPriority(ca);
		setSelectOneInteraction(ca);
	}

	private void setSelectOneInteraction(TCompositeAction ca) {
		for(TInteraction tInteraction: tInteractions.getTInteractions()) {
			ca.getContents().add(tInteraction.getSelectOneInteraction());
		}	
	}

	private void setFilterInteractionPriority(TCompositeAction ca) {
		for(TInteraction tInteraction: tInteractions.getTInteractions()) {
			ca.getContents().add(tInteraction.getFilterInteractionPriority());
		}
	}

	private void setPortInteractionEnablement(TCompositeAction action) {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TPort tPort: tComp.getTPorts()) {
				action.getContents().add(
						tPort.getInteractionEnable().set(tPort.getInteractionEnable().getInteractionEnablement()));
			}
		}
	}

	@SuppressWarnings("unused")
	private void setFilerInteraction(TCompositeAction ca) {
		List<TExpression> parameters = new LinkedList<TExpression>();
		parameters.add(getTInteractions().getTInteractionsFirstEnable().getInstance());
		parameters.add(getTInteractions().getInstance());
		parameters.add(getTPriorities().getInstance());
		ca.getContents().add(
				new TAssignmentAction(getTInteractions().getInstance(),
						new TFunctionCall(TogetherSyntax.filter_Interaction, parameters),
						false
				));
	}

	private void setFirstInteractionEnablement(TCompositeAction ca) {
		ca.getContents().add(getTInteractions().getFirstInteractionEnablement());
	}

	private void setPortEnablement(TCompositeAction action) {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TPort tPort: tComp.getTPorts()) {
				action.getContents().add(
						tPort.getLocalEnable().set(tPort.getLocalEnable().getEnablementExpression()));
			}
		}		
	}

	private void setNextStateFunction(TCompositeAction action) {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			action.getContents().add(tComp.nextStateFunction());
		}			
	}

	private void setTransitionEnablementDelay(TCompositeAction action) {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TPort tPort: tComp.getTPorts()) {
				action.getContents().add(tPort.getSelected().set(tPort.getInteractionEnable()));
			}
		}		
	}

	private void initializeComponentsVariables() {
		TDoTogetherAction tDoTogether = new TDoTogetherAction();
		TCompositeAction action = new TCompositeAction();
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			action.getContents().add(tComp.initialize());
		}
		action.getContents().add(getTPriorities().initialize());
		tDoTogether.setAction(action);
		togetherAction.getContents().add(tDoTogether);
	}

	private void createStateEnum() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TState state: tComp.getTStates()) {
				togetherAction.getContents().add(state.create());
			}
		}			
	}

	private void createPriorities() {
		togetherAction.getContents().add(this.getTPriorities().create());		
	}

	private void createInteractions() {
		togetherAction.getContents().add(this.getTInteractions().create());	
		togetherAction.getContents().add(this.getTInteractions().getTInteractionsFirstEnable().create());
		togetherAction.getContents().add(this.getTInteractions().getTInteractionsFilterPriority().create());		
	}

	private void createPorts() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TPort tPort: tComp.getTPorts()) {
				togetherAction.getContents().add(tPort.getLocalEnable().create());
				togetherAction.getContents().add(tPort.getInteractionEnable().create());
				togetherAction.getContents().add(tPort.getSelected().create());
			}
		}			
	}

	private void createCurrentStates() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			togetherAction.getContents().add(tComp.getCurrentState().create());
		}			
	}

	private void createVariables() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TVariableComp var: tComp.getTVariables()) {
				togetherAction.getContents().add(var.create());
			}
		}	
		togetherAction.getContents().add(selecter.create());
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
}
