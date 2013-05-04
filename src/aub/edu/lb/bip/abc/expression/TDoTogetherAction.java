package aub.edu.lb.bip.abc.expression;


public class TDoTogetherAction implements TAction {
	private TAction action; 
	
	public TDoTogetherAction(TAction action) {
		this.action = action; 
	}
	
	
	public TDoTogetherAction() {
	}
	
	public void setAction(TAction action) {
		this.action = action;
	}
	
	public TAction getAction() {
		return action; 
	}
}
