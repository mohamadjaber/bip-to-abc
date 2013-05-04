package aub.edu.lb.bip.abc.expression;


import aub.edu.lb.bip.abc.together.TNamedElement;

public class TAssignmentAction implements TAction {
    private TVariable assignedTarget;
    private TExpression assignedValue; 
    private boolean create;
        
    private int indexI = -1; 
    private int indexJ = -1; 
    
	private int nbOfLines  = -1;
	private int nbOfColumns = - 1;  

        
    public TAssignmentAction(TVariable at, TExpression av, boolean create) {
		assignedValue = av; 
		assignedTarget = at; 
		this.create = create; 
		
		if(at instanceof T2DArrayVariable) {
			T2DArrayVariable arrayVar = (T2DArrayVariable) at;
			nbOfLines = arrayVar.getNbOfLines();
			nbOfColumns = arrayVar.getNbOfColumns();
		}
		else if(at instanceof TArrayVariable) {
			TArrayVariable arrayVar = (TArrayVariable) at;
			nbOfLines = arrayVar.getSize();
		}		
    }
	        
	public TAssignmentAction(TVariable at, TExpression av, boolean create, int indexI) {
		this(at, av, create);
		this.indexI = indexI; 
	}
	
	public TAssignmentAction(TVariable at, TExpression av, boolean create, int indexI, int indexJ) {
		this(at, av, create);
		this.indexI = indexI; 
		this.indexJ = indexJ; 
	}
	
	public boolean getCreate() {
		return create; 
	}
	
	public int getIndexI(){
		return indexI;
	}
	
	public int getIndexJ(){
		return indexJ;
	}
	
	public TNamedElement getAssignedTarget() {
		return assignedTarget;
	}
	
	public TExpression getAssignedValue() {
		return assignedValue;
	}
	
	public String toString() {
		String s = "";
		if(create) s += assignedTarget.type.getName() + " ";
		s += assignedTarget.getName();
		if(indexI != -1 || indexI != -1) {
			if(indexI != -1)	s += "["+ indexI +"]" ;
			if(indexJ != -1) s += "["+ indexJ +"]";
		}
		else {
			if(nbOfLines != -1) s += "["+ nbOfLines +"]" ;
			if(nbOfColumns != -1) s += "["+ nbOfColumns +"]";
		}
		if(assignedValue == null)
			s += ";";
		else 
			s += " = " + assignedValue + ";";
		return s;
	}
}