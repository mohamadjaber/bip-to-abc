package aub.edu.lb.bip.abc.together;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TArrayVariable;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TNamedElement;

import ujf.verimag.bip.Core.Interactions.Connector;

public class TInteractions extends TArrayVariable {	
	private List<TInteraction> tInteractions; 
	private TCompound tCompound; 
	private TArrayVariable tInteractionsFirstEnable; 
	private TArrayVariable tInteractionsFilterPriority; 

	private Map<Connector, TInteraction> mapInteractions = new HashMap<Connector, TInteraction>(); 
	
	private int size; 
	
	public TInteractions(TCompound tCompound) {
		super(TogetherSyntax.interactions, TEnumType.ARRAY_WIRE_BOOLEAN, 
				new TNamedElement("" + tCompound.getCompoundType().getConnector().size()));
		this.tCompound = tCompound; 
		size = tCompound.getCompoundType().getConnector().size();
		
		tInteractions = new ArrayList<TInteraction>(size);
		TInteraction.constInteractionID = 0; 
		for(Connector connector: tCompound.getCompoundType().getConnector()) {
			TInteraction tInteraction = new TInteraction(connector, tCompound);
			mapInteractions.put(connector, tInteraction);
			tInteractions.add(tInteraction); 
		}

		tInteractionsFirstEnable = new TArrayVariable(TogetherSyntax.interactions_first_enable,
				TEnumType.ARRAY_WIRE_BOOLEAN, new TNamedElement("" + size));
		
		tInteractionsFilterPriority = new TArrayVariable(TogetherSyntax.interactions_filtered_priority,
				TEnumType.ARRAY_WIRE_BOOLEAN, new TNamedElement("" + size));	
	}
	
	public TCompositeAction getFirstInteractionEnablement() {
		TCompositeAction action = new TCompositeAction();
		for(TInteraction tInteraction: mapInteractions.values()) {
			TArrayVariable arrayVariable = new TArrayVariable(tInteractionsFirstEnable.getName(), tInteractionsFirstEnable.getType(), new TNamedElement("" + tInteraction.getId()));
			action.getContents().add(arrayVariable.set(tInteraction.getExpressionEnablement()));
		}
		return action; 
	}

	public TCompound getTCompound() {
		return tCompound;
	}
	
	public TArrayVariable getTInteractionsFirstEnable() {
		return tInteractionsFirstEnable; 
	}
	
	public List<TInteraction> getTInteractions() {
		return tInteractions; 
	}
	
	public TArrayVariable getTInteractionsFilterPriority() {
		return tInteractionsFilterPriority; 
	}
	
	public TInteraction getTInteraction(Connector con) {
		return mapInteractions.get(con);
	}

	public int size() {
		return size;
	}
}
