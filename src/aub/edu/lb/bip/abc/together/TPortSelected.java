package aub.edu.lb.bip.abc.together;

public class TPortSelected extends TNamedElement{

	private TPort port; 
	
	public TPortSelected(String n, TPort p) {
		name = n; 
		port = p; 
	}
	
	public TPort getPort() {
		return port; 
	}
}
