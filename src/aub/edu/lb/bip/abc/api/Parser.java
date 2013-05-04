package aub.edu.lb.bip.abc.api;

import java.util.List;
import java.util.Map;

import aub.edu.lb.bip.abc.together.TComponent;
import aub.edu.lb.bip.abc.together.TCompound;

import ujf.verimag.bip.Core.ActionLanguage.Actions.AssignmentAction;
import ujf.verimag.bip.Core.ActionLanguage.Actions.CompositeAction;
import ujf.verimag.bip.Core.ActionLanguage.Actions.IfAction;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.ArrayNavigationExpression;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryExpression;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.BooleanLiteral;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.DataParameterReference;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.DataParameterSpecification;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.FieldNavigationExpression;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.FunctionCallExpression;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.IndexLiteral;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.InnerDataParameterReference;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.IntegerLiteral;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.PointerLiteral;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.RealLiteral;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.RequiredDataParameterReference;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.StateReference;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.StringLiteral;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.UnaryExpression;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.UnaryOperator;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.VariableReference;
import ujf.verimag.bip.Core.Behaviors.Action;
import ujf.verimag.bip.Core.Behaviors.Expression;
import ujf.verimag.bip.Core.Behaviors.NamedElement;
import ujf.verimag.bip.Core.Behaviors.Variable;
import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Interactions.InnerPortReference;
import ujf.verimag.bip.Core.Interactions.PartElementReference;
import ujf.verimag.bip.Core.Interactions.PortParameterReference;
import ujf.verimag.bip.Core.Modules.OpaqueElement;

import BIPTransformation.TransformationFunction;


public class Parser {
	private static String indent = "";
	private static void indent() {
		//indent += TogetherSyntax.tabSpace ;
	}
	
	private static void deindent() {
		//indent = indent.substring(2) ;
	}
	
	private static String name(NamedElement ne, TComponent component) {
	    if (ne==null)             
	        throw new Error("Unimplemented");

	    String n = null;
	    
	    if(ne instanceof Variable) {
	    	n = component.getVariable((Variable) ne).getName();
	    }
	   
	    
	    if (n==null)          
	        throw new Error("Unimplemented");

	    return n ;
	}
	
	private static String name(RequiredDataParameterReference rdpr, TComponent component, Connector c, TCompound compound) {
		Map<Variable, Component> mapVarComp = TransformationFunction.getVariable(c, rdpr);
		if(mapVarComp.size() == 0)
	        throw new Error("Unimplemented");
		for(Variable v : mapVarComp.keySet()) {
			return name(v, compound.getTComponent(mapVarComp.get(v)));
		}
        throw new Error("Unimplemented"); 	
	}
	


	
	public static String decompileParam(List<Expression> actualDatas, boolean alwayPar, TComponent component, Connector c, TCompound compound) {
		String s = "";
		if (alwayPar || actualDatas.size()>0) s += "(" ;
		boolean first = true ;
		for(Expression exp: actualDatas) {
			if (first) {
				first =false ;
			} else {
				s += ", " ;
			}
			decompile(exp, false, component, c, compound) ; 
		}
		if (alwayPar || actualDatas.size()>0) s += ")" ;
		return s; 
		
	}
	
	public static String decompile(PartElementReference per, TComponent component, Connector c, TCompound compound) {
		String s = "";
		s += name(per.getTargetPart(), component) ;

		for(Expression exp: per.getIndex()) {
			s += "[" ;
			s += decompile(exp, false, component, c, compound) ;
			s += "]" ;
		}
		return s; 
	}
	
	public static String decompile(Expression exp, boolean inExp, TComponent component) {
		return decompile(exp, inExp, component, null, null);
	}

	
	public static String decompile(Expression exp, boolean inExp, TComponent component, Connector c, TCompound compound) {
		String s = "";
		if (exp==null) {
            throw new Error("Unimplemented");
		} else if (exp instanceof IntegerLiteral) {
			IntegerLiteral il = (IntegerLiteral) exp;
			s += il.getIValue() ;
		} else if (exp instanceof IndexLiteral) {
			IndexLiteral il = (IndexLiteral) exp;
			s += "$" + il.getId() ;
		} else if (exp instanceof BooleanLiteral) {
			BooleanLiteral bl = (BooleanLiteral) exp;
			if (bl.isBValue()) {
				s += "true" ;				
			} else {
				s += "false" ;				
			}
		} else if (exp instanceof StringLiteral) {
			StringLiteral sl = (StringLiteral) exp;
			s += sl.getSValue() ;
		} else if (exp instanceof RealLiteral) {
			RealLiteral rl = (RealLiteral) exp;
			s += rl.getRValue() ;
		} else if (exp instanceof RealLiteral) {
			RealLiteral rl = (RealLiteral) exp;
			s += rl.getRValue() ;
		} else if (exp instanceof PointerLiteral) {
			
			s += "NULL" ;
		} else if (exp instanceof VariableReference) {
			VariableReference vr = (VariableReference) exp;
			s += name(vr.getTargetVariable(), component) ;
		} else if (exp instanceof StateReference) {
			StateReference sr = (StateReference) exp;
			s += name(sr.getTargetState(), component) ;
		} else if (exp instanceof DataParameterReference) {
			DataParameterReference dpr = (DataParameterReference) exp;
			s += name(dpr.getTargetParameter(), component) ;
		} else if (exp instanceof RequiredDataParameterReference) {
			RequiredDataParameterReference rdpr = (RequiredDataParameterReference) exp;
			PortParameterReference ppr = rdpr.getPortReference() ;
			if (ppr==null) 
	            throw new Error("Unimplemented");
			else s += name(rdpr, component, c, compound) ;
			//s += "." ;
			//s += name(rdpr.getTargetParameter(), component) ;
		} else if (exp instanceof InnerDataParameterReference) {
			InnerDataParameterReference idpr = (InnerDataParameterReference) exp;
			InnerPortReference ipr = idpr.getPortReference() ;
			if (ipr==null) {
	             throw new Error("Unimplemented");
			} else {
				s += decompile(ipr.getTargetInstance(), component, c, compound) ;
			}
			s += "." + name(ipr.getTargetPort(), component) ;
		} else if (exp instanceof DataParameterSpecification) {
			DataParameterSpecification dps = (DataParameterSpecification) exp;
			s += name(dps.getTargetParameter(), component) ;
		} else if (exp instanceof FunctionCallExpression) {
			FunctionCallExpression fce = (FunctionCallExpression) exp;
			String name = fce.getFunctionName() ;
			Expression dr = fce.getNavigated() ;
			if (dr!=null) {
				s += decompile(dr, true, component, c, compound) ;
				if (fce.isIsOnRef()) s += "->";
				else s += "." ;
			}
			if (name==null)
			    throw new Error("Unimplemented");
			else s += name ;
			s += decompileParam(fce.getActualData(), true, component, c, compound) ;
		} else if (exp instanceof FieldNavigationExpression) {
			FieldNavigationExpression fne = (FieldNavigationExpression) exp;
			s += decompile(fne.getNavigated(), true, component, c, compound) ;
			String field = fne.getFieldName() ;
			if (field==null) 
			    throw new Error("Unimplemented");
			if (fne.isIsOnRef()) {
				s += "->" + field; 
			}
			else {
				s += "." + field ;
			}
		} else if (exp instanceof ArrayNavigationExpression) {
			ArrayNavigationExpression ane = (ArrayNavigationExpression) exp;
			s += decompile(ane.getNavigated(), true, component, c, compound) ;
			s += "[" ;
			s += decompile(ane.getIndex(), false, component, c, compound) ;
			s += "]" ;
		} else if (exp instanceof BinaryExpression) {
			BinaryExpression be = (BinaryExpression) exp;
			if (inExp) s += "(" ;
			s += decompile(be.getLeftOperand(), true, component, c, compound) ;
						
			s += decompile(be.getOperator());

			s += decompile(be.getRightOperand(), true, component, c, compound) ;			
			if (inExp) s += ")" ;

		} else if (exp instanceof UnaryExpression) {
			UnaryExpression ue = (UnaryExpression) exp;
			if (inExp) s += "(" ;
			switch(ue.getOperator().getValue()) {
			case UnaryOperator.POSITIVE_VALUE : 
				s += "+" ;
				s += decompile(ue.getOperand(), true, component, c, compound) ;
				break ;
			case UnaryOperator.NEGATIVE_VALUE : 
				s += "-" ;
				s += decompile(ue.getOperand(), true, component, c, compound) ;
				break ;
			case UnaryOperator.LOGICAL_NOT_VALUE:
				s += "!" ;
				s += decompile(ue.getOperand(), true, component, c, compound) ;
				break ;
			case UnaryOperator.BITWISE_NOT_VALUE:
				s += "~" ;
				s += decompile(ue.getOperand(), true, component, c, compound) ;
				break ;
			case UnaryOperator.DEREFERENCE_VALUE : 
				s += "*" ;
				s += decompile(ue.getOperand(), true, component, c, compound) ;
				break ;
			case UnaryOperator.REFERENCE_VALUE:
				s += "&" ;
				s += decompile(ue.getOperand(), true, component, c, compound) ;
				break ;
			case UnaryOperator.DECREMENT_VALUE : 
				if (ue.isPostfix()) {
					s += decompile(ue.getOperand(), true, component, c, compound) ;
					s += "--" ;
				}
				else {
					s += "--" ; 
					s += decompile(ue.getOperand(), true, component, c, compound) ;
				}
				break ; 
			case UnaryOperator.INCREMENT_VALUE :
				if (ue.isPostfix()) {
					s += decompile(ue.getOperand(), true, component, c, compound) ;
					s += "++" ;
				}
				else {
					s += "++" ; 
					s += decompile(ue.getOperand(), true, component, c, compound) ;
				}
				break ; 
			}		
			if (inExp) s += ")" ;
		} else if (exp instanceof OpaqueElement) {
			OpaqueElement oe = (OpaqueElement)exp ;
			s += "{#" + oe.getBody() + "#}\n" ;			
		} else {
		    throw new Error("Unimplemented");
		}
		return s; 
	}
	
	public static String decompile(BinaryOperator bo) {
	//switch(be.getOperator().getValue()) {
		String s = "";
		switch(bo.getValue()) {
			case BinaryOperator.ADDITION_VALUE : 
				s += "+" ;
				break ;
			case BinaryOperator.DIVISION_VALUE : 
				s += "/" ;
				break ;
			case BinaryOperator.EQUALITY_VALUE : 
				s += "==" ;
				break ;
			case BinaryOperator.GREATER_THAN_VALUE : 
				s += ">" ;
				break ;
			case BinaryOperator.GREATER_THAN_OR_EQUAL_VALUE : 
				s += ">=" ;
				break ;
			case BinaryOperator.INEQUALITY_VALUE : 
				s += "!=" ;
				break ;
			case BinaryOperator.LESS_THAN_VALUE : 
				s += "<" ;
				break ;
			case BinaryOperator.LESS_THAN_OR_EQUAL_VALUE : 
				s += "<=" ;
				break ;
			case BinaryOperator.LOGICAL_AND_VALUE : 
				s += "&&" ;
				break ;
			case BinaryOperator.LOGICAL_OR_VALUE : 
				s += "||" ;
				break ;
			case BinaryOperator.BITWISE_AND_VALUE : 
				s += "&" ;
				break ;
			case BinaryOperator.BITWISE_OR_VALUE:
				s += "|" ;
				break ;
			case BinaryOperator.BITWISE_XOR_VALUE:
				s += "^" ;
				break ;
			case BinaryOperator.LEFT_SHIFT_VALUE:
				s += "<<" ;
				break ;
			case BinaryOperator.RIGHT_SHIFT_VALUE:
				s += ">>" ;
				break ;
			case BinaryOperator.MODULUS_VALUE : 
				s += "%" ;
				break ;
			case BinaryOperator.MULTIPLICATION_VALUE : 
				s += "*" ;
				break ;
			case BinaryOperator.SUBSTRACTION_VALUE : 
				s += "-" ;
				break ;
			}
		return s; 
	}
	
	
	public static String decompile(UnaryOperator uo) {
		String s = "";
		switch(uo.getValue()) {
			case UnaryOperator.POSITIVE_VALUE : 
				s += "+" ;
				break ;
			case UnaryOperator.NEGATIVE_VALUE : 
				s += "-" ;
				break ;
			case UnaryOperator.LOGICAL_NOT_VALUE:
				s += "!" ;
				break ;
			case UnaryOperator.BITWISE_NOT_VALUE:
				s += "~" ;
				break ;
			case UnaryOperator.DEREFERENCE_VALUE : 
				s += "*" ;
				break ;
			case UnaryOperator.REFERENCE_VALUE:
				s += "&" ;
				break ;
			case UnaryOperator.DECREMENT_VALUE : 
				s += "--";
				break ; 
			case UnaryOperator.INCREMENT_VALUE :
				s += "++";
				break ; 
		}	
		return s;
	}
	
	public static String decompile(Action act, TComponent component) {
		return 	decompile(act, component, null, null);
	}
	

	public static String decompile(Action act, TComponent component, Connector c, TCompound compound) {
		String s = "";
		if (act==null) {
	          throw new Error("Unimplemented");
		} else if (act instanceof OpaqueElement) {
			OpaqueElement oe = (OpaqueElement)act ;
			s += oe.getBody();
		} else if (act instanceof Expression) {
			Expression exp = (Expression) act;
			s += decompile(exp, false, component, c, compound) ;
			s += "" ; // ;
		} else if (act instanceof AssignmentAction) {
			AssignmentAction aa = (AssignmentAction) act;
			s += decompile(aa.getAssignedTarget(), false, component, c, compound) ;
			switch (aa.getType()) {
			case ASSIGN:       s += " = "  ; break;
			case PLUS_ASSIGN:  s += " += " ; break;
			case MINUS_ASSIGN: s += " -= " ; break;
			case DIV_ASSIGN:   s += " /= " ; break;
			case MULT_ASSIGN:  s += " *= " ; break;
			case MOD_ASSIGN:   s += " %= " ; break;
			}
			s += decompile(aa.getAssignedValue(), false, component, c, compound) ;
			s += "" ; // ;
		} else if (act instanceof CompositeAction) {
			CompositeAction ca = (CompositeAction) act;
			s += "" ; // "{" ;
			indent() ;
			for(Action a: ca.getContent()) {
				s += indent ;
				s += decompile(a, component, c, compound) ;
			}
			deindent() ;
			s += indent + "" ; // + "}" ;
			
		} else if (act instanceof IfAction) {
			IfAction ia = (IfAction) act;
			s += "if (" ;
			s += decompile(ia.getCondition(), false, component, c, compound) ;
			s += ") " ;
			s += decompile(ia.getIfCase(), component, c, compound) ;
			s += "\n";
			Action a = ia.getElseCase() ;
			if (a!=null) {
				s += indent ;
				s += decompile(a, component, c, compound) ;
				s += "\n";
			}
		} else {
		    throw new Error("Unimplemented");
		}
		return s; 
	}

}
