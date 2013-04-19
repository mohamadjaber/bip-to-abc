package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.Map;

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
		component = comp; 
		name = component.getName();
		currentState = new TCurrentState(component); 
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
