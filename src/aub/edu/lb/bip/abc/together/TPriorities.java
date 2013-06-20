package aub.edu.lb.bip.abc.together;



import java.util.LinkedList;
import java.util.List;

import ujf.verimag.bip.Core.Interactions.Connector;
import ujf.verimag.bip.Core.Priorities.PriorityRule;
import ujf.verimag.bip.Core.Interactions.Interaction;
import ujf.verimag.bip.Core.Interactions.PartElementReference;


public class TPriorities  {

	
	
	/**
	 * Return the ids of the interactions that have more priority than than interaction 
	 * given as input.
	 */
	public static List<Integer> morePriority(TInteraction tInteraction) {
		List<Integer> idInteraction = new LinkedList<Integer>();
		TCompound tCompound = tInteraction.getTCompound();
		for(PriorityRule priority: tCompound.getCompoundType().getPriorityRule()) {
			Connector greater = (Connector)((PartElementReference) ((Interaction) priority.getGreater()).getConnector()).getTargetPart();
			Connector lower = (Connector)((PartElementReference) ((Interaction) priority.getLower()).getConnector()).getTargetPart();

			if(lower.equals(tInteraction.getConnector())) {
				int idGreater =  tCompound.getTInteractions().getTInteraction(greater).getId();
				idInteraction.add(idGreater);
			}
		}
		return idInteraction;
	}
	
	
	
}
