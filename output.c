int var_timer_t;
int var_timer_n;
int var_light_m;
int timer_currentState;
int light_currentState;
wire boolean port_le_timer_done;
wire boolean port_ie_timer_done;
boolean port_s_timer_done;
wire boolean port_le_timer_timer;
wire boolean port_ie_timer_timer;
boolean port_s_timer_timer;
wire boolean port_le_light_done;
wire boolean port_ie_light_done;
boolean port_s_light_done;
wire boolean interactions_enablement;
wire boolean priority;
const int state_timer_s1 = 0;
const int state_light_green = 1;
const int state_light_red = 2;
const int state_light_yellow = 3;
@do_together{
  port_s_timer_done = false;
  port_s_timer_timer = false;
  var_timer_t = 0var_timer_n = 10
  timer_currentState = 0;
  port_s_light_done = false;
  var_light_m = 5
  light_currentState = 1;
  priority[0][0] = false;
  priority[0][1] = false;
  priority[1][0] = true;
  priority[1][1] = false;
}
while(true){
  @do_together{
    port_s_timer_done = port_ie_timer_done;
    port_s_timer_timer = port_ie_timer_timer;
    port_s_light_done = port_ie_light_done;
    if(((timer_currentState) == (0)) && (port_s_timer_timer)) {
      timer_currentState = 0;
    }
    else{
      if(((timer_currentState) == (0)) && (port_s_timer_done)) {
        timer_currentState = 0;
      }
      else{
        timer_currentState = timer_currentState;
      }
    }
    if(((timer_currentState) == (state_timer_s1)) && (port_s_timer_timer)) {
      var_timer_t = var_timer_t;
    }
    else{
      if(((timer_currentState) == (state_timer_s1)) && (port_s_timer_done)) {
        var_timer_t = var_timer_t;
      }
      else{
        var_timer_t = var_timer_t;
      }
    }
    if(null) {
    }
    else{
    }
    if(((light_currentState) == (1)) && (port_s_light_done)) {
      light_currentState = 2;
    }
    else{
      light_currentState = light_currentState;
    }
    if(((light_currentState) == (2)) && (port_s_light_done)) {
      light_currentState = 3;
    }
    else{
      light_currentState = light_currentState;
    }
    if(((light_currentState) == (3)) && (port_s_light_done)) {
      light_currentState = 1;
    }
    else{
      light_currentState = light_currentState;
    }
    if(((light_currentState) == (state_light_green)) && (port_s_light_done)) {
      var_light_m = var_light_m;
    }
    else{
      if(((light_currentState) == (state_light_red)) && (port_s_light_done)) {
        var_light_m = var_light_m;
      }
      else{
        if(((light_currentState) == (state_light_yellow)) && (port_s_light_done)) {
          var_light_m = var_light_m;
        }
        else{
          var_light_m = var_light_m;
        }
      }
    }
    port_le_timer_done = ((false) || ((state_timer_s1) && (var_timer_t==var_timer_n))) && ((! port_s_timer_done) );
    port_le_timer_timer = ((false) || ((state_timer_s1) && (var_timer_t<var_timer_n))) && ((! port_s_timer_timer) );
    port_le_light_done = ((((false) || ((state_light_green) && (true))) || ((state_light_red) && (true))) || ((state_light_yellow) && (true))) && ((! port_s_light_done) );
    interactions_enablement[0] = (true) && (port_ie_timer_timer);
    interactions_enablement[1] = ((true) && (port_ie_timer_done)) && (port_ie_light_done);
    filter_Interaction(interactions_tmp, interactions_enablement, priority);
    port_ie_timer_done = (false) || (interaction_c2);
    port_ie_timer_timer = (false) || (interaction_c1);
    port_ie_light_done = (false) || (interaction_c2);
  }
}
