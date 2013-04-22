package aub.edu.lb.bip.abc.together;

public class TPortSelected extends TNamedElement{

	private TPort tPort; 
	
	public TPortSelected(String n, TPort p) {
		name = n; 
		tPort = p; 
	}
	
	public TPort getPort() {
		return tPort; 
	}
}
