// variables for timer component  
int var_t; 
int var_n;

// state of timer
int state_timer;

// variables for traffic
int var_m;

// state for traffic
int state_traffic;

// ports for timer
// TODO wire by Mohamad Noureddine.
// porte: port enable
// portt: port transition
// porti: port interaction 
wire boolean porte_timer_done; 
wire boolean porti_timer_done; 
boolean portt_timer_done; 


wire boolean porte_timer_timer; 
wire boolean porti_timer_timer; 
boolean portt_timer_timer; 

// ports for traffic
wire boolean porte_traffic_done; 
wire boolean porti_traffic_done; 
boolean portt_traffic_done; 


// interactions
wire boolean inter_timer;
wire boolean inter_done;

// priorities
int inter_timer_prio;
int inter_done_prio;



// intial values
const int s1 = 0;
const int green = 0; 
const int red = 1; 
const int yellow = 2;  
@do_together {
	var_t = 0;
	var_n = 5;
	var_m = 5; 


	state_timer = s1; 
	state_traffic = green;

	portt_timer_done = false; 
	portt_timer_timer = false;
	portt_traffic_done = false;

	inter_timer_prio = 0; 
	inter_done_prio = 1; 
}

while(true) {
    @do_together {
	    // transition enables are delayed versions of interaction enables. 
	    portt_timer_done = porti_timer_done; 
	    portt_timer_timer = porti_timer_timer;
	    portt_traffic_done = porti_traffic_done;

		// next state function for var_t
		if(state_time == s1) {
		    if((var_t < var_n) && portt_timer_done) {
	            var_t = var_t + 1; 
			}
			else {
				if(var_t == var_n && portt_timer_timer) {
				    var_t = 0;
				}
				else {
					var_t = var_t; 
				}
			}
		}
		else {
		    var_t = var_t; 
		}
	}

	// TODO other variables and states


	// port enablement
	porte_timer_done = (state_timer == s2) && (var_t == var_n) && (!portt_timer_done);  // ADD CONSTRAINTS FOR OTHER PORTS TRANSITIONS FOR PARANOID
	porte_timer_timer = (state_timer == s2) && (var_t < var_n) && (!portt_timer_timer); // ADD CONSTRAINTS FOR OTHER PORTS TRANSITIONS FOR PARANOID

	porte_traffic_done = ((state_traffic == yellow) || (state_traffic == green) || (state_traffic == red)) && (!portt_traffic_done);
   

    // intermediary interaction enables
    wire boolean inter_timer_tmp = true  // guard of the interaction
	            && porte_timer_timer; // port  
   
    wire boolean inter_done_tmp = true // guard of the interaction
	            && porte_timer_done // first port
				&& porte_traffic_done; // second port
    
	// resolve priority (LATER EXECUTE CONCURRENT INTERACTIONS -- NOT CONFLICT)
	
     if(inter_done_tmp) {
		 // for a \in interaction - {me} : ! a OR prio(me) > prio(a) OR ( prio(a) = prio(me) && selected(me))
		 inter_done = !inter_timer || inter_timer_prio > inter_done_prio || (inter_timer_prio == inter_done_prio && inter_done_selected); // inter_done_selected comes for a nearest index encoder     
	 }
	 else {
	     inter_done = false; 
	}
	if(inter_timer_tmp) {
		 inter_timer = !inter_done || inter_done_prio > inter_timer_prio || (inter_done_prio == inter_timer_prio && inter_done_selected); // inter_done_selected comes for a nearest index encoder     
	}
	else {
		inter_timer = false; 
	}

}

