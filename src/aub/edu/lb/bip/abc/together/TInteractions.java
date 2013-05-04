package aub.edu.lb.bip.abc.together;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.TArrayVariable;
import aub.edu.lb.bip.abc.expression.TCompositeAction;

import ujf.verimag.bip.Core.Interactions.Connector;

public class TInteractions extends TArrayVariable {	
	private List<TInteraction> tInteractions; 
	private TCompound tCompound; 
	private TArrayVariable tInteractionsTMP; 
	private Map<Connector, TInteraction> mapInteractions = new HashMap<Connector, TInteraction>(); 
	
	private int size; 
	
	public TInteractions(TCompound tCompound) {
		super(TogetherSyntax.interactions, TEnumType.ARRAY_WIRE_BOOLEAN, 
				tCompound.getCompoundType().getConnector().size());
		this.tCompound = tCompound; 
		size = tCompound.getCompoundType().getConnector().size();
		
		tInteractions = new ArrayList<TInteraction>(size);
		for(Connector connector: tCompound.getCompoundType().getConnector()) {
			TInteraction tInteraction = new TInteraction(connector, tCompound);
			mapInteractions.put(connector, tInteraction);
			tInteractions.add(tInteraction); 
		}

		tInteractionsTMP = new TArrayVariable(TogetherSyntax.interactions_tmp,
				TEnumType.ARRAY_WIRE_BOOLEAN, size);		
	}
	
	public TCompositeAction getIntermediateInteractionEnablement() {
		TCompositeAction action = new TCompositeAction();
		for(TInteraction tInteraction: mapInteractions.values()) {
			action.getContents().add(this.set(tInteraction.getExpressionEnablement(), tInteraction.getId()));
		}
		return action; 
	}

	public TCompound getTCompound() {
		return tCompound;
	}
	
	public TArrayVariable getTInteractionsTMP() {
		return tInteractionsTMP; 
	}
	
	public TInteraction getTInteraction(Connector con) {
		return mapInteractions.get(con);
	}

	public int size() {
		return size;
	}
	
	
	

}
