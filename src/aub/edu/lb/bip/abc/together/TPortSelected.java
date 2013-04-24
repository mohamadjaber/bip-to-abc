package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TEnumType;

public class TPortSelected extends TVariable {

	private TPort tPort; 
	
	public TPortSelected(String n, TPort p) {
		name = n; 
		tPort = p; 
		type = TEnumType.BOOLEAN;
	}
	
	public TPort getPort() {
		return tPort; 
	}
}
