package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import ujf.verimag.bip.Core.Behaviors.Expression;
import ujf.verimag.bip.Core.Behaviors.Variable;

public class TVariable extends TNamedElement{
	
	private Variable variable; 
	private TComponent component;
	
	public TVariable(Variable var, TComponent comp) {
		variable = var;
		component = comp;
		setName();
	}
	
	public String createVariable() {
		return TogetherSyntax.declareVar(TogetherSyntax.int_type, toString());
	}
	
	public String initialize(Expression value) {
		return TogetherSyntax.initializeVar(toString() , Parser.decompile(value, true, component));
	}
	

	
	private void setName() {
		name = TogetherSyntax.variable + "_" + 
				component.getName() + "_" + 
				variable.getName();
	}
	



}
