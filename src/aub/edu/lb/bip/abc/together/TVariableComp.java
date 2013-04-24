package aub.edu.lb.bip.abc.together;

import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import ujf.verimag.bip.Core.Behaviors.Expression;
import ujf.verimag.bip.Core.Behaviors.Variable;
import ujf.verimag.bip.Core.Modules.OpaqueElement;

public class TVariableComp extends TVariable{
	
	private Variable variable; 
	private TComponent component;
	
	public TVariableComp(Variable var, TComponent comp) {
		variable = var;
		component = comp;
		setName();
		setType();
	}
	
	
	
	private void setType() {
		String t = ((OpaqueElement) variable.getType()).getBody();
		if(t.equals("int")) {
			type = TEnumType.INT;
		}
		else if(t.equals("boolean")) {
			type = TEnumType.BOOLEAN;
		}
		else {
			//TODO
		}
	}

	public String createVariable() {
		return type.getName() + " " + this + ";";
	}
	
	public String initialize(Expression value) {
		return  type.getName() + " " + this + Parser.decompile(value, true, component) + ";";
	}
	
	private void setName() {
		name = TogetherSyntax.variable + "_" + 
				component.getName() + "_" + 
				variable.getName();
	}
	



}
