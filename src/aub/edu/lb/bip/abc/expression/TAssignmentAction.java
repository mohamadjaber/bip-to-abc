package aub.edu.lb.bip.abc.expression;

public class TAssignmentAction implements TAction {
    private TVariable assignedTarget;
    private TExpression assignedValue; 
    private boolean create;


        
    public TAssignmentAction(TVariable at, TExpression av, boolean create) {
		assignedValue = av; 
		assignedTarget = at; 
		this.create = create; 	
    }
	        
	public boolean getCreate() {
		return create; 
	}
	
	
	public TNamedElement getAssignedTarget() {
		return assignedTarget;
	}
	
	public TExpression getAssignedValue() {
		return assignedValue;
	}
	
	public String toString() {
		String s = "";
		if(create) {
			s += assignedTarget.createType() + " ";
			s += assignedTarget.getName();
		}
		else
			s += assignedTarget.getName();
		if(assignedValue == null)
			s += ";";
		else {
			s += " = " + assignedValue + ";";
		}
		return s;
	}
}