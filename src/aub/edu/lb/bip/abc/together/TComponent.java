package aub.edu.lb.bip.abc.together;

import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAction;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TVariable;

import ujf.verimag.bip.Core.Behaviors.AtomType;
import ujf.verimag.bip.Core.Behaviors.DataParameter;
import ujf.verimag.bip.Core.Behaviors.PetriNet;
import ujf.verimag.bip.Core.Behaviors.Port;
import ujf.verimag.bip.Core.Behaviors.State;
import ujf.verimag.bip.Core.Behaviors.Variable;
import ujf.verimag.bip.Core.Interactions.Component;

public class TComponent extends TNamedElement{
	
	private Component component; 
	private TCompound tCompound; 
	private Map<State, TState> mapStates = new HashMap<State, TState>();
	private Map<Variable, TVariableComp> mapVariables = new HashMap<Variable, TVariableComp>(); 
	
	private Map<DataParameter, TVariableComp> mapDataParameters = new HashMap<DataParameter, TVariableComp>(); 

	private Map<Port, TPort> mapPorts = new HashMap<Port, TPort>(); 

	private TCurrentState currentState;
	private String name;
	
	public TComponent(Component comp, TCompound tCompound){
		assert(component.getType() instanceof AtomType); // no hierarchical components
		component = comp; 
		name = component.getName();
		currentState = new TCurrentState(component);
		this.tCompound = tCompound;
		setMaps();
	}
	
	private void setMaps() {
		setMapState();
		setMapVariable();
		setMapDataParameters();
		setMapPort();
	}
	
	private void setMapPort() {
		AtomType at = (AtomType) component.getType();
		for(Port p: at.getPort()) {
			mapPorts.put(p, new TPort(p,this));
		}
	}
	
	private void setMapVariable() {
		AtomType at = (AtomType) component.getType();
		for(Variable v: at.getVariable()) {
			mapVariables.put(v, new TVariableComp(v,this));
		}
	}
	private void setMapDataParameters() {
		// Data Parameter Variable
		AtomType at = (AtomType) component.getType();
		for(DataParameter dp: at.getDataParameter()) {
			String actualData = Parser.decompile(component.getActualData().get(at.getDataParameter().indexOf(dp)), false, this);
			Variable v = TransformationFunction.CreateIntVariable(dp.getName(), Integer.parseInt(actualData));
			mapDataParameters.put(dp, new TVariableComp(v,this));
		}
		
	}
	
	private void setMapState() {
		AtomType at = (AtomType) component.getType();
		PetriNet pn = (PetriNet) at.getBehavior();
		for(State s: pn.getState()) {
			mapStates.put(s, new TState(s, this));
		}
	}
	
	public TCurrentState getCurrentState() {
		return currentState; 
	}
	
	public String getName() {
		return name; 
	}
	
	public TState getTState(State s) {
		return mapStates.get(s);
	}
	
	public State getState(TState s) {
		for(State key : mapStates.keySet()) {
			if(mapStates.get(key).equals(s))
				return key;
		}
		return null;
	}
	
	public TVariableComp getVariable(Variable v) {
		return mapVariables.get(v);
	}
	
	public TVariableComp getVariable(DataParameter dp) {
		return mapDataParameters.get(dp);
	}
	
	public TPort getTPort(Port p) {
		return mapPorts.get(p);
	}
	

	/**
	 * create auto assign of the variables (currentState and variables)
	 * of the component except the variables given as parameters. 
	 * @param variables
	 * @return
	 */
	public TCompositeAction getAutoAssignWithout(List<TVariable> variables) {
		TCompositeAction compositeAction = new TCompositeAction();
		if(!variables.contains(currentState)) {
			compositeAction.getContents().add(new TAssignmentAction(
					currentState, 
					currentState, false
				));
		}
		for(TVariableComp tVar: mapVariables.values()) {
			if(!variables.contains(tVar)) {
				compositeAction.getContents().add(new TAssignmentAction(
						tVar, 
						tVar, false
					));
			}
		}
		return compositeAction; 
	}
	
	
	public Component getComponent() {
		return component; 
	}
	
	public List<TVariable> getTVariables(List<Variable> variables) {
		List<TVariable> tVariables = new ArrayList<TVariable>(variables.size());
		for(Variable v: variables) {
			tVariables.add(mapVariables.get(v));
		}
		return tVariables; 
	}
	
	public Collection<TVariableComp> getTVariables() {
		return mapVariables.values();
	}
	
	
	public Collection<TPort> getTPorts() {
		return mapPorts.values();
	}
	
	public Collection<TState> getTStates() {
		return mapStates.values();
	}
	
	public TCompound getTCompound() {
		return tCompound;
	}
	
	public TCompositeAction initialize() {
		TCompositeAction initializeAction = new TCompositeAction();
		AtomType at = (AtomType) getComponent().getType(); 
		PetriNet pn = (PetriNet) at.getBehavior();
		
		State initialState = pn.getInitialState().get(0);
		
		for(TPort tPort : mapPorts.values()) {
			initializeAction.getContents().add(tPort.getSelected().set(new TNamedElement(TogetherSyntax.false_condition)));
		}
		initializeAction.getContents().add(new TNamedElement(Parser.decompile(pn.getInitialization(), this)));
		initializeAction.getContents().add(currentState.set(new TNamedElement(getTState(initialState).getValue() + "")));
		
		// DataParameter
		
		for(TVariableComp tVar : mapDataParameters.values()) {
			initializeAction.getContents().add(new TAssignmentAction(tVar, new TNamedElement(Parser.decompile(tVar.getVariable().getInitialValue(), false, this)), false));
			
			
		}

		return initializeAction;
	}
	
	public TAction nextStateFunction() {
		TCompositeAction action = new TCompositeAction();
		for(TState state : mapStates.values()) {
			action.getContents().add(state.nextStateFunction());
		}
		
		for(TVariableComp variable : mapVariables.values()) {
			action.getContents().add(variable.nextStateFunction());
		}
		
		return action; 
	}
	
	
} 
