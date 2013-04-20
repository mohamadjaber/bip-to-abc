package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.Map;

import ujf.verimag.bip.Core.Behaviors.AtomType;
import ujf.verimag.bip.Core.Behaviors.PetriNet;
import ujf.verimag.bip.Core.Behaviors.Port;
import ujf.verimag.bip.Core.Behaviors.State;
import ujf.verimag.bip.Core.Behaviors.Variable;
import ujf.verimag.bip.Core.Interactions.Component;

public class TComponent extends TNamedElement{
	
	private Component component; 
	private Map<State, TState> mapStates = new HashMap<State, TState>();
	private Map<Variable, TVariable> mapVariables = new HashMap<Variable, TVariable>(); 
	private Map<Port, TPort> mapPorts = new HashMap<Port, TPort>(); 

	private TCurrentState currentState;
	private String name;
	
	public TComponent(Component comp){
		assert(component.getType() instanceof AtomType); // no hierarchical components
		component = comp; 
		name = component.getName();
		currentState = new TCurrentState(component);
		setMaps();
	}
	
	private void setMaps() {
		setMapState();
		setMapVariable();
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
			mapVariables.put(v, new TVariable(v,this));
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
	
	public TState getState(State s) {
		return mapStates.get(s);
	}
	
	public TVariable getVariable(Variable v) {
		return mapVariables.get(v);
	}
	
	public TPort getPort(Port p) {
		return mapPorts.get(p);
	}
}
