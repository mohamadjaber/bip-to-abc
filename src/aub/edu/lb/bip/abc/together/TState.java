package aub.edu.lb.bip.abc.together;

import java.util.List;

import BIPTransformation.TransformationFunction;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import ujf.verimag.bip.Core.Behaviors.AbstractTransition;
import ujf.verimag.bip.Core.Behaviors.State;
import ujf.verimag.bip.Core.Behaviors.Transition;

public class TState extends TNamedElement{
	private static int constStateID = 0; 
	
	private State state; 
	private TComponent component;
	private final Integer value; 
	
	public TState(State s, TComponent comp) {
		state = s; 
		value = constStateID++;
		component = comp;
		setName();
	}
	
	public String initialize(String initial) {
		return toString() + " = " + initial; 
	}
	
	/*
   
    if(currentState == value) {
    	if(port1) {
    		currentState = next1; 
    		f1();
    	}
    	else {
    		if(port2) {
    			currentState = next2; 
    			f2();
    		}
    	}
    }
    else {
    	currentState = value; 
    }

    */
	
	
	public String nextStateFunction() {
		String s = "";
		List<AbstractTransition> outTransitions = state.getOutgoing();
		
	//	TIfElse nextStateFunc = new TIfElse();
		for(Object o : outTransitions) {
			Transition t = (Transition) o; 
			if(t.getDestination().size() == 1) { 
				TState next = component.getState(t.getDestination().get(0));
				TPort port = component.getPort(TransformationFunction.getPort(t.getTrigger()));
				
			}
			
		}
		return null;
	}

	private void setName() {
		name = TogetherSyntax.state + "_" + 
				component.getName() + "_" +
				state.getName();
	}
	

	public Integer getValue() {
		return value; 
	}
	

}
