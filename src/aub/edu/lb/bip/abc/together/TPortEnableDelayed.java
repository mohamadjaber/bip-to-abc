package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TVariable;

@Deprecated
public class TPortEnableDelayed extends TVariable {

	private TPort tPort; 
	
	public TPortEnableDelayed(String n, TPort p) {
		name = n; 
		tPort = p; 
		type = TEnumType.BOOLEAN;
	}
	
	public TPort getPort() {
		return tPort; 
	}
	
	public TAssignmentAction initialize() {
		return super.set(new TNamedElement(TogetherSyntax.false_condition));
	}
}
