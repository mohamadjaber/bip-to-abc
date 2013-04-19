package aub.edu.lb.bip.abc.api;

import java.io.PrintStream;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

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
import ujf.verimag.bip.Core.Behaviors.AtomType;
import ujf.verimag.bip.Core.Behaviors.Binding;
import ujf.verimag.bip.Core.Behaviors.BipType;
import ujf.verimag.bip.Core.Behaviors.DataParameter;
import ujf.verimag.bip.Core.Behaviors.DataType;
import ujf.verimag.bip.Core.Behaviors.DefinitionBinding;
import ujf.verimag.bip.Core.Behaviors.Expression;
import ujf.verimag.bip.Core.Behaviors.NamedElement;
import ujf.verimag.bip.Core.Behaviors.ParameterizedElement;
import ujf.verimag.bip.Core.Behaviors.PartType;
import ujf.verimag.bip.Core.Behaviors.PetriNet;
import ujf.verimag.bip.Core.Behaviors.Port;
import ujf.verimag.bip.Core.Behaviors.PortDefinition;
import ujf.verimag.bip.Core.Behaviors.PortDefinitionReference;
import ujf.verimag.bip.Core.Behaviors.PortType;
import ujf.verimag.bip.Core.Behaviors.State;
import ujf.verimag.bip.Core.Behaviors.Transition;
import ujf.verimag.bip.Core.Behaviors.Variable;
import ujf.verimag.bip.Core.Interactions.ActualPortParameter;
import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.CompoundType;
import ujf.verimag.bip.Core.Interactions.ConditionalActualPortParameter;
import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Interactions.ConnectorType;
import ujf.verimag.bip.Core.Interactions.ExportBinding;
import ujf.verimag.bip.Core.Interactions.InnerPortReference;
import ujf.verimag.bip.Core.Interactions.Interaction;
import ujf.verimag.bip.Core.Interactions.InteractionSpecification;
import ujf.verimag.bip.Core.Interactions.MultiplicityElement;
import ujf.verimag.bip.Core.Interactions.PartElementReference;
import ujf.verimag.bip.Core.Interactions.PortParameter;
import ujf.verimag.bip.Core.Interactions.PortParameterReference;
import ujf.verimag.bip.Core.Modules.Declaration;
import ujf.verimag.bip.Core.Modules.Module;
import ujf.verimag.bip.Core.Modules.OpaqueElement;
import ujf.verimag.bip.Core.Modules.Root;
import ujf.verimag.bip.Core.PortExpressions.ACFusion;
import ujf.verimag.bip.Core.PortExpressions.ACTyping;
import ujf.verimag.bip.Core.PortExpressions.ACTypingKind;
import ujf.verimag.bip.Core.PortExpressions.PortExpression;
import ujf.verimag.bip.Core.PortExpressions.PortReference;
import ujf.verimag.bip.Core.Priorities.ConnectorTypeReference;
import ujf.verimag.bip.Core.Priorities.PriorityElement;
import ujf.verimag.bip.Core.Priorities.PriorityRule;
import ujf.verimag.bip.Extra.Time.TimeSpecification;
import ujf.verimag.bip.Extra.Time.TimedConstraint;
import ujf.verimag.bip.Extra.Time.TimedVariable;
import ujf.verimag.bip.Extra.Time.UrgencyKind;

public class ParserTMP {
	private PrintStream dest ;
	private String indent = "" ;
	
	private Module currentModule = null ;
	
	private final Logger logger = Logger.getLogger(this.getClass().getName());
	
	public void disableLogging() {
    	logger.setLevel(Level.OFF);
    }
	
	private void indent() {
		indent += "  " ;
	}
	
	private void deindent() {
		indent = indent.substring(2) ;
	}
	
	public ParserTMP(PrintStream dest) {
		this.dest = dest;
	}

	public void decompile(Module m) {
		currentModule = m ;
		logger.log(Level.INFO, "generate source") ;
		if (m instanceof ujf.verimag.bip.Core.Modules.Package) {
//			ujf.verimag.bip.Core.Modules.Package p = (ujf.verimag.bip.Core.Modules.Package) m;
			dest.print("package ") ;
		} else {
			dest.print("model ") ;
		}
		
		dest.println(moduleName(m.getName())) ;
		
		
		indent() ;
		
		for (ujf.verimag.bip.Core.Modules.Package p : m.getUsedPackage()){
			dest.println(indent + "use " + moduleName(p.getName())) ;
		}
		for(Declaration d : m.getDeclaration()) {
			decompile(d) ;
		}
//		Nothing to do for data type?
//		for(Iterator i = m.getDataType().iterator();i.hasNext();) {
//			DataType dt = (DataType)i.next() ;
//			decompile(dt) ;
//		}
		for(BipType bt: m.getBipType()) {
			decompile(bt) ;
		}
		
		if (m instanceof ujf.verimag.bip.Core.Modules.System) {
			ujf.verimag.bip.Core.Modules.System sys = (ujf.verimag.bip.Core.Modules.System) m;
			Root r = sys.getRoot() ;
			
			assert(r != null) : "System does not have a root instance.";
			
			dest.print(indent + "component " + bipTypeName(r.getType()) + " " + r.getName()) ;
			decompileParam(r.getActualData(), false) ;
			dest.println();
		}
		
		deindent() ;
		dest.println("end") ;
		
	}
	
	
	private String moduleName(String mName) {
		int pos = mName.lastIndexOf('/') ;
		if (pos>0) mName = mName.substring(pos+1) ;
		pos = mName.lastIndexOf('.') ;
		if (pos>0) mName = mName.substring(0, pos) ;
		return mName ;
		
	}

	//__________________________________
	//
	//  Declarations 
	//
	//__________________________________
	public void decompile(Declaration d) {
		if (d instanceof OpaqueElement) {
			OpaqueElement oe = (OpaqueElement) d;
			String header ="";
			if (oe.isIsHeader()) {
				header = "header " ;
			}
			dest.println(indent + header + "{#" + oe.getBody() + "#}") ;
		} else {
		    throw new Error("Unimplemented");
		}
		
	}

	private String name(NamedElement ne) {
	    if (ne==null)             
	        throw new Error("Unimplemented");

	    String n = ne.getName() ;
	    if (n==null)          
	        throw new Error("Unimplemented");

	    return n ;
	}

	private String dataTypeName(DataType dt) {
	    if (dt==null) {
	        throw new Error("Unimplemented");
	    } else if (dt instanceof OpaqueElement) {
	        OpaqueElement oe = (OpaqueElement) dt;
	        return oe.getBody() ;
	    } else {
	        throw new Error("Unimplemented");
	    }
	}

	private String bipTypeName(BipType bt) {
		if (bt==null) {
		    throw new Error("Unimplemented");
		} else {
			if (bt.getModule()==currentModule) {
				return bt.getName() ;
			} else {
				return bt.getModule().getName() + "." + bt.getName() ;
			}
		}
	}

	
	//__________________________________
	//
	//  Bip Type 
	//
	//__________________________________
	public void decompile(BipType bt) {
		if (bt instanceof PortType) {
			PortType pt = (PortType) bt;
			decompile(pt) ;
		} else if (bt instanceof ConnectorType) {
			ConnectorType ct = (ConnectorType) bt;
			decompile(ct) ;
		} else if (bt instanceof CompoundType) {
			CompoundType ct = (CompoundType) bt;
			decompile(ct) ;
		} else if (bt instanceof AtomType) {
			AtomType at = (AtomType) bt;
			decompile(at) ;
		} else {
		    throw new Error("Unimplemented");
		}
	}

	void decompileParamDecl(ParameterizedElement pe) {
		List<DataParameter> l = pe.getDataParameter() ;
		if (l.size()>0) {
			dest.print("(") ;
			boolean first = true ;
			for (DataParameter dp: l) {
				if (first) {
					first =false ;
				} else {
					dest.print(", ") ;
				}
				dest.print(dataTypeName(dp.getType()) + " " + name(dp)) ;
			}
			dest.print(")") ;
			
		}
		
	}
	
	public void decompileDecl(PartType pt) {
		for(Declaration d: pt.getDeclaration()) {
			decompile(d) ;
		}
	}


	public void decompile(Variable v) {
		String decor = "" ;
		if (v instanceof TimedVariable) {
			decor += "timed " ;
		}
		if (v.isIsExternal()) {
			decor += "extern ";
		}
		dest.print(indent + decor + "data " + dataTypeName(v.getType()) + " "+ name(v)) ;
		Expression e = v.getInitialValue() ;
		if (e != null) {
			dest.print("=") ;
			decompile(e, false) ;
		}
		dest.println();
	}

	//__________________________________
	//
	//  Port Type 
	//
	//__________________________________
	public void decompile(PortType pt ) {
		if (pt.getName().equals("Port")) return ; // predefine declaration
		dest.print(indent + "port type " + pt.getName() ) ;
		
		decompileParamDecl(pt) ;
		
		dest.println() ;
	}
	
	//__________________________________
	//
	//  Port expression 
	//
	//__________________________________
	public void decompile(PortExpression pe, boolean inExp) {
		if (pe instanceof ACFusion) {
			ACFusion acf = (ACFusion) pe;
			if (inExp) dest.print("[") ;
			for (PortExpression i : acf.getOperand()) {
				dest.print(" ") ;
				decompile(i, true) ;
			}
			if (inExp) dest.print("]") ;
		} else if (pe instanceof PortParameterReference){
			PortParameterReference ppr = (PortParameterReference)pe ;
			dest.print(ppr.getTarget().getName()) ;
		} else if (pe instanceof PortDefinitionReference){
			PortDefinitionReference pdr = (PortDefinitionReference)pe ;
			dest.print(pdr.getTarget().getName()) ;
		} else if (pe instanceof ACTyping){
			ACTyping act = (ACTyping)pe ;
			decompile(act.getOperand(), true) ;
			if (act.getType() == ACTypingKind.TRIG) dest.print("'") ;
		} else {
		    throw new Error("Unimplemented");
 		}

	}
	
	
	//__________________________________
	//
	//  Connector Type 
	//
	//__________________________________
	public void decompile(ConnectorType ct ) {
		// connector profile
		dest.print(indent + "connector type " + ct.getName() + "(") ;
		
		boolean first = true ;
		for (PortParameter pp: ct.getPortParameter()) {
			if (first) {
				first =false ;
			} else {
				dest.print(", ") ;
			}
			dest.print(bipTypeName(pp.getType()) + " " + name(pp)) ;
		}
		dest.print(")") ;
		decompileParamDecl(ct) ;
		dest.println() ;
		indent() ;

		
		// connector definition
		dest.print(indent + "define ") ;
		decompile(ct.getDefinition(), false) ;
		dest.println() ;

		// declarations
		decompileDecl(ct) ;
		// variable declaration
		for(Variable v: ct.getVariable()) {
			decompile(v) ;
		}


		// interactions
		for (InteractionSpecification is : ct.getInteractionSpecification()) {
			dest.print(indent + "on") ;
			Interaction inter = is.getInteraction() ;
			for(PortReference ppr: inter.getPort()) {
				//FIXME this is BROKEN ! Previous code was casting to PPR, which is not compatible with
				// BipScannSyntaxe:1361 where a PortDefinitionReference is added to the list.
				//PortParameterReference ppr = (PortParameterReference)j.next() ;
				assert(ppr instanceof PortParameterReference): "This code is broken and makes false asumption";
				if (ppr instanceof PortParameterReference){
					PortParameterReference ppr_b = (PortParameterReference)ppr;
					dest.print(" " + name(ppr_b.getTarget())) ;
				}
			}
			dest.println();
			indent() ;
			Expression guard = is.getGuard() ;
			if (guard != null) {
				dest.print(indent + "provided ") ;
				decompile(guard, false) ;
				dest.println();
			}
			Action act = is.getUpAction() ;
			if (act!=null) {
				dest.print(indent + "up ") ;
				decompile(act) ;
				dest.println();
			}
			deindent() ;
			act = is.getDownAction() ;
			if (act!=null) {
				dest.print(indent + "down ") ;
				decompile(act) ;
				dest.println();
			}
		}
		
		//export port
		Port p = ct.getPort() ;
		if (p!=null) {
			DefinitionBinding bd = (DefinitionBinding)p.getBinding() ;
			PortDefinition pd=null;
			if (bd!=null) pd = bd.getDefinition() ;
			dest.print(indent+"export port ") ;
			decompile(pd, false) ;
		}
		
		deindent() ;
		dest.println(indent + "end") ;
		dest.println() ;
		
	}
	//__________________________________
	//
	//  Compound Type 
	//
	//__________________________________
	public void decompile(CompoundType ct ) {
		// component profile
		dest.print(indent + "compound type " + ct.getName() ) ;
		decompileParamDecl(ct) ;
		dest.println() ;

		indent() ;

		// declarations
		decompileDecl(ct) ;
		
		// subcomponents
		for(Component comp: ct.getSubcomponent()) {
			decompile(comp) ;
		}
		
		// connectors
		for(Connector cnx: ct.getConnector()) {
			decompile(cnx) ;
		}
		
		// priorities
		for(PriorityRule prioRule:ct.getPriorityRule()) {
			decompile(prioRule) ;
		}
		
		// export port
		for(Port p: ct.getPort()) {
			decompile(p) ;
			dest.println() ;
		}

		deindent() ;
		dest.println(indent + "end") ;
		dest.println() ;
		
	}

	public void decompile(PriorityRule prioRule) {
		dest.print(indent + "priority " + name(prioRule) + " ") ;
		decompile(prioRule.getLower()) ;
		dest.print(" < ") ;
		decompile(prioRule.getGreater()) ;
		Expression guard = prioRule.getGuard() ;
		if (guard !=null) {
			dest.print(" provided ") ;
			decompile(guard, false) ;
		}
		dest.println() ;
		
	}

	public void decompile(PriorityElement pe) {
		if (pe instanceof Interaction) {
			Interaction inter = (Interaction) pe;
			decompile(inter) ;
		} else if (pe instanceof ConnectorTypeReference) {
			ConnectorTypeReference ctr = (ConnectorTypeReference) pe;
			dest.print(" " + ctr.getTarget().getName() + " ") ;
		} 
	}
	
	public void decompile(Interaction inter) {
		if (inter.getConnector()!=null) decompile(inter.getConnector()) ;
		List<PortReference> l = inter.getPort() ;
		if (l.size()>0) {
			if (inter.getConnector()!=null) dest.print(":") ;
			for(PortReference pr: l) {
				dest.print(" ") ;
				if (pr instanceof InnerPortReference) {
					InnerPortReference ipr = (InnerPortReference) pr;
					decompile(ipr.getTargetInstance()) ;
					dest.print("." + name(ipr.getTargetPort())) ;					
				} else if (pr instanceof PortDefinitionReference) {
					PortDefinitionReference pd = (PortDefinitionReference) pr;
					dest.print(name(pd.getTarget())) ;
				} else {
			           throw new Error("Unimplemented");
				}
			}
		}
	}

	public void decompile(Connector cnx) {
		dest.print(indent + "connector ") ;
		dest.print(bipTypeName(cnx.getType()) + " " + name(cnx)) ;
		// index
		decompileIndex(cnx) ;
		
		
		//port parameters
		dest.print("(") ;
		boolean first = true ;
		for(ActualPortParameter app: cnx.getActualPort()) {
			if (first) {
				first =false ;
			} else {
				dest.print(", ") ;
			}
			decompile(app) ;
		}
		dest.print(")") ;
		
		decompileParam(cnx.getActualData(), false) ;
		dest.println() ;
	}

	public void decompileIndex(MultiplicityElement me) {
		for (Expression exp: me.getMultiplicitySpecification()) {
			dest.print("[") ;
			decompile(exp, false) ;
			dest.print("]") ;
		}
		
	}

	public void decompile(ActualPortParameter app) {
		if (app instanceof ConditionalActualPortParameter) {
			ConditionalActualPortParameter capp = (ConditionalActualPortParameter) app;
			dest.print("(") ;
			decompile(capp.getExpression(), true) ;
			dest.print("?") ;
			decompile(capp.getTrueCase()) ;
			dest.print(":") ;
			decompile(capp.getFalseCase()) ;
			dest.print(")") ;
		} else if (app instanceof InnerPortReference) {
			InnerPortReference ipr = (InnerPortReference) app;
			decompile(ipr.getTargetInstance()) ;
			dest.print(".") ;
			dest.print(name(ipr.getTargetPort())) ;
		} else {
            throw new Error("Unimplemented");
		}
		
	}

	public void decompile(Component comp) {
		dest.print(indent + "component ") ;
		dest.print(bipTypeName(comp.getType()) + " " + name(comp)) ;
		// index
		decompileIndex(comp) ;
		
		decompileParam(comp.getActualData(), false) ;
		dest.println() ;
		
	}

	
	void decompileParam(List<Expression> actualDatas, boolean alwayPar) {
		if (alwayPar || actualDatas.size()>0) dest.print("(") ;
		boolean first = true ;
		for(Expression exp: actualDatas) {
			if (first) {
				first =false ;
			} else {
				dest.print(", ") ;
			}
			decompile(exp, false) ; 
		}
		if (alwayPar || actualDatas.size()>0) dest.print(")") ;
		
	}
	

	
	//__________________________________
	//
	//  Atom Type 
	//
	//__________________________________
	public void decompile(AtomType at ) {
		// component profile
		dest.print(indent + "atomic type " + at.getName() ) ;
		
		decompileParamDecl(at) ;
		dest.println() ;
		
		indent() ;
		// declarations
		decompileDecl(at) ;
		// variable declaration
		for(Variable v: at.getVariable()) {
			decompile(v) ;
		}
		// port definition declaration
		for(PortDefinition pd: at.getPortDefinition()) {
			decompile(pd, true) ;
		}
		
		PetriNet pn = (PetriNet)at.getBehavior() ;
		// state declarations
		for(State s: pn.getState()) {
			dest.print(indent + "place " + name(s)) ;
//			for(Iterator j = pn.getInitialState().iterator();j.hasNext();) {
//				State is = (State)j.next() ;
//				if (is==s) {
//					dest.print(" = initial") ;
//					break ;
//				}
//			}
			dest.println();
		}
		
		// initial block
		dest.print(indent + "initial to " ) ;
		boolean first = true ;
		for(State s: pn.getInitialState()) {
			if (first) {
				first = false ;
				dest.print(s.getName()) ;
			} else {
				dest.print("," + s.getName() ) ;
			}
		}
		dest.println();
		Action initAct = pn.getInitialization();
		if (initAct!=null) {
			dest.print("do ") ;
			indent() ;
			decompile(initAct) ;
			deindent() ;
		}

		
		
		// transitions
		for(Transition trans: pn.getTransition()) {
			decompile(trans) ;
		}
		
		// priorities
		for(PriorityRule prioRule : at.getPriorityRule()) {
			decompile(prioRule) ;
		}
		
		// port export
		for(Port p: at.getPort()) {
			decompile(p) ;
			dest.println() ;
		}
		
		deindent() ;
		dest.println(indent + "end") ;
		dest.println() ;
		
	}
	
	public void decompile(Port p) {
		Binding b = p.getBinding() ;
		if (b instanceof DefinitionBinding) {
			DefinitionBinding db = (DefinitionBinding) b;
			String name = name(db.getDefinition()) ;
			if (!name.equals(p.getName())) {
			dest.print(indent + "export port " + bipTypeName(p.getType()) + " " + name(p) + " is ") ;
			dest.print(name) ;
			}
		} else if (b instanceof ExportBinding) {
			dest.print(indent + "export port " + bipTypeName(p.getType()) + " " + name(p) + " is ") ;
			ExportBinding eb = (ExportBinding) b;
			decompile(eb.getTargetInstance()) ;
			dest.print("." + name(eb.getTargetPort())) ;
			
		} else {
            throw new Error("Unimplemented");
		}
		
	}

	public void decompile(Transition trans) {
		
		// trigger expression
		dest.print(indent + "on ") ;
		decompile(trans.getTrigger(), false) ;
		dest.println();
		indent() ;
		
		// source and destination states
		dest.print(indent + "from") ;
		boolean first = true ;
		for(State s: trans.getOrigin()) {
			if (first) first = false ;
			else dest.print(",") ;
			dest.print(" " + name(s)) ;
		}
		dest.print(" to") ;
		first = true ;
		for(State s: trans.getDestination()) {
			if (first) first = false ;
			else dest.print(",") ;
			dest.print(" " + name(s)) ;
		}
		dest.println() ;
		
		// guard
		Expression guard = trans.getGuard() ;
		if (guard!=null) {
			dest.print(indent + "provided ") ;
			decompile(guard, false) ;
			dest.println();
		}
		
		// timed guard
		TimeSpecification tGuard = trans.getTimeSpecification() ;
		if (tGuard!=null) {
			dest.print(indent ) ;
			decompile(tGuard) ;
			dest.println();
			
		}
		
		// action
		Action act = trans.getAction() ;
		if (act!=null) {
			dest.print(indent + "do ") ;
			decompile(act) ;
			dest.println();
		}
		
		deindent() ;
		
	}

	public void decompile(TimeSpecification ts) {
		switch (ts.getUrgency().getValue()) {
		case UrgencyKind.DELAYABLE_VALUE : 
			dest.print("delayable ") ;
			break ;
		case UrgencyKind.EAGER_VALUE : 
			dest.print("eager ") ;
			break ;
		case UrgencyKind.LAZY_VALUE : 
			dest.print("lazy ") ;
			break ;
		}
		boolean first = true ;
		for (TimedConstraint tc: ts.getTimedConstraint()) {
			if (first) first = false ;
			else dest.print(" and ") ;
			dest.print(tc.getClock().getTargetVariable().getName()) ;
			dest.print(" in (") ;
			Expression e = tc.getLowBound() ;
			if (e==null) dest.print("_") ;
			else decompile(e, false) ;
			dest.print(",") ;
			e = tc.getHighBound() ;
			if (e==null) dest.print("_") ;
			else decompile(e, false) ;
			dest.print(")") ;
		}
		
		
	}

	public void decompile(PortDefinition pd, boolean declar) {
		
		Port p = getPort(pd.getAtomType(), pd.getName()) ;
		if (declar) {
			if (p!=null) dest.print(indent + "export port ") ;
			else dest.print(indent + "port ") ;
		}
		dest.print( bipTypeName(pd.getType()) + " " + name(pd) + "(") ;
		boolean first = true ;
		for(Variable v : pd.getExposedVariable()) {
			if (first) {
				first =false ;
			} else {
				dest.print(", ") ;
			}
			dest.print(v.getName()) ;
		}
		
		dest.println(")") ;
		
		
	}

	private Port getPort(AtomType at, String name) {
		if (at!=null) {
		for (Port p: at.getPort()) {
			if (p.getName().equals(name)) return p ;
		}
		}
		return null;
	}

	//__________________________________
	//
	//  Expressions 
	//
	//__________________________________
	
	public void decompile(Expression exp, boolean inExp) {
		if (exp==null) {
            throw new Error("Unimplemented");
		} else if (exp instanceof IntegerLiteral) {
			IntegerLiteral il = (IntegerLiteral) exp;
			dest.print(il.getIValue()) ;
		} else if (exp instanceof IndexLiteral) {
			IndexLiteral il = (IndexLiteral) exp;
			dest.print("$" + il.getId()) ;
		} else if (exp instanceof BooleanLiteral) {
			BooleanLiteral bl = (BooleanLiteral) exp;
			if (bl.isBValue()) {
				dest.print("true") ;				
			} else {
				dest.print("false") ;				
			}
		} else if (exp instanceof StringLiteral) {
			StringLiteral sl = (StringLiteral) exp;
			dest.print(sl.getSValue()) ;
		} else if (exp instanceof RealLiteral) {
			RealLiteral rl = (RealLiteral) exp;
			dest.print(rl.getRValue()) ;
		} else if (exp instanceof RealLiteral) {
			RealLiteral rl = (RealLiteral) exp;
			dest.print(rl.getRValue()) ;
		} else if (exp instanceof PointerLiteral) {
			
			dest.print("NULL") ;
		} else if (exp instanceof VariableReference) {
			VariableReference vr = (VariableReference) exp;
			dest.print(name(vr.getTargetVariable())) ;
		} else if (exp instanceof StateReference) {
			StateReference sr = (StateReference) exp;
			dest.print(name(sr.getTargetState())) ;
		} else if (exp instanceof DataParameterReference) {
			DataParameterReference dpr = (DataParameterReference) exp;
			dest.print(name(dpr.getTargetParameter())) ;
		} else if (exp instanceof RequiredDataParameterReference) {
			RequiredDataParameterReference rdpr = (RequiredDataParameterReference) exp;
			PortParameterReference ppr = rdpr.getPortReference() ;
			if (ppr==null) 
	            throw new Error("Unimplemented");
			else dest.print(name(ppr.getTarget())) ;
			dest.print(".") ;
			dest.print(name(rdpr.getTargetParameter())) ;
		} else if (exp instanceof InnerDataParameterReference) {
			InnerDataParameterReference idpr = (InnerDataParameterReference) exp;
			InnerPortReference ipr = idpr.getPortReference() ;
			if (ipr==null) {
	             throw new Error("Unimplemented");
			} else {
				decompile(ipr.getTargetInstance()) ;
			}
			dest.print("." + name(ipr.getTargetPort())) ;
		} else if (exp instanceof DataParameterSpecification) {
			DataParameterSpecification dps = (DataParameterSpecification) exp;
			dest.print(name(dps.getTargetParameter())) ;
		} else if (exp instanceof FunctionCallExpression) {
			FunctionCallExpression fce = (FunctionCallExpression) exp;
			String name = fce.getFunctionName() ;
			Expression dr = fce.getNavigated() ;
			if (dr!=null) {
				decompile(dr, true) ;
				if (fce.isIsOnRef()) dest.print("->");
				else dest.print(".") ;
			}
			if (name==null)
			    throw new Error("Unimplemented");
			else dest.print(name) ;
			decompileParam(fce.getActualData(), true) ;
		} else if (exp instanceof FieldNavigationExpression) {
			FieldNavigationExpression fne = (FieldNavigationExpression) exp;
			decompile(fne.getNavigated(), true) ;
			String field = fne.getFieldName() ;
			if (field==null) 
			    throw new Error("Unimplemented");
			if (fne.isIsOnRef()) {
				dest.print("->" + field); 
			}
			else {
				dest.print("." + field) ;
			}
		} else if (exp instanceof ArrayNavigationExpression) {
			ArrayNavigationExpression ane = (ArrayNavigationExpression) exp;
			decompile(ane.getNavigated(), true) ;
			dest.print("[") ;
			decompile(ane.getIndex(), false) ;
			dest.print("]") ;
		} else if (exp instanceof BinaryExpression) {
			BinaryExpression be = (BinaryExpression) exp;
			if (inExp) dest.print("(") ;
			decompile(be.getLeftOperand(), true) ;
			
			switch(be.getOperator().getValue()) {
			case BinaryOperator.ADDITION_VALUE : 
				dest.print("+") ;
				break ;
			case BinaryOperator.DIVISION_VALUE : 
				dest.print("/") ;
				break ;
			case BinaryOperator.EQUALITY_VALUE : 
				dest.print("==") ;
				break ;
			case BinaryOperator.GREATER_THAN_VALUE : 
				dest.print(">") ;
				break ;
			case BinaryOperator.GREATER_THAN_OR_EQUAL_VALUE : 
				dest.print(">=") ;
				break ;
			case BinaryOperator.INEQUALITY_VALUE : 
				dest.print("!=") ;
				break ;
			case BinaryOperator.LESS_THAN_VALUE : 
				dest.print("<") ;
				break ;
			case BinaryOperator.LESS_THAN_OR_EQUAL_VALUE : 
				dest.print("<=") ;
				break ;
			case BinaryOperator.LOGICAL_AND_VALUE : 
				dest.print("&&") ;
				break ;
			case BinaryOperator.LOGICAL_OR_VALUE : 
				dest.print("||") ;
				break ;
			case BinaryOperator.BITWISE_AND_VALUE : 
				dest.print("&") ;
				break ;
			case BinaryOperator.BITWISE_OR_VALUE:
				dest.print("|") ;
				break ;
			case BinaryOperator.BITWISE_XOR_VALUE:
				dest.print("^") ;
				break ;
			case BinaryOperator.LEFT_SHIFT_VALUE:
				dest.print("<<") ;
				break ;
			case BinaryOperator.RIGHT_SHIFT_VALUE:
				dest.print(">>") ;
				break ;
			case BinaryOperator.MODULUS_VALUE : 
				dest.print("%") ;
				break ;
			case BinaryOperator.MULTIPLICATION_VALUE : 
				dest.print("*") ;
				break ;
			case BinaryOperator.SUBSTRACTION_VALUE : 
				dest.print("-") ;
				break ;
				
			}
			
			decompile(be.getRightOperand(), true) ;			
			if (inExp) dest.print(")") ;

		} else if (exp instanceof UnaryExpression) {
			UnaryExpression ue = (UnaryExpression) exp;
			if (inExp) dest.print("(") ;
			switch(ue.getOperator().getValue()) {
			case UnaryOperator.POSITIVE_VALUE : 
				dest.print("+") ;
				decompile(ue.getOperand(), true) ;
				break ;
			case UnaryOperator.NEGATIVE_VALUE : 
				dest.print("-") ;
				decompile(ue.getOperand(), true) ;
				break ;
			case UnaryOperator.LOGICAL_NOT_VALUE:
				dest.print("!") ;
				decompile(ue.getOperand(), true) ;
				break ;
			case UnaryOperator.BITWISE_NOT_VALUE:
				dest.print("~") ;
				decompile(ue.getOperand(), true) ;
				break ;
			case UnaryOperator.DEREFERENCE_VALUE : 
				dest.print("*") ;
				decompile(ue.getOperand(), true) ;
				break ;
			case UnaryOperator.REFERENCE_VALUE:
				dest.print("&") ;
				decompile(ue.getOperand(), true) ;
				break ;
			case UnaryOperator.DECREMENT_VALUE : 
				if (ue.isPostfix()) {
					decompile(ue.getOperand(), true) ;
					dest.print("--") ;
				}
				else {
					dest.print("--") ; 
					decompile(ue.getOperand(), true) ;
				}
				break ; 
			case UnaryOperator.INCREMENT_VALUE :
				if (ue.isPostfix()) {
					decompile(ue.getOperand(), true) ;
					dest.print("++") ;
				}
				else {
					dest.print("++") ; 
					decompile(ue.getOperand(), true) ;
				}
				break ; 
			}		
			if (inExp) dest.print(")") ;
		} else if (exp instanceof OpaqueElement) {
			OpaqueElement oe = (OpaqueElement)exp ;
			dest.println("{#" + oe.getBody() + "#}") ;			
		} else {
		    throw new Error("Unimplemented");
		}

	}
	public void decompile(PartElementReference per) {
		dest.print(name(per.getTargetPart() )) ;

		for(Expression exp: per.getIndex()) {
			dest.print("[") ;
			decompile(exp, false) ;
			dest.print("]") ;
		}
	}

	//__________________________________
	//
	//  Actions 
	//
	//__________________________________
	public void decompile(Action act) {
		if (act==null) {
	          throw new Error("Unimplemented");
		} else if (act instanceof OpaqueElement) {
			OpaqueElement oe = (OpaqueElement)act ;
			dest.println("{#" + oe.getBody() + "#}") ;
		} else if (act instanceof Expression) {
			Expression exp = (Expression) act;
			decompile(exp, false) ;
			dest.println(";") ;
		} else if (act instanceof AssignmentAction) {
			AssignmentAction aa = (AssignmentAction) act;
			decompile(aa.getAssignedTarget(), false) ;
			switch (aa.getType()) {
			case ASSIGN:       dest.print(" = ")  ; break;
			case PLUS_ASSIGN:  dest.print(" += ") ; break;
			case MINUS_ASSIGN: dest.print(" -= ") ; break;
			case DIV_ASSIGN:   dest.print(" /= ") ; break;
			case MULT_ASSIGN:  dest.print(" *= ") ; break;
			case MOD_ASSIGN:   dest.print(" %= ") ; break;
			}
			decompile(aa.getAssignedValue(), false) ;
			dest.println(";") ;
		} else if (act instanceof CompositeAction) {
			CompositeAction ca = (CompositeAction) act;
			dest.println( "{") ;
			indent() ;
			for(Action a: ca.getContent()) {
				dest.print(indent) ;
				decompile(a) ;
			}
			deindent() ;
			dest.println(indent + "}") ;
			
		} else if (act instanceof IfAction) {
			IfAction ia = (IfAction) act;
			dest.print("if (") ;
			decompile(ia.getCondition(), false) ;
			dest.print(") ") ;
			decompile(ia.getIfCase()) ;
			dest.println();
			Action a = ia.getElseCase() ;
			if (a!=null) {
				dest.print(indent) ;
				decompile(a) ;
				dest.println() ;
			}
		} else {
		    throw new Error("Unimplemented");
		}
	}

}
