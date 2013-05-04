package aub.edu.lb.bip.abc.expression;


import aub.edu.lb.bip.abc.together.TNamedElement;

public class TAssignmentAction implements TAction {
        private TExpression assignedValue; 
        private TNamedElement assignedTarget;
        private boolean create;
        
        private int indexI = -1; 
        private int indexJ = -1; 

        
        public TAssignmentAction(TNamedElement at, TExpression av, boolean create) {
                assignedValue = av; 
                assignedTarget = at; 
                this.create = create; 
        }
        
        public TAssignmentAction(TNamedElement at, TExpression av, boolean create, int indexI) {
            this(at, av, create);
            this.indexI = indexI; 
        }
        
        public TAssignmentAction(TNamedElement at, TExpression av, boolean create, int indexI, int indexJ) {
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
       
}