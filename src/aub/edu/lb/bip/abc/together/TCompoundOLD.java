package aub.edu.lb.bip.abc.together;

import java.util.LinkedList;
import java.util.List;

import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TDoTogetherAction;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TFunctionCall;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TWhileAction;

import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;

/**
 * @deprecated
 * In this version we generate on do_together for initialization and another for execution. 
 * The second do_together contains implicitly two cycles one for computing enabled interactions and
 * executing actions on interactions and the second to execute local transition. The implicit two cycles is
 * enforced using a delayed version of the port enablement. 
 * However, this version contains an error to be corrected:
 * In this version port local enable is computed as follows:
 * port_le = ((state1 /\ guard1) \/ (state2 /\ guard2) ... ) /\ (!port_en_delayed)
 * port_le should be:
 * port_le = ((state1 /\ guard1) \/ (state2 /\ guard2) ... ) /\ (for all port !port_en_delayed). That is, if one port_en_delayed is true then 
 * all local enablements are set to false, and so on. 
 * E.g., Cycle 1: local enable are computed, select one enable interaction, execute its action
 *       Cycle 2: execute local action on transitions.
 *       
 * The new version creates two cycles explicitly by creating sequences of do_together action see. TCompound. 
 */
public class TCompoundOLD extends TCompound {


	public TCompoundOLD(CompoundType compound) {
		super(compound);
	}

	protected void setTogetherAction() {
		togetherAction = new TCompositeAction();
		createVariables();
		createCurrentStates();
		createPorts();
		createInteractions();
		if(withPriority)
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
		setPortInteractionEnablement(ca);
	}

	private void setInteractionEnablement(TCompositeAction ca) {
		setFirstInteractionEnablement(ca);
		if(withPriority)
			setFilterInteractionPriority(ca);
		setSelectOneInteraction(ca, withPriority);
	}

	private void setSelectOneInteraction(TCompositeAction ca, boolean withPriority) {
		for(TInteraction tInteraction: tInteractions.getTInteractions()) {
			ca.getContents().add(tInteraction.getSelectOneInteraction(withPriority));
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
		if(withPriority)
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
		if(withPriority)
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

}

