package aub.edu.lb.bip.abc.together;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;

import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TAction;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TDoTogetherAction;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TIfAction;
import aub.edu.lb.bip.abc.expression.TWhileAction;



public class TGenerator {	
	private static String indent = "";
	private TCompound tCompound; 
	
	private PrintStream output; 
	
	private static void indent() {
		indent += TogetherSyntax.tabSpace ;
	}
	
	private static void deindent() {
		indent = indent.substring(TogetherSyntax.tabSpace.length()) ;
	}
	
	public TGenerator(TCompound tCompound, String fileName) throws FileNotFoundException {
		this.tCompound = tCompound;
		output = new PrintStream(new File(fileName));
		decompile(tCompound.getTogetherAction());
	}
	

	
	private void decompile(TAction act) {
		if(act instanceof TExpression)
			output.println(indent + act);
		else if(act instanceof TAssignmentAction) {
			output.println(indent + act);
		}
		else if(act instanceof TCompositeAction) {
			for(TAction a: ((TCompositeAction) act).getContents()) {
				decompile(a);
			}	
		}
		else if(act instanceof TWhileAction) {
			TWhileAction action = (TWhileAction) act; 
			output.print(indent + TogetherSyntax.while_loop + "(");
			output.print(action.getCondition());
			output.print(")");
			output.println(indent + " {");
			indent();
			decompile(action.getAction());
			deindent();
			output.println(indent + "}");
		}
		else if(act instanceof TDoTogetherAction) {
			TDoTogetherAction action = (TDoTogetherAction) act;
			output.println(indent + TogetherSyntax.doTogether + " {");
			indent();
			decompile(action.getAction());
			deindent();
			output.println(indent + "}");
		}
		else if(act instanceof TIfAction) {
			TIfAction action = (TIfAction) act;
			output.print(indent + TogetherSyntax.if_condition + "(");
			output.print(action.getCondition());
			output.println(") {");
			indent();
			decompile(action.getIfCase());
			deindent();
			output.println(indent + "}");
			output.println(indent + TogetherSyntax.else_condition + " {");
			indent();
			decompile(action.getElseCase());
			deindent();
			output.println(indent + "}");
		}
		else {
			// throw new Error("Unimplemented");
		}
	}
	
	public TCompound getTCompound() {
		return tCompound;
	}
	
}
