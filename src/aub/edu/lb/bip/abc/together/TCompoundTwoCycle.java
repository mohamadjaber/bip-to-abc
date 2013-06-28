package aub.edu.lb.bip.abc.together;



import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TDoTogetherAction;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TWhileAction;
import ujf.verimag.bip.Core.Interactions.CompoundType;

/**
 * Variables and wires creation. 
 * @do_together {
 * 		initialization
 * }
 * while(true) {
 * 		@do_together {
 * 			1. compute port local enablement
 * 			2. compute interaction enablement
 * 			3. filter interaction according to priority, if necessary. 
 * 			4. selection one interaction
 * 			5. execute the corresponding action of the selected interaction. 
 * 		}
 * 
 * 		@do_together {
 * 			1. execute local transitions
 * 		}
 * }
 *
 */
public class TCompoundTwoCycle extends TCompound {

	
	
	public TCompoundTwoCycle(CompoundType compound) {
		super(compound, false);
	}
	


	protected void mainWhileLoopAction() {
		TCompositeAction ca = new TCompositeAction();
		
		TDoTogetherAction doTogetherCycle1 = new TDoTogetherAction();	
		TDoTogetherAction doTogetherCycle2 = new TDoTogetherAction();	

		TCompositeAction caCycle1 = new TCompositeAction();
		doTogetherCycle1.setAction(caCycle1);
		

		TCompositeAction caCycle2 = new TCompositeAction();
		doTogetherCycle2.setAction(caCycle2);
		
		ca.getContents().add(doTogetherCycle1);
		ca.getContents().add(doTogetherCycle2);
		
		TWhileAction whileLoop = new TWhileAction(new TNamedElement(TogetherSyntax.true_condition));
		whileLoop.setAction(ca);
		togetherAction.getContents().add(whileLoop);
		
		setLocalPortEnablement(caCycle1);
		setInteractionEnablement(caCycle1);
		setPortInteractionEnablement(caCycle1);
		setNextStateFunctionInteraction(caCycle1);
		
		setNextStateFunctionLocationVariable(caCycle2);
	}


}
