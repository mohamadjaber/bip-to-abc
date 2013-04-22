package aub.edu.lb.bip.abc.together;

public class TPortInteractionEnable extends TNamedElement{

	private TPort port; 
	
	public TPortInteractionEnable(String n, TPort p) {
		name = n; 
		port = p; 
	}
	
	public TPort getPort() {
		return port; 
	}
}
