package aub.edu.lb.bip.abc.expression;


import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.together.TNamedElement;

public class TAssignmentAction implements TAction{
        private TNamedElement assignedValue; 
        private TNamedElement assignedTarget;
        
        
        public TAssignmentAction(TNamedElement av, TNamedElement at) {
                assignedValue = av; 
                assignedTarget = at; 
        }
        
        public String toString() {
                return assignedValue.getName() + " "  + 
                                TogetherSyntax.assignment + " " + 
                                assignedTarget; 
        }
        

}