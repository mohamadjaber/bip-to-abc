package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;


import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TBinaryExpression;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TVariable;

import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;
import ujf.verimag.bip.Core.Behaviors.Port;
import ujf.verimag.bip.Core.Interactions.Component;
import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Interactions.InnerPortReference;
import ujf.verimag.bip.Core.Interactions.InteractionSpecification;

public class TInteraction extends TVariable {
	public static int constInteractionID = 0; 
	private Connector connector; 
	private List<Component> components = new LinkedList<Component>(); 
	private Map<Component, Port> mapCompPort = new HashMap<Component, Port>();
	
	private TCompound tCompound; 
	
	private int size; 
	private final int id; 

	
	public TInteraction(Connector conn, TCompound tCompound) {
		this.tCompound = tCompound; 
		connector = conn;
		size = conn.getActualPort().size();
		for(Object o : conn.getActualPort()) {
			InnerPortReference ipr = (InnerPortReference) o;
			
			//No hierarchical connectors
			assert(ipr.getTargetInstance().getTargetPart() instanceof Component);
			
			Component comp = (Component) ipr.getTargetInstance().getTargetPart();
			Port p = ipr.getTargetPort();
			mapCompPort.put(comp, p);
			components.add(comp);
		}
		setName();
		setType();
		id = constInteractionID++;
	}
	
	
	public TExpression getExpressionEnablement() {
		//FIXME -> add guard done but check.
		TExpression expressionEnablement = new TNamedElement(TogetherSyntax.true_condition);

		if(connector.getType().getInteractionSpecification().size() == 1) {
			InteractionSpecification interactionSpec = connector.getType().getInteractionSpecification().get(0);
			String guard = Parser.decompile(interactionSpec.getGuard(), true, null, connector, tCompound); 
			if(!guard.equals(""))
				expressionEnablement = new TNamedElement(guard);
			else 
				expressionEnablement = new TNamedElement(TogetherSyntax.true_condition);

		}
		else 
			expressionEnablement = new TNamedElement(TogetherSyntax.true_condition);

		for(Component comp: mapCompPort.keySet()) {
			TComponent tComponent = tCompound.getTComponent(comp);
			TPort p = tComponent.getTPort(mapCompPort.get(comp));
			expressionEnablement = new TBinaryExpression(BinaryOperator.LOGICAL_AND, 
					expressionEnablement, p.getLocalEnable()
				);
		}
		return expressionEnablement;
	}


	private void setType() {
		type = TEnumType.BOOLEAN;
	}

	public String temporary() {
		return toString() + "_" + TogetherSyntax.temporary;
	}
	
	private void setName() {
		name = TogetherSyntax.interaction + "_" +
				connector.getName();
	}
	
	public int getId() {
		return id; 
	}
	
	public int getSize() {
		return size; 
	}
	
	public List<Component> getComponents() {
		return components; 
	}
	
	public Port getPort(Component comp) {
		return mapCompPort.get(comp);
	}
	
	public Connector getConnector() {
		return connector;
	}

	
}
