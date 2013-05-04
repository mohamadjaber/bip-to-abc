package aub.edu.lb.bip.abc.together;



import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Priorities.PriorityRule;
import ujf.verimag.bip.Core.Interactions.Interaction;
import ujf.verimag.bip.Core.Interactions.PartElementReference;

import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.T2DArrayVariable;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TCompositeAction;
import aub.edu.lb.bip.abc.expression.TExpression;

public class TPriorities extends T2DArrayVariable {
	private TCompound tCompound; 
	private TExpression[][] priorityValues; 
	
	
	private int nbOfInteractions; 
	
	public TPriorities(TCompound tCompound) {
		super(TogetherSyntax.priority, TEnumType.TwoD_ARRAY_WIRE_BOOLEAN, 
				tCompound.getCompoundType().getConnector().size(), 
				tCompound.getCompoundType().getConnector().size());
		
		this.tCompound = tCompound;
		
		nbOfInteractions = tCompound.getCompoundType().getConnector().size();
		priorityValues = new TExpression[nbOfInteractions][nbOfInteractions];
		
		setPriorityValues();
	
	}
	
	
	
	
	private void setPriorityValues() {
		for(int i = 0; i < nbOfInteractions; i++) {
			for(int j = 0; j < nbOfInteractions; j++) {
				priorityValues[i][j] = new TNamedElement(TogetherSyntax.false_condition);
			}
		}
		
		for(Connector con: tCompound.getCompoundType().getConnector()) {
			for(PriorityRule priority: tCompound.getCompoundType().getPriorityRule()) {
				Connector greater = (Connector)((PartElementReference) ((Interaction) priority.getGreater()).getConnector()).getTargetPart();
				if(greater.equals(con)) {
					Connector lower = (Connector)((PartElementReference) ((Interaction) priority.getLower()).getConnector()).getTargetPart();
					int idLower = tCompound.getTInteractions().getTInteraction(lower).getId();
					int idGreater =  tCompound.getTInteractions().getTInteraction(con).getId();
					priorityValues[idGreater][idLower] = new TNamedElement(TogetherSyntax.true_condition);
				}
			}
		}		
	}

	public TCompound getTCompound() {
		return tCompound; 
	}
	
	public TCompositeAction initialize() {
		TCompositeAction action = new TCompositeAction();
		for(int i = 0; i < nbOfInteractions; i++) {
			for(int j = 0; j < nbOfInteractions; j++) {
				action.getContents().add(new TAssignmentAction(new TNamedElement(this + "["+i+"]["+j+"]"), priorityValues[i][j], false));
			}
		}
		return action;
	}
	
	

}
