package aub.edu.lb.bip.abc.together;

public class TPortInteractionEnable extends TNamedElement{

	private TPort tPort; 
	
	public TPortInteractionEnable(String n, TPort p) {
		name = n; 
		tPort = p; 
	}
	
	public TPort getTPort() {
		return tPort; 
	}
}
