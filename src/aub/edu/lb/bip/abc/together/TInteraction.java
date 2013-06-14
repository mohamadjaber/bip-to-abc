package aub.edu.lb.bip.abc.together;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Map;


import aub.edu.lb.bip.abc.api.Parser;
import aub.edu.lb.bip.abc.api.TEnumType;
import aub.edu.lb.bip.abc.api.TogetherSyntax;
import aub.edu.lb.bip.abc.expression.T2DArrayVariable;
import aub.edu.lb.bip.abc.expression.TArrayVariable;
import aub.edu.lb.bip.abc.expression.TAssignmentAction;
import aub.edu.lb.bip.abc.expression.TBinaryExpression;
import aub.edu.lb.bip.abc.expression.TExpression;
import aub.edu.lb.bip.abc.expression.TNamedElement;
import aub.edu.lb.bip.abc.expression.TUnaryExpression;
import aub.edu.lb.bip.abc.expression.TVariable;

import ujf.verimag.bip.Core.ActionLanguage.Expressions.BinaryOperator;
import ujf.verimag.bip.Core.ActionLanguage.Expressions.UnaryOperator;
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

	//interactions_filter_priority[id] = interaction_first_enable[id] /\ (\forall_{j \neq id}  interactions_first_enable[j] => !priority[id][j])
	public TAssignmentAction getFilterInteractionPriority() {
		TInteractions tInteractions = tCompound.getTInteractions();
		TPriorities tPriorities = tCompound.getTPriorities(); 
		TArrayVariable tInteractionFilterPriority = tInteractions.getTInteractionsFilterPriority(); 
		TArrayVariable tInteractionsFirstEnable = tInteractions.getTInteractionsFirstEnable(); 
		TArrayVariable assignedTarget = new TArrayVariable(tInteractionFilterPriority.getName(), tInteractionFilterPriority.getType(), new TNamedElement("" + this.id));
		TExpression expression = new TNamedElement(TogetherSyntax.true_condition);
		for(int j = 0; j < tInteractions.size(); j++) {
			if(id != j) {
				TExpression notInteractionFirstEnable = new TUnaryExpression(UnaryOperator.LOGICAL_NOT, 
						new TArrayVariable(tInteractionsFirstEnable.getName(), tInteractionsFirstEnable.getType(), new TNamedElement("" + j)));
				
				TExpression notPriorityIdJ = new TUnaryExpression(
						UnaryOperator.LOGICAL_NOT, 
						new T2DArrayVariable(tPriorities.getName(), tPriorities.getType(), 
								new TNamedElement("" + this.id),
								new TNamedElement("" + j)));

				expression = new TBinaryExpression(
						BinaryOperator.LOGICAL_AND,
						expression,
						new TBinaryExpression(
							BinaryOperator.LOGICAL_OR,
							notInteractionFirstEnable, notPriorityIdJ
						)
					);
			}
		}
		expression = new TBinaryExpression(BinaryOperator.LOGICAL_AND,
				new TArrayVariable(tInteractionsFirstEnable.getName(), tInteractionsFirstEnable.getType(), new TNamedElement("" + this.id)),
				expression
				);
		return assignedTarget.set(expression);
	}
	
    /** IF withpriority is equal to true THEN
	 * interactions_enablement[id] = interactions_filtered_priority[id] && (selecter == id || ( ! interactions_filtered_priority[selecter]  && \forall_{j \neq id} interactions_filtered_priority[j]  => j > id))
     * Else 
     * interactions_enablement[id] = interactions_first_enable[id] && (selecter == id || ( ! interactions_first_enable[selecter]  && \forall_{j \neq id} interactions_first_enable[j]  => j > id))
	 */
	public TAssignmentAction getSelectOneInteraction(boolean withPriority) {
		TInteractions tInteractions = tCompound.getTInteractions();
		TArrayVariable tInteractionFilterPriority = null;
		if(withPriority) {
			tInteractionFilterPriority = tInteractions.getTInteractionsFilterPriority(); 
		}
		else {
			tInteractionFilterPriority = tInteractions.getTInteractionsFirstEnable();
		}
		TArrayVariable assignedTarget = new TArrayVariable(tInteractions.getName(), tInteractions.getType(), new TNamedElement("" + this.id));
		TExpression expression = new TNamedElement(TogetherSyntax.true_condition);
		for(int j = 0; j < tInteractions.size(); j++) {
			if(id != j) {
				TExpression notInteractionFilterPriority = new TUnaryExpression(UnaryOperator.LOGICAL_NOT, 
						new TArrayVariable(tInteractionFilterPriority.getName(), tInteractionFilterPriority.getType(), new TNamedElement("" + j)));
				
				TExpression nearestSelecter = new TBinaryExpression(
						BinaryOperator.GREATER_THAN,
						new TVariable("" + j, TEnumType.INT),
						new TVariable("" + id, TEnumType.INT)
					);

				expression = new TBinaryExpression(
						BinaryOperator.LOGICAL_AND,
						expression,
						new TBinaryExpression(
							BinaryOperator.LOGICAL_OR,
							notInteractionFilterPriority, nearestSelecter
						)
					);
			}
		}
		
		expression = new TBinaryExpression(BinaryOperator.LOGICAL_AND,
				new TUnaryExpression(UnaryOperator.LOGICAL_NOT,
						new TArrayVariable(
								tInteractionFilterPriority.getName(), 
								tInteractionFilterPriority.getType(), 
								tCompound.getSelecter())),
				expression);
						
		
		expression = new TBinaryExpression(BinaryOperator.LOGICAL_OR,
				new TBinaryExpression(
						BinaryOperator.EQUALITY,
						tCompound.getSelecter(),
						new TVariable("" + id , TEnumType.INT)
					), 
					expression
				);
		
		
		expression = new TBinaryExpression(BinaryOperator.LOGICAL_AND,
				new TArrayVariable(tInteractionFilterPriority.getName(), tInteractionFilterPriority.getType(), 
						new TNamedElement("" + this.id)),
				expression
				);
		return assignedTarget.set(expression);
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
