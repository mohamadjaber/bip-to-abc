package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TEnumType;

public class TPortInteractionEnable extends TVariable {

	private TPort tPort; 
	
	public TPortInteractionEnable(String n, TPort p) {
		name = n; 
		tPort = p; 
		type = TEnumType.WIRE_BOOLEAN;
	}
	
	public TPort getTPort() {
		return tPort; 
	}
}
