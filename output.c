//Variables of component timer
int var_timer_t;
int var_timer_n;

//Variables of component light
int var_light_m;

//State of component timer
int timer_currentState;

//State of component light
int light_currentState;

//Ports of component timer
//   le => port_local_enable
//   ie => port_inter_enable
//   s => port_selected
wire boolean port_le_timer_timer;
wire boolean port_ie_timer_timer;
boolean port_s_timer_timer;
wire boolean port_le_timer_done;
wire boolean port_ie_timer_done;
boolean port_s_timer_done;

//Ports of component light
//   le => port_local_enable
//   ie => port_inter_enable
//   s => port_selected
wire boolean port_le_light_done;
wire boolean port_ie_light_done;
boolean port_s_light_done;

//Interactions
wire boolean interactions_enablement[2];
wire boolean interactions_tmp[2];

//Priorities
wire boolean priority[2][2] = {{false, false}, {true, false}};

const int    state_timer_s1 = 0;;

const int    state_light_red = 2;;
const int    state_light_yellow = 3;;
const int    state_light_green = 1;;

@do_together{
   var_timer_t = 0;var_timer_n = 10;
   timer_currentState = 0;
   port_s_timer_timer = false;
   port_s_timer_done = false;

   var_light_m = 5;
   light_currentState = 1;
   port_s_light_done = false;


}
while( true ) {
   @do_together{
      //port selected are delayed versions of port interaction enables.
      port_s_timer_timer = port_ie_timer_timer;
      port_s_timer_done = port_ie_timer_done;

      port_s_light_done = port_ie_light_done;

   if(((timer_currentState) == (0)) && (port_s_timer_timer)) {
         timer_currentState = 0;
   } else {
         if(((timer_currentState) == (0)) && (port_s_timer_done)) {
         timer_currentState = 0;
   } else {
         timer_currentState = timer_currentState;
   }
   }
   if(((light_currentState) == (2)) && (port_s_light_done)) {
         light_currentState = 3;
   } else {
         light_currentState = light_currentState;
   }   if(((light_currentState) == (3)) && (port_s_light_done)) {
         light_currentState = 1;
   } else {
         light_currentState = light_currentState;
   }   if(((light_currentState) == (1)) && (port_s_light_done)) {
         light_currentState = 2;
   } else {
         light_currentState = light_currentState;
   }
   }
}
