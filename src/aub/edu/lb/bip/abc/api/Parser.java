package aub.edu.lb.bip.abc.api;

import java.util.List;

import aub.edu.lb.bip.abc.together.TVariable;

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
import ujf.verimag.bip.Core.Behaviors.DataType;
import ujf.verimag.bip.Core.Behaviors.Expression;
import ujf.verimag.bip.Core.Behaviors.NamedElement;
import ujf.verimag.bip.Core.Behaviors.Variable;
import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.InnerPortReference;
import ujf.verimag.bip.Core.Interactions.PartElementReference;
import ujf.verimag.bip.Core.Interactions.PortParameterReference;
import ujf.verimag.bip.Core.Modules.OpaqueElement;

public class Parser {
	
	private static String name(NamedElement ne, Component component) {
	    if (ne==null)             
	        throw new Error("Unimplemented");

	    String n = null;
	    
	    if(ne instanceof Variable) {
	    	Variable v = (Variable) ne;
	    	TVariable tv = new TVariable(v, component);
	    	n = tv.toString();
	    }
	    
	    if (n==null)          
	        throw new Error("Unimplemented");

	    return n ;
	}
	
	private static String dataTypeName(DataType dt) {
	    if (dt==null) {
	        throw new Error("Unimplemented");
	    } else if (dt instanceof OpaqueElement) {
	        OpaqueElement oe = (OpaqueElement) dt;
	        return oe.getBody() ;
	    } else {
	        throw new Error("Unimplemented");
	    }
	}
	
	public static String decompileParam(List<Expression> actualDatas, boolean alwayPar, Component component) {
		String s = "";
		if (alwayPar || actualDatas.size()>0) s += "(" ;
		boolean first = true ;
		for(Expression exp: actualDatas) {
			if (first) {
				first =false ;
			} else {
				s += ", " ;
			}
			decompile(exp, false, component) ; 
		}
		if (alwayPar || actualDatas.size()>0) s += ")" ;
		return s; 
		
	}
	
	public static String decompile(PartElementReference per, Component component) {
		String s = "";
		s += name(per.getTargetPart(), component ) ;

		for(Expression exp: per.getIndex()) {
			s += "[" ;
			decompile(exp, false, component) ;
			s += "]" ;
		}
		return s; 
	}
	
	public static String decompile(Expression exp, boolean inExp, Component component) {
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
			else s += name(ppr.getTarget(), component) ;
			s += "." ;
			s += name(rdpr.getTargetParameter(), component) ;
		} else if (exp instanceof InnerDataParameterReference) {
			InnerDataParameterReference idpr = (InnerDataParameterReference) exp;
			InnerPortReference ipr = idpr.getPortReference() ;
			if (ipr==null) {
	             throw new Error("Unimplemented");
			} else {
				decompile(ipr.getTargetInstance(), component) ;
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
				decompile(dr, true, component) ;
				if (fce.isIsOnRef()) s += "->";
				else s += "." ;
			}
			if (name==null)
			    throw new Error("Unimplemented");
			else s += name ;
			decompileParam(fce.getActualData(), true, component) ;
		} else if (exp instanceof FieldNavigationExpression) {
			FieldNavigationExpression fne = (FieldNavigationExpression) exp;
			decompile(fne.getNavigated(), true, component) ;
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
			decompile(ane.getNavigated(), true, component) ;
			s += "[" ;
			decompile(ane.getIndex(), false, component) ;
			s += "]" ;
		} else if (exp instanceof BinaryExpression) {
			BinaryExpression be = (BinaryExpression) exp;
			if (inExp) s += "(" ;
			decompile(be.getLeftOperand(), true, component) ;
			
			switch(be.getOperator().getValue()) {
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
			
			decompile(be.getRightOperand(), true, component) ;			
			if (inExp) s += ")" ;

		} else if (exp instanceof UnaryExpression) {
			UnaryExpression ue = (UnaryExpression) exp;
			if (inExp) s += "(" ;
			switch(ue.getOperator().getValue()) {
			case UnaryOperator.POSITIVE_VALUE : 
				s += "+" ;
				decompile(ue.getOperand(), true, component) ;
				break ;
			case UnaryOperator.NEGATIVE_VALUE : 
				s += "-" ;
				decompile(ue.getOperand(), true, component) ;
				break ;
			case UnaryOperator.LOGICAL_NOT_VALUE:
				s += "!" ;
				decompile(ue.getOperand(), true, component) ;
				break ;
			case UnaryOperator.BITWISE_NOT_VALUE:
				s += "~" ;
				decompile(ue.getOperand(), true, component) ;
				break ;
			case UnaryOperator.DEREFERENCE_VALUE : 
				s += "*" ;
				decompile(ue.getOperand(), true, component) ;
				break ;
			case UnaryOperator.REFERENCE_VALUE:
				s += "&" ;
				decompile(ue.getOperand(), true, component) ;
				break ;
			case UnaryOperator.DECREMENT_VALUE : 
				if (ue.isPostfix()) {
					decompile(ue.getOperand(), true, component) ;
					s += "--" ;
				}
				else {
					s += "--" ; 
					decompile(ue.getOperand(), true, component) ;
				}
				break ; 
			case UnaryOperator.INCREMENT_VALUE :
				if (ue.isPostfix()) {
					decompile(ue.getOperand(), true, component) ;
					s += "++" ;
				}
				else {
					s += "++" ; 
					decompile(ue.getOperand(), true, component) ;
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

}
