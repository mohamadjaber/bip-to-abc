package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;

import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAction;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TDoTogetherAction;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TFunctionCall;
import aub.edu.lb.bip.abc.expression.TWhileAction;

import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;

public class TCompound {
	private Map<Component, TComponent> mapComponents;
	private TInteractions tInteractions;
	private TPriorities tPriorities;
	
	private TCompositeAction togetherAction;


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
		TCompositeAction ca = new TCompositeAction();
		TWhileAction whileLoop = new TWhileAction(ca, new TNamedElement(TogetherSyntax.true_condition));
		togetherAction.getContents().add(whileLoop);
		setTransitionEnablementDelay(ca);
		setNextStateFunctionState(ca);
		setPortEnablement(ca);
		setIntermediateInteractionEnablement(ca);
		setFilerInteraction(ca);
		setPortInteractionEnablement(ca);
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

	private void setFilerInteraction(TCompositeAction ca) {
		List<TExpression> parameters = new LinkedList<TExpression>();
		parameters.add(getTInteractions().getTInteractionsTMP());
		parameters.add(getTInteractions());
		parameters.add(getTPriorities());
		ca.getContents().add(new TFunctionCall(TogetherSyntax.filter_Interaction, parameters));
	}

	private void setIntermediateInteractionEnablement(TCompositeAction ca) {
		ca.getContents().add(getTInteractions().getIntermediateInteractionEnablement());
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

	private void setNextStateFunctionState(TCompositeAction action) {
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
		tDoTogether.setAction(action);
		togetherAction.getContents().add(tDoTogether);
		togetherAction.getContents().add(getTPriorities().initialize());
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
		togetherAction.getContents().add(this.getTPriorities());		
	}

	private void createInteractions() {
		togetherAction.getContents().add(this.getTInteractions());		
	}

	private void createPorts() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TPort tPort: tComp.getTPorts()) {
				togetherAction.getContents().add(tPort.getLocalEnable());
				togetherAction.getContents().add(tPort.getInteractionEnable());
				togetherAction.getContents().add(tPort.getSelected());
			}
		}			
	}

	private void createCurrentStates() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			togetherAction.getContents().add(tComp.getCurrentState());
		}			
	}

	private void createVariables() {
		for(Component comp: compoundType.getSubcomponent()) {
			TComponent tComp = this.getTComponent(comp);
			for(TVariableComp var: tComp.getTVariables()) {
				togetherAction.getContents().add(var);
			}
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
	
	public TPriorities getTPriorities() {
		return tPriorities; 
	}
	
	public TAction getTogetherAction() {
		return togetherAction;
	}
	
	
	
}
