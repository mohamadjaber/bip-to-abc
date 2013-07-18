#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define wire
#define boolean bool
int main() {
  int __cycle_num__ = 0;
  int __sed = time(NULL);
  srand (__sed);
cout<< "The sed is " << __sed << endl;
boolean var_plug1_trigger;
  boolean var_plug1_trigger_nsf;
int var_plug1_decidedValueS;
  int var_plug1_decidedValueS_nsf;
int var_plug1_proposedValue;
  int var_plug1_proposedValue_nsf;
int var_plug1_serverId;
  int var_plug1_serverId_nsf;
int var_plug1_decidedValue;
  int var_plug1_decidedValue_nsf;
const int var_plug1_id = 1;
boolean var_plug2_trigger;
  boolean var_plug2_trigger_nsf;
int var_plug2_decidedValueS;
  int var_plug2_decidedValueS_nsf;
int var_plug2_proposedValue;
  int var_plug2_proposedValue_nsf;
int var_plug2_serverId;
  int var_plug2_serverId_nsf;
int var_plug2_decidedValue;
  int var_plug2_decidedValue_nsf;
const int var_plug2_id = 2;
boolean var_plug3_trigger;
  boolean var_plug3_trigger_nsf;
int var_plug3_decidedValueS;
  int var_plug3_decidedValueS_nsf;
int var_plug3_proposedValue;
  int var_plug3_proposedValue_nsf;
int var_plug3_serverId;
  int var_plug3_serverId_nsf;
int var_plug3_decidedValue;
  int var_plug3_decidedValue_nsf;
const int var_plug3_id = 3;
boolean var_plug4_trigger;
  boolean var_plug4_trigger_nsf;
int var_plug4_decidedValueS;
  int var_plug4_decidedValueS_nsf;
int var_plug4_proposedValue;
  int var_plug4_proposedValue_nsf;
int var_plug4_serverId;
  int var_plug4_serverId_nsf;
int var_plug4_decidedValue;
  int var_plug4_decidedValue_nsf;
const int var_plug4_id = 4;
int var_plugC1_serverId;
  int var_plugC1_serverId_nsf;
boolean var_plugC1_server1;
  boolean var_plugC1_server1_nsf;
int var_plugC1_decidedValue;
  int var_plugC1_decidedValue_nsf;
boolean var_plugC1_server2;
  boolean var_plugC1_server2_nsf;
int var_plugC1_clientId;
  int var_plugC1_clientId_nsf;
int var_plugC1_proposedValue;
  int var_plugC1_proposedValue_nsf;
const int var_plugC1_id = 1;
int var_plugC2_serverId;
  int var_plugC2_serverId_nsf;
boolean var_plugC2_server1;
  boolean var_plugC2_server1_nsf;
int var_plugC2_decidedValue;
  int var_plugC2_decidedValue_nsf;
boolean var_plugC2_server2;
  boolean var_plugC2_server2_nsf;
int var_plugC2_clientId;
  int var_plugC2_clientId_nsf;
int var_plugC2_proposedValue;
  int var_plugC2_proposedValue_nsf;
const int var_plugC2_id = 2;
int var_plugC3_serverId;
  int var_plugC3_serverId_nsf;
boolean var_plugC3_server1;
  boolean var_plugC3_server1_nsf;
int var_plugC3_decidedValue;
  int var_plugC3_decidedValue_nsf;
boolean var_plugC3_server2;
  boolean var_plugC3_server2_nsf;
int var_plugC3_clientId;
  int var_plugC3_clientId_nsf;
int var_plugC3_proposedValue;
  int var_plugC3_proposedValue_nsf;
const int var_plugC3_id = 3;
int var_plugC4_serverId;
  int var_plugC4_serverId_nsf;
boolean var_plugC4_server1;
  boolean var_plugC4_server1_nsf;
int var_plugC4_decidedValue;
  int var_plugC4_decidedValue_nsf;
boolean var_plugC4_server2;
  boolean var_plugC4_server2_nsf;
int var_plugC4_clientId;
  int var_plugC4_clientId_nsf;
int var_plugC4_proposedValue;
  int var_plugC4_proposedValue_nsf;
const int var_plugC4_id = 4;
int var_serverC1_clientIdSend;
  int var_serverC1_clientIdSend_nsf;
int var_serverC1_decided;
  int var_serverC1_decided_nsf;
int var_serverC1_proposed;
  int var_serverC1_proposed_nsf;
int var_serverC1_serverId;
  int var_serverC1_serverId_nsf;
int var_serverC1_clientIdRcv;
  int var_serverC1_clientIdRcv_nsf;
const int var_serverC1_id = 1;
int var_serverC2_clientIdSend;
  int var_serverC2_clientIdSend_nsf;
int var_serverC2_decided;
  int var_serverC2_decided_nsf;
int var_serverC2_proposed;
  int var_serverC2_proposed_nsf;
int var_serverC2_serverId;
  int var_serverC2_serverId_nsf;
int var_serverC2_clientIdRcv;
  int var_serverC2_clientIdRcv_nsf;
const int var_serverC2_id = 2;
int var_s1_ClientId;
  int var_s1_ClientId_nsf;
int var_s1_decidedValue;
  int var_s1_decidedValue_nsf;
int var_s1_serverId;
  int var_s1_serverId_nsf;
int var_s1_proposedValue;
  int var_s1_proposedValue_nsf;
const int var_s1_id = 1;
int var_s2_ClientId;
  int var_s2_ClientId_nsf;
int var_s2_decidedValue;
  int var_s2_decidedValue_nsf;
int var_s2_serverId;
  int var_s2_serverId_nsf;
int var_s2_proposedValue;
  int var_s2_proposedValue_nsf;
const int var_s2_id = 2;
wire int wire_selector;
int plug1_currentState;
  int plug1_currentState_nsf;
int plug2_currentState;
  int plug2_currentState_nsf;
int plug3_currentState;
  int plug3_currentState_nsf;
int plug4_currentState;
  int plug4_currentState_nsf;
int plugC1_currentState;
  int plugC1_currentState_nsf;
int plugC2_currentState;
  int plugC2_currentState_nsf;
int plugC3_currentState;
  int plugC3_currentState_nsf;
int plugC4_currentState;
  int plugC4_currentState_nsf;
int serverC1_currentState;
  int serverC1_currentState_nsf;
int serverC2_currentState;
  int serverC2_currentState_nsf;
int s1_currentState;
  int s1_currentState_nsf;
int s2_currentState;
  int s2_currentState_nsf;
wire boolean wire_port_loc_en_plug1_sendToClient;
wire boolean wire_port_en_plug1_sendToClient;
wire boolean wire_port_loc_en_plug1_singleton1;
wire boolean wire_port_en_plug1_singleton1;
wire boolean wire_port_loc_en_plug1_sendToChannel;
wire boolean wire_port_en_plug1_sendToChannel;
wire boolean wire_port_loc_en_plug1_singleton2;
wire boolean wire_port_en_plug1_singleton2;
wire boolean wire_port_loc_en_plug1_switchB;
wire boolean wire_port_en_plug1_switchB;
wire boolean wire_port_loc_en_plug1_recieveFromServer;
wire boolean wire_port_en_plug1_recieveFromServer;
wire boolean wire_port_loc_en_plug1_ticker;
wire boolean wire_port_en_plug1_ticker;
wire boolean wire_port_loc_en_plug2_sendToClient;
wire boolean wire_port_en_plug2_sendToClient;
wire boolean wire_port_loc_en_plug2_singleton1;
wire boolean wire_port_en_plug2_singleton1;
wire boolean wire_port_loc_en_plug2_sendToChannel;
wire boolean wire_port_en_plug2_sendToChannel;
wire boolean wire_port_loc_en_plug2_singleton2;
wire boolean wire_port_en_plug2_singleton2;
wire boolean wire_port_loc_en_plug2_switchB;
wire boolean wire_port_en_plug2_switchB;
wire boolean wire_port_loc_en_plug2_recieveFromServer;
wire boolean wire_port_en_plug2_recieveFromServer;
wire boolean wire_port_loc_en_plug2_ticker;
wire boolean wire_port_en_plug2_ticker;
wire boolean wire_port_loc_en_plug3_sendToClient;
wire boolean wire_port_en_plug3_sendToClient;
wire boolean wire_port_loc_en_plug3_singleton1;
wire boolean wire_port_en_plug3_singleton1;
wire boolean wire_port_loc_en_plug3_sendToChannel;
wire boolean wire_port_en_plug3_sendToChannel;
wire boolean wire_port_loc_en_plug3_singleton2;
wire boolean wire_port_en_plug3_singleton2;
wire boolean wire_port_loc_en_plug3_switchB;
wire boolean wire_port_en_plug3_switchB;
wire boolean wire_port_loc_en_plug3_recieveFromServer;
wire boolean wire_port_en_plug3_recieveFromServer;
wire boolean wire_port_loc_en_plug3_ticker;
wire boolean wire_port_en_plug3_ticker;
wire boolean wire_port_loc_en_plug4_sendToClient;
wire boolean wire_port_en_plug4_sendToClient;
wire boolean wire_port_loc_en_plug4_singleton1;
wire boolean wire_port_en_plug4_singleton1;
wire boolean wire_port_loc_en_plug4_sendToChannel;
wire boolean wire_port_en_plug4_sendToChannel;
wire boolean wire_port_loc_en_plug4_singleton2;
wire boolean wire_port_en_plug4_singleton2;
wire boolean wire_port_loc_en_plug4_switchB;
wire boolean wire_port_en_plug4_switchB;
wire boolean wire_port_loc_en_plug4_recieveFromServer;
wire boolean wire_port_en_plug4_recieveFromServer;
wire boolean wire_port_loc_en_plug4_ticker;
wire boolean wire_port_en_plug4_ticker;
wire boolean wire_port_loc_en_plugC1_SendS1;
wire boolean wire_port_en_plugC1_SendS1;
wire boolean wire_port_loc_en_plugC1_rcvPlug;
wire boolean wire_port_en_plugC1_rcvPlug;
wire boolean wire_port_loc_en_plugC1_SendS2;
wire boolean wire_port_en_plugC1_SendS2;
wire boolean wire_port_loc_en_plugC1_rcvServer;
wire boolean wire_port_en_plugC1_rcvServer;
wire boolean wire_port_loc_en_plugC1_sendClient;
wire boolean wire_port_en_plugC1_sendClient;
wire boolean wire_port_loc_en_plugC2_SendS1;
wire boolean wire_port_en_plugC2_SendS1;
wire boolean wire_port_loc_en_plugC2_rcvPlug;
wire boolean wire_port_en_plugC2_rcvPlug;
wire boolean wire_port_loc_en_plugC2_SendS2;
wire boolean wire_port_en_plugC2_SendS2;
wire boolean wire_port_loc_en_plugC2_rcvServer;
wire boolean wire_port_en_plugC2_rcvServer;
wire boolean wire_port_loc_en_plugC2_sendClient;
wire boolean wire_port_en_plugC2_sendClient;
wire boolean wire_port_loc_en_plugC3_SendS1;
wire boolean wire_port_en_plugC3_SendS1;
wire boolean wire_port_loc_en_plugC3_rcvPlug;
wire boolean wire_port_en_plugC3_rcvPlug;
wire boolean wire_port_loc_en_plugC3_SendS2;
wire boolean wire_port_en_plugC3_SendS2;
wire boolean wire_port_loc_en_plugC3_rcvServer;
wire boolean wire_port_en_plugC3_rcvServer;
wire boolean wire_port_loc_en_plugC3_sendClient;
wire boolean wire_port_en_plugC3_sendClient;
wire boolean wire_port_loc_en_plugC4_SendS1;
wire boolean wire_port_en_plugC4_SendS1;
wire boolean wire_port_loc_en_plugC4_rcvPlug;
wire boolean wire_port_en_plugC4_rcvPlug;
wire boolean wire_port_loc_en_plugC4_SendS2;
wire boolean wire_port_en_plugC4_SendS2;
wire boolean wire_port_loc_en_plugC4_rcvServer;
wire boolean wire_port_en_plugC4_rcvServer;
wire boolean wire_port_loc_en_plugC4_sendClient;
wire boolean wire_port_en_plugC4_sendClient;
wire boolean wire_port_loc_en_serverC1_rcvServer;
wire boolean wire_port_en_serverC1_rcvServer;
wire boolean wire_port_loc_en_serverC1_sendPlug;
wire boolean wire_port_en_serverC1_sendPlug;
wire boolean wire_port_loc_en_serverC1_loose;
wire boolean wire_port_en_serverC1_loose;
wire boolean wire_port_loc_en_serverC1_msglost;
wire boolean wire_port_en_serverC1_msglost;
wire boolean wire_port_loc_en_serverC1_rcvPlugC;
wire boolean wire_port_en_serverC1_rcvPlugC;
wire boolean wire_port_loc_en_serverC1_sendServer;
wire boolean wire_port_en_serverC1_sendServer;
wire boolean wire_port_loc_en_serverC2_rcvServer;
wire boolean wire_port_en_serverC2_rcvServer;
wire boolean wire_port_loc_en_serverC2_sendPlug;
wire boolean wire_port_en_serverC2_sendPlug;
wire boolean wire_port_loc_en_serverC2_loose;
wire boolean wire_port_en_serverC2_loose;
wire boolean wire_port_loc_en_serverC2_msglost;
wire boolean wire_port_en_serverC2_msglost;
wire boolean wire_port_loc_en_serverC2_rcvPlugC;
wire boolean wire_port_en_serverC2_rcvPlugC;
wire boolean wire_port_loc_en_serverC2_sendServer;
wire boolean wire_port_en_serverC2_sendServer;
wire boolean wire_port_loc_en_s1_RcvFromChannel;
wire boolean wire_port_en_s1_RcvFromChannel;
wire boolean wire_port_loc_en_s1_SendToServerC;
wire boolean wire_port_en_s1_SendToServerC;
wire boolean wire_port_loc_en_s1_singleton2;
wire boolean wire_port_en_s1_singleton2;
wire boolean wire_port_loc_en_s1_singleton1;
wire boolean wire_port_en_s1_singleton1;
wire boolean wire_port_loc_en_s2_RcvFromChannel;
wire boolean wire_port_en_s2_RcvFromChannel;
wire boolean wire_port_loc_en_s2_SendToServerC;
wire boolean wire_port_en_s2_SendToServerC;
wire boolean wire_port_loc_en_s2_singleton2;
wire boolean wire_port_en_s2_singleton2;
wire boolean wire_port_loc_en_s2_singleton1;
wire boolean wire_port_en_s2_singleton1;
wire boolean  interactions_enablement[56];
wire boolean  interactions_first_enable[56];
const int state_plug1_S5 = 4;
const int state_plug1_S3temp = 9;
const int state_plug1_S2 = 1;
const int state_plug1_S6 = 5;
const int state_plug1_S7 = 6;
const int state_plug1_S3 = 2;
const int state_plug1_S6temp = 10;
const int state_plug1_S1 = 0;
const int state_plug1_S5temp = 8;
const int state_plug1_S4 = 3;
const int state_plug1_S8 = 7;
const int state_plug2_S5 = 4;
const int state_plug2_S3temp = 9;
const int state_plug2_S2 = 1;
const int state_plug2_S6 = 5;
const int state_plug2_S7 = 6;
const int state_plug2_S3 = 2;
const int state_plug2_S6temp = 10;
const int state_plug2_S1 = 0;
const int state_plug2_S5temp = 8;
const int state_plug2_S4 = 3;
const int state_plug2_S8 = 7;
const int state_plug3_S5 = 4;
const int state_plug3_S3temp = 9;
const int state_plug3_S2 = 1;
const int state_plug3_S6 = 5;
const int state_plug3_S7 = 6;
const int state_plug3_S3 = 2;
const int state_plug3_S6temp = 10;
const int state_plug3_S1 = 0;
const int state_plug3_S5temp = 8;
const int state_plug3_S4 = 3;
const int state_plug3_S8 = 7;
const int state_plug4_S5 = 4;
const int state_plug4_S3temp = 9;
const int state_plug4_S2 = 1;
const int state_plug4_S6 = 5;
const int state_plug4_S7 = 6;
const int state_plug4_S3 = 2;
const int state_plug4_S6temp = 10;
const int state_plug4_S1 = 0;
const int state_plug4_S5temp = 8;
const int state_plug4_S4 = 3;
const int state_plug4_S8 = 7;
const int state_plugC1_sendServer_rcvFServer = 1;
const int state_plugC1_start_rcvFServer = 0;
const int state_plugC1_start_sendTClient = 2;
const int state_plugC1_sendServer_sendTClient = 3;
const int state_plugC2_sendServer_rcvFServer = 1;
const int state_plugC2_start_rcvFServer = 0;
const int state_plugC2_start_sendTClient = 2;
const int state_plugC2_sendServer_sendTClient = 3;
const int state_plugC3_sendServer_rcvFServer = 1;
const int state_plugC3_start_rcvFServer = 0;
const int state_plugC3_start_sendTClient = 2;
const int state_plugC3_sendServer_sendTClient = 3;
const int state_plugC4_sendServer_rcvFServer = 1;
const int state_plugC4_start_rcvFServer = 0;
const int state_plugC4_start_sendTClient = 2;
const int state_plugC4_sendServer_sendTClient = 3;
const int state_serverC1_sendTServer_sendPlugC = 4;
const int state_serverC1_crash_rcvFServer = 2;
const int state_serverC1_sendTServer_rcvFServer = 1;
const int state_serverC1_rcvPlug_rcvFServer = 0;
const int state_serverC1_rcvPlug_sendPlugC = 3;
const int state_serverC1_crash_sendPlugC = 5;
const int state_serverC2_sendTServer_sendPlugC = 4;
const int state_serverC2_crash_rcvFServer = 2;
const int state_serverC2_sendTServer_rcvFServer = 1;
const int state_serverC2_rcvPlug_rcvFServer = 0;
const int state_serverC2_rcvPlug_sendPlugC = 3;
const int state_serverC2_crash_sendPlugC = 5;
const int state_s1_SEND = 1;
const int state_s1_RECEIVE = 0;
const int state_s1_SEND_TEMP = 2;
const int state_s2_SEND = 1;
const int state_s2_RECEIVE = 0;
const int state_s2_SEND_TEMP = 2;
{
  var_plug1_trigger = false;
  var_plug1_decidedValueS = 0;
  var_plug1_proposedValue = 0;
  var_plug1_serverId = 0;
  var_plug1_decidedValue = 0;
  var_plug2_trigger = false;
  var_plug2_decidedValueS = 0;
  var_plug2_proposedValue = 0;
  var_plug2_serverId = 0;
  var_plug2_decidedValue = 0;
  var_plug3_trigger = false;
  var_plug3_decidedValueS = 0;
  var_plug3_proposedValue = 0;
  var_plug3_serverId = 0;
  var_plug3_decidedValue = 0;
  var_plug4_trigger = false;
  var_plug4_decidedValueS = 0;
  var_plug4_proposedValue = 0;
  var_plug4_serverId = 0;
  var_plug4_decidedValue = 0;
  var_plugC1_serverId = 0;
  var_plugC1_server1 = false;
  var_plugC1_decidedValue = 0;
  var_plugC1_server2 = false;
  var_plugC1_clientId = 0;
  var_plugC1_proposedValue = 0;
  var_plugC2_serverId = 0;
  var_plugC2_server1 = false;
  var_plugC2_decidedValue = 0;
  var_plugC2_server2 = false;
  var_plugC2_clientId = 0;
  var_plugC2_proposedValue = 0;
  var_plugC3_serverId = 0;
  var_plugC3_server1 = false;
  var_plugC3_decidedValue = 0;
  var_plugC3_server2 = false;
  var_plugC3_clientId = 0;
  var_plugC3_proposedValue = 0;
  var_plugC4_serverId = 0;
  var_plugC4_server1 = false;
  var_plugC4_decidedValue = 0;
  var_plugC4_server2 = false;
  var_plugC4_clientId = 0;
  var_plugC4_proposedValue = 0;
  var_serverC1_clientIdSend = 0;
  var_serverC1_decided = 0;
  var_serverC1_proposed = 0;
  var_serverC1_serverId = 0;
  var_serverC1_clientIdRcv = 0;
  var_serverC2_clientIdSend = 0;
  var_serverC2_decided = 0;
  var_serverC2_proposed = 0;
  var_serverC2_serverId = 0;
  var_serverC2_clientIdRcv = 0;
  var_s1_ClientId = 0;
  var_s1_decidedValue = 0;
  var_s1_serverId = 0;
  var_s1_proposedValue = 0;
  var_s2_ClientId = 0;
  var_s2_decidedValue = 0;
  var_s2_serverId = 0;
  var_s2_proposedValue = 0;
}
{
  var_plug1_proposedValue = var_plug1_id; var_plug1_decidedValue = 0; var_plug1_trigger = false; var_plug1_serverId = 0; 
  plug1_currentState = 0;
  var_plug2_proposedValue = var_plug2_id; var_plug2_decidedValue = 0; var_plug2_trigger = false; var_plug2_serverId = 0; 
  plug2_currentState = 0;
  var_plug3_proposedValue = var_plug3_id; var_plug3_decidedValue = 0; var_plug3_trigger = false; var_plug3_serverId = 0; 
  plug3_currentState = 0;
  var_plug4_proposedValue = var_plug4_id; var_plug4_decidedValue = 0; var_plug4_trigger = false; var_plug4_serverId = 0; 
  plug4_currentState = 0;
  var_plugC1_server1 = false; var_plugC1_server2 = false; var_plugC1_clientId = var_plugC1_id; 
  plugC1_currentState = 0;
  var_plugC2_server1 = false; var_plugC2_server2 = false; var_plugC2_clientId = var_plugC2_id; 
  plugC2_currentState = 0;
  var_plugC3_server1 = false; var_plugC3_server2 = false; var_plugC3_clientId = var_plugC3_id; 
  plugC3_currentState = 0;
  var_plugC4_server1 = false; var_plugC4_server2 = false; var_plugC4_clientId = var_plugC4_id; 
  plugC4_currentState = 0;
  var_serverC1_serverId = var_serverC1_id; 
  serverC1_currentState = 0;
  var_serverC2_serverId = var_serverC2_id; 
  serverC2_currentState = 0;
  var_s1_serverId = var_s1_id; var_s1_decidedValue = 0; 
  s1_currentState = 0;
  var_s2_serverId = var_s2_id; var_s2_decidedValue = 0; 
  s2_currentState = 0;
}
  var_s1_serverId_nsf = var_s1_serverId;
  var_plug1_trigger_nsf = var_plug1_trigger;
  var_plug1_serverId_nsf = var_plug1_serverId;
  var_plug4_decidedValueS_nsf = var_plug4_decidedValueS;
  plugC3_currentState_nsf = plugC3_currentState;
  var_plug2_trigger_nsf = var_plug2_trigger;
  var_plugC2_decidedValue_nsf = var_plugC2_decidedValue;
  plug3_currentState_nsf = plug3_currentState;
  var_plugC4_server2_nsf = var_plugC4_server2;
  serverC2_currentState_nsf = serverC2_currentState;
  var_s1_ClientId_nsf = var_s1_ClientId;
  var_plugC4_server1_nsf = var_plugC4_server1;
  var_plugC4_decidedValue_nsf = var_plugC4_decidedValue;
  plugC4_currentState_nsf = plugC4_currentState;
  var_serverC2_serverId_nsf = var_serverC2_serverId;
  var_plug2_decidedValue_nsf = var_plug2_decidedValue;
  var_serverC1_serverId_nsf = var_serverC1_serverId;
  var_plugC4_clientId_nsf = var_plugC4_clientId;
  var_plug4_proposedValue_nsf = var_plug4_proposedValue;
  var_plug1_decidedValue_nsf = var_plug1_decidedValue;
  serverC1_currentState_nsf = serverC1_currentState;
  var_plug3_decidedValueS_nsf = var_plug3_decidedValueS;
  var_plugC3_clientId_nsf = var_plugC3_clientId;
  var_serverC1_proposed_nsf = var_serverC1_proposed;
  var_plugC1_serverId_nsf = var_plugC1_serverId;
  var_serverC2_clientIdRcv_nsf = var_serverC2_clientIdRcv;
  var_plug4_serverId_nsf = var_plug4_serverId;
  var_serverC2_clientIdSend_nsf = var_serverC2_clientIdSend;
  var_plug2_serverId_nsf = var_plug2_serverId;
  var_plugC1_clientId_nsf = var_plugC1_clientId;
  var_plugC2_serverId_nsf = var_plugC2_serverId;
  var_plugC1_decidedValue_nsf = var_plugC1_decidedValue;
  var_s1_proposedValue_nsf = var_s1_proposedValue;
  plug2_currentState_nsf = plug2_currentState;
  var_s2_decidedValue_nsf = var_s2_decidedValue;
  var_plug3_serverId_nsf = var_plug3_serverId;
  var_plugC3_serverId_nsf = var_plugC3_serverId;
  plug1_currentState_nsf = plug1_currentState;
  var_plugC1_server1_nsf = var_plugC1_server1;
  var_plugC4_serverId_nsf = var_plugC4_serverId;
  var_plugC1_server2_nsf = var_plugC1_server2;
  var_s2_serverId_nsf = var_s2_serverId;
  var_plugC1_proposedValue_nsf = var_plugC1_proposedValue;
  var_plug1_proposedValue_nsf = var_plug1_proposedValue;
  var_plug2_proposedValue_nsf = var_plug2_proposedValue;
  var_plugC3_proposedValue_nsf = var_plugC3_proposedValue;
  var_plug3_trigger_nsf = var_plug3_trigger;
  s1_currentState_nsf = s1_currentState;
  var_plugC4_proposedValue_nsf = var_plugC4_proposedValue;
  var_s1_decidedValue_nsf = var_s1_decidedValue;
  var_plugC3_server1_nsf = var_plugC3_server1;
  var_plugC2_server2_nsf = var_plugC2_server2;
  var_plugC3_server2_nsf = var_plugC3_server2;
  var_plugC2_server1_nsf = var_plugC2_server1;
  plugC1_currentState_nsf = plugC1_currentState;
  var_plug3_decidedValue_nsf = var_plug3_decidedValue;
  var_plug2_decidedValueS_nsf = var_plug2_decidedValueS;
  var_serverC2_proposed_nsf = var_serverC2_proposed;
  var_serverC1_decided_nsf = var_serverC1_decided;
  s2_currentState_nsf = s2_currentState;
  var_plugC3_decidedValue_nsf = var_plugC3_decidedValue;
  var_plug4_decidedValue_nsf = var_plug4_decidedValue;
  var_plugC2_proposedValue_nsf = var_plugC2_proposedValue;
  var_s2_ClientId_nsf = var_s2_ClientId;
  var_serverC1_clientIdSend_nsf = var_serverC1_clientIdSend;
  plug4_currentState_nsf = plug4_currentState;
  var_s2_proposedValue_nsf = var_s2_proposedValue;
  var_plug3_proposedValue_nsf = var_plug3_proposedValue;
  var_serverC2_decided_nsf = var_serverC2_decided;
  var_plug1_decidedValueS_nsf = var_plug1_decidedValueS;
  plugC2_currentState_nsf = plugC2_currentState;
  var_plug4_trigger_nsf = var_plug4_trigger;
  var_plugC2_clientId_nsf = var_plugC2_clientId;
  var_serverC1_clientIdRcv_nsf = var_serverC1_clientIdRcv;
while(true) {
  wire_selector = rand() % 56;
{
    wire_port_loc_en_plug1_sendToClient = (false || ((state_plug1_S5 == plug1_currentState) && var_plug1_trigger));
    wire_port_loc_en_plug1_singleton1 = (((false || (state_plug1_S3temp == plug1_currentState)) || (state_plug1_S6temp == plug1_currentState)) || ((state_plug1_S5temp == plug1_currentState) && var_plug1_decidedValue != var_plug1_decidedValueS));
    wire_port_loc_en_plug1_sendToChannel = (false || (state_plug1_S1 == plug1_currentState));
    wire_port_loc_en_plug1_singleton2 = (false || ((state_plug1_S5temp == plug1_currentState) && var_plug1_decidedValue == var_plug1_decidedValueS));
    wire_port_loc_en_plug1_switchB = ((false || (state_plug1_S6 == plug1_currentState)) || ((state_plug1_S5 == plug1_currentState) && !var_plug1_trigger));
    wire_port_loc_en_plug1_recieveFromServer = (((false || (state_plug1_S2 == plug1_currentState)) || (state_plug1_S4 == plug1_currentState)) || (state_plug1_S3 == plug1_currentState));
    wire_port_loc_en_plug1_ticker = (((((false || (state_plug1_S2 == plug1_currentState)) || (state_plug1_S3 == plug1_currentState)) || (state_plug1_S7 == plug1_currentState)) || (state_plug1_S8 == plug1_currentState)) || (state_plug1_S4 == plug1_currentState));
    wire_port_loc_en_plug2_sendToClient = (false || ((state_plug2_S5 == plug2_currentState) && var_plug2_trigger));
    wire_port_loc_en_plug2_singleton1 = (((false || (state_plug2_S3temp == plug2_currentState)) || (state_plug2_S6temp == plug2_currentState)) || ((state_plug2_S5temp == plug2_currentState) && var_plug2_decidedValue != var_plug2_decidedValueS));
    wire_port_loc_en_plug2_sendToChannel = (false || (state_plug2_S1 == plug2_currentState));
    wire_port_loc_en_plug2_singleton2 = (false || ((state_plug2_S5temp == plug2_currentState) && var_plug2_decidedValue == var_plug2_decidedValueS));
    wire_port_loc_en_plug2_switchB = ((false || (state_plug2_S6 == plug2_currentState)) || ((state_plug2_S5 == plug2_currentState) && !var_plug2_trigger));
    wire_port_loc_en_plug2_recieveFromServer = (((false || (state_plug2_S2 == plug2_currentState)) || (state_plug2_S4 == plug2_currentState)) || (state_plug2_S3 == plug2_currentState));
    wire_port_loc_en_plug2_ticker = (((((false || (state_plug2_S2 == plug2_currentState)) || (state_plug2_S3 == plug2_currentState)) || (state_plug2_S7 == plug2_currentState)) || (state_plug2_S8 == plug2_currentState)) || (state_plug2_S4 == plug2_currentState));
    wire_port_loc_en_plug3_sendToClient = (false || ((state_plug3_S5 == plug3_currentState) && var_plug3_trigger));
    wire_port_loc_en_plug3_singleton1 = (((false || (state_plug3_S3temp == plug3_currentState)) || (state_plug3_S6temp == plug3_currentState)) || ((state_plug3_S5temp == plug3_currentState) && var_plug3_decidedValue != var_plug3_decidedValueS));
    wire_port_loc_en_plug3_sendToChannel = (false || (state_plug3_S1 == plug3_currentState));
    wire_port_loc_en_plug3_singleton2 = (false || ((state_plug3_S5temp == plug3_currentState) && var_plug3_decidedValue == var_plug3_decidedValueS));
    wire_port_loc_en_plug3_switchB = ((false || (state_plug3_S6 == plug3_currentState)) || ((state_plug3_S5 == plug3_currentState) && !var_plug3_trigger));
    wire_port_loc_en_plug3_recieveFromServer = (((false || (state_plug3_S2 == plug3_currentState)) || (state_plug3_S4 == plug3_currentState)) || (state_plug3_S3 == plug3_currentState));
    wire_port_loc_en_plug3_ticker = (((((false || (state_plug3_S2 == plug3_currentState)) || (state_plug3_S3 == plug3_currentState)) || (state_plug3_S7 == plug3_currentState)) || (state_plug3_S8 == plug3_currentState)) || (state_plug3_S4 == plug3_currentState));
    wire_port_loc_en_plug4_sendToClient = (false || ((state_plug4_S5 == plug4_currentState) && var_plug4_trigger));
    wire_port_loc_en_plug4_singleton1 = (((false || (state_plug4_S3temp == plug4_currentState)) || (state_plug4_S6temp == plug4_currentState)) || ((state_plug4_S5temp == plug4_currentState) && var_plug4_decidedValue != var_plug4_decidedValueS));
    wire_port_loc_en_plug4_sendToChannel = (false || (state_plug4_S1 == plug4_currentState));
    wire_port_loc_en_plug4_singleton2 = (false || ((state_plug4_S5temp == plug4_currentState) && var_plug4_decidedValue == var_plug4_decidedValueS));
    wire_port_loc_en_plug4_switchB = ((false || (state_plug4_S6 == plug4_currentState)) || ((state_plug4_S5 == plug4_currentState) && !var_plug4_trigger));
    wire_port_loc_en_plug4_recieveFromServer = (((false || (state_plug4_S2 == plug4_currentState)) || (state_plug4_S4 == plug4_currentState)) || (state_plug4_S3 == plug4_currentState));
    wire_port_loc_en_plug4_ticker = (((((false || (state_plug4_S2 == plug4_currentState)) || (state_plug4_S3 == plug4_currentState)) || (state_plug4_S7 == plug4_currentState)) || (state_plug4_S8 == plug4_currentState)) || (state_plug4_S4 == plug4_currentState));
    wire_port_loc_en_plugC1_SendS1 = ((false || ((state_plugC1_sendServer_rcvFServer == plugC1_currentState) && !var_plugC1_server1)) || ((state_plugC1_sendServer_sendTClient == plugC1_currentState) && !var_plugC1_server1));
    wire_port_loc_en_plugC1_rcvPlug = ((false || (state_plugC1_start_rcvFServer == plugC1_currentState)) || (state_plugC1_start_sendTClient == plugC1_currentState));
    wire_port_loc_en_plugC1_SendS2 = ((false || ((state_plugC1_sendServer_rcvFServer == plugC1_currentState) && !var_plugC1_server2)) || ((state_plugC1_sendServer_sendTClient == plugC1_currentState) && !var_plugC1_server2));
    wire_port_loc_en_plugC1_rcvServer = ((false || (state_plugC1_start_rcvFServer == plugC1_currentState)) || (state_plugC1_sendServer_rcvFServer == plugC1_currentState));
    wire_port_loc_en_plugC1_sendClient = ((false || (state_plugC1_start_sendTClient == plugC1_currentState)) || (state_plugC1_sendServer_sendTClient == plugC1_currentState));
    wire_port_loc_en_plugC2_SendS1 = ((false || ((state_plugC2_sendServer_rcvFServer == plugC2_currentState) && !var_plugC2_server1)) || ((state_plugC2_sendServer_sendTClient == plugC2_currentState) && !var_plugC2_server1));
    wire_port_loc_en_plugC2_rcvPlug = ((false || (state_plugC2_start_rcvFServer == plugC2_currentState)) || (state_plugC2_start_sendTClient == plugC2_currentState));
    wire_port_loc_en_plugC2_SendS2 = ((false || ((state_plugC2_sendServer_rcvFServer == plugC2_currentState) && !var_plugC2_server2)) || ((state_plugC2_sendServer_sendTClient == plugC2_currentState) && !var_plugC2_server2));
    wire_port_loc_en_plugC2_rcvServer = ((false || (state_plugC2_start_rcvFServer == plugC2_currentState)) || (state_plugC2_sendServer_rcvFServer == plugC2_currentState));
    wire_port_loc_en_plugC2_sendClient = ((false || (state_plugC2_start_sendTClient == plugC2_currentState)) || (state_plugC2_sendServer_sendTClient == plugC2_currentState));
    wire_port_loc_en_plugC3_SendS1 = ((false || ((state_plugC3_sendServer_rcvFServer == plugC3_currentState) && !var_plugC3_server1)) || ((state_plugC3_sendServer_sendTClient == plugC3_currentState) && !var_plugC3_server1));
    wire_port_loc_en_plugC3_rcvPlug = ((false || (state_plugC3_start_rcvFServer == plugC3_currentState)) || (state_plugC3_start_sendTClient == plugC3_currentState));
    wire_port_loc_en_plugC3_SendS2 = ((false || ((state_plugC3_sendServer_rcvFServer == plugC3_currentState) && !var_plugC3_server2)) || ((state_plugC3_sendServer_sendTClient == plugC3_currentState) && !var_plugC3_server2));
    wire_port_loc_en_plugC3_rcvServer = ((false || (state_plugC3_start_rcvFServer == plugC3_currentState)) || (state_plugC3_sendServer_rcvFServer == plugC3_currentState));
    wire_port_loc_en_plugC3_sendClient = ((false || (state_plugC3_start_sendTClient == plugC3_currentState)) || (state_plugC3_sendServer_sendTClient == plugC3_currentState));
    wire_port_loc_en_plugC4_SendS1 = ((false || ((state_plugC4_sendServer_rcvFServer == plugC4_currentState) && !var_plugC4_server1)) || ((state_plugC4_sendServer_sendTClient == plugC4_currentState) && !var_plugC4_server1));
    wire_port_loc_en_plugC4_rcvPlug = ((false || (state_plugC4_start_rcvFServer == plugC4_currentState)) || (state_plugC4_start_sendTClient == plugC4_currentState));
    wire_port_loc_en_plugC4_SendS2 = ((false || ((state_plugC4_sendServer_rcvFServer == plugC4_currentState) && !var_plugC4_server2)) || ((state_plugC4_sendServer_sendTClient == plugC4_currentState) && !var_plugC4_server2));
    wire_port_loc_en_plugC4_rcvServer = ((false || (state_plugC4_start_rcvFServer == plugC4_currentState)) || (state_plugC4_sendServer_rcvFServer == plugC4_currentState));
    wire_port_loc_en_plugC4_sendClient = ((false || (state_plugC4_start_sendTClient == plugC4_currentState)) || (state_plugC4_sendServer_sendTClient == plugC4_currentState));
    wire_port_loc_en_serverC1_rcvServer = (((false || (state_serverC1_rcvPlug_rcvFServer == serverC1_currentState)) || (state_serverC1_sendTServer_rcvFServer == serverC1_currentState)) || (state_serverC1_crash_rcvFServer == serverC1_currentState));
    wire_port_loc_en_serverC1_sendPlug = (((false || (state_serverC1_rcvPlug_sendPlugC == serverC1_currentState)) || (state_serverC1_sendTServer_sendPlugC == serverC1_currentState)) || (state_serverC1_crash_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC1_loose = ((false || (state_serverC1_sendTServer_rcvFServer == serverC1_currentState)) || (state_serverC1_sendTServer_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC1_msglost = ((false || (state_serverC1_sendTServer_rcvFServer == serverC1_currentState)) || (state_serverC1_sendTServer_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC1_rcvPlugC = ((((false || (state_serverC1_rcvPlug_rcvFServer == serverC1_currentState)) || (state_serverC1_rcvPlug_sendPlugC == serverC1_currentState)) || (state_serverC1_crash_rcvFServer == serverC1_currentState)) || (state_serverC1_crash_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC1_sendServer = ((false || (state_serverC1_sendTServer_rcvFServer == serverC1_currentState)) || (state_serverC1_sendTServer_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC2_rcvServer = (((false || (state_serverC2_rcvPlug_rcvFServer == serverC2_currentState)) || (state_serverC2_sendTServer_rcvFServer == serverC2_currentState)) || (state_serverC2_crash_rcvFServer == serverC2_currentState));
    wire_port_loc_en_serverC2_sendPlug = (((false || (state_serverC2_rcvPlug_sendPlugC == serverC2_currentState)) || (state_serverC2_sendTServer_sendPlugC == serverC2_currentState)) || (state_serverC2_crash_sendPlugC == serverC2_currentState));
    wire_port_loc_en_serverC2_loose = ((false || (state_serverC2_sendTServer_rcvFServer == serverC2_currentState)) || (state_serverC2_sendTServer_sendPlugC == serverC2_currentState));
    wire_port_loc_en_serverC2_msglost = ((false || (state_serverC2_sendTServer_rcvFServer == serverC2_currentState)) || (state_serverC2_sendTServer_sendPlugC == serverC2_currentState));
    wire_port_loc_en_serverC2_rcvPlugC = ((((false || (state_serverC2_rcvPlug_rcvFServer == serverC2_currentState)) || (state_serverC2_rcvPlug_sendPlugC == serverC2_currentState)) || (state_serverC2_crash_rcvFServer == serverC2_currentState)) || (state_serverC2_crash_sendPlugC == serverC2_currentState));
    wire_port_loc_en_serverC2_sendServer = ((false || (state_serverC2_sendTServer_rcvFServer == serverC2_currentState)) || (state_serverC2_sendTServer_sendPlugC == serverC2_currentState));
    wire_port_loc_en_s1_RcvFromChannel = (false || (state_s1_RECEIVE == s1_currentState));
    wire_port_loc_en_s1_SendToServerC = (false || (state_s1_SEND == s1_currentState));
    wire_port_loc_en_s1_singleton2 = (false || ((state_s1_SEND_TEMP == s1_currentState) && var_s1_decidedValue != 0));
    wire_port_loc_en_s1_singleton1 = (false || ((state_s1_SEND_TEMP == s1_currentState) && var_s1_decidedValue == 0));
    wire_port_loc_en_s2_RcvFromChannel = (false || (state_s2_RECEIVE == s2_currentState));
    wire_port_loc_en_s2_SendToServerC = (false || (state_s2_SEND == s2_currentState));
    wire_port_loc_en_s2_singleton2 = (false || ((state_s2_SEND_TEMP == s2_currentState) && var_s2_decidedValue != 0));
    wire_port_loc_en_s2_singleton1 = (false || ((state_s2_SEND_TEMP == s2_currentState) && var_s2_decidedValue == 0));
    interactions_first_enable[1] = (true && wire_port_loc_en_plug2_sendToClient);
    interactions_first_enable[7] = (true && wire_port_loc_en_plug4_switchB);
    interactions_first_enable[14] = (true && wire_port_loc_en_serverC2_loose);
    interactions_first_enable[11] = (true && wire_port_loc_en_plug4_ticker);
    interactions_first_enable[43] = ((true && wire_port_loc_en_plug2_recieveFromServer) && wire_port_loc_en_plugC2_sendClient);
    interactions_first_enable[13] = (true && wire_port_loc_en_serverC1_msglost);
    interactions_first_enable[46] = ((true && wire_port_loc_en_plugC3_SendS2) && wire_port_loc_en_serverC2_rcvPlugC);
    interactions_first_enable[18] = (true && wire_port_loc_en_plug3_singleton1);
    interactions_first_enable[33] = (((var_serverC1_clientIdSend == var_plugC1_clientId) && wire_port_loc_en_serverC1_sendPlug) && wire_port_loc_en_plugC1_rcvServer);
    interactions_first_enable[10] = (true && wire_port_loc_en_plug3_ticker);
    interactions_first_enable[44] = ((true && wire_port_loc_en_plugC3_rcvPlug) && wire_port_loc_en_plug3_sendToChannel);
    interactions_first_enable[20] = (true && wire_port_loc_en_plug1_singleton2);
    interactions_first_enable[15] = (true && wire_port_loc_en_serverC2_msglost);
    interactions_first_enable[8] = (true && wire_port_loc_en_plug1_ticker);
    interactions_first_enable[40] = ((true && wire_port_loc_en_serverC2_rcvServer) && wire_port_loc_en_s2_SendToServerC);
    interactions_first_enable[9] = (true && wire_port_loc_en_plug2_ticker);
    interactions_first_enable[4] = (true && wire_port_loc_en_plug1_switchB);
    interactions_first_enable[36] = ((true && wire_port_loc_en_plug2_sendToChannel) && wire_port_loc_en_plugC2_rcvPlug);
    interactions_first_enable[2] = (true && wire_port_loc_en_plug3_sendToClient);
    interactions_first_enable[24] = (true && wire_port_loc_en_s1_singleton1);
    interactions_first_enable[25] = (true && wire_port_loc_en_s2_singleton1);
    interactions_first_enable[39] = ((true && wire_port_loc_en_s2_RcvFromChannel) && wire_port_loc_en_serverC2_sendServer);
    interactions_first_enable[12] = (true && wire_port_loc_en_serverC1_loose);
    interactions_first_enable[23] = (true && wire_port_loc_en_plug4_singleton2);
    interactions_first_enable[45] = ((true && wire_port_loc_en_plugC3_SendS1) && wire_port_loc_en_serverC1_rcvPlugC);
    interactions_first_enable[3] = (true && wire_port_loc_en_plug4_sendToClient);
    interactions_first_enable[5] = (true && wire_port_loc_en_plug2_switchB);
    interactions_first_enable[35] = ((true && wire_port_loc_en_plug1_recieveFromServer) && wire_port_loc_en_plugC1_sendClient);
    interactions_first_enable[50] = ((true && wire_port_loc_en_plug4_sendToChannel) && wire_port_loc_en_plugC4_rcvPlug);
    interactions_first_enable[19] = (true && wire_port_loc_en_plug4_singleton1);
    interactions_first_enable[0] = (true && wire_port_loc_en_plug1_sendToClient);
    interactions_first_enable[52] = ((true && wire_port_loc_en_plugC4_SendS2) && wire_port_loc_en_serverC2_rcvPlugC);
    interactions_first_enable[47] = (((var_serverC1_clientIdSend == var_plugC3_clientId) && wire_port_loc_en_plugC3_rcvServer) && wire_port_loc_en_serverC1_sendPlug);
    interactions_first_enable[53] = (((var_serverC2_clientIdSend == var_plugC3_clientId) && wire_port_loc_en_plugC3_rcvServer) && wire_port_loc_en_serverC2_sendPlug);
    interactions_first_enable[51] = ((true && wire_port_loc_en_serverC1_rcvPlugC) && wire_port_loc_en_plugC4_SendS1);
    interactions_first_enable[28] = ((true && wire_port_loc_en_plug1_sendToChannel) && wire_port_loc_en_plugC1_rcvPlug);
    interactions_first_enable[22] = (true && wire_port_loc_en_plug3_singleton2);
    interactions_first_enable[16] = (true && wire_port_loc_en_plug1_singleton1);
    interactions_first_enable[32] = ((true && wire_port_loc_en_serverC1_rcvServer) && wire_port_loc_en_s1_SendToServerC);
    interactions_first_enable[31] = ((true && wire_port_loc_en_serverC1_sendServer) && wire_port_loc_en_s1_RcvFromChannel);
    interactions_first_enable[17] = (true && wire_port_loc_en_plug2_singleton1);
    interactions_first_enable[30] = ((true && wire_port_loc_en_plugC1_SendS2) && wire_port_loc_en_serverC2_rcvPlugC);
    interactions_first_enable[38] = ((true && wire_port_loc_en_serverC2_rcvPlugC) && wire_port_loc_en_plugC2_SendS2);
    interactions_first_enable[21] = (true && wire_port_loc_en_plug2_singleton2);
    interactions_first_enable[27] = (true && wire_port_loc_en_s2_singleton2);
    interactions_first_enable[55] = ((true && wire_port_loc_en_plug4_recieveFromServer) && wire_port_loc_en_plugC4_sendClient);
    interactions_first_enable[26] = (true && wire_port_loc_en_s1_singleton2);
    interactions_first_enable[54] = (((var_serverC2_clientIdSend == var_plugC4_clientId) && wire_port_loc_en_plugC4_rcvServer) && wire_port_loc_en_serverC2_sendPlug);
    interactions_first_enable[41] = (((var_serverC2_clientIdSend == var_plugC1_clientId) && wire_port_loc_en_plugC1_rcvServer) && wire_port_loc_en_serverC2_sendPlug);
    interactions_first_enable[42] = (((var_serverC2_clientIdSend == var_plugC2_clientId) && wire_port_loc_en_plugC2_rcvServer) && wire_port_loc_en_serverC2_sendPlug);
    interactions_first_enable[6] = (true && wire_port_loc_en_plug3_switchB);
    interactions_first_enable[48] = (((var_serverC1_clientIdSend == var_plugC4_clientId) && wire_port_loc_en_serverC1_sendPlug) && wire_port_loc_en_plugC4_rcvServer);
    interactions_first_enable[37] = ((true && wire_port_loc_en_serverC1_rcvPlugC) && wire_port_loc_en_plugC2_SendS1);
    interactions_first_enable[49] = ((true && wire_port_loc_en_plugC3_sendClient) && wire_port_loc_en_plug3_recieveFromServer);
    interactions_first_enable[29] = ((true && wire_port_loc_en_serverC1_rcvPlugC) && wire_port_loc_en_plugC1_SendS1);
    interactions_first_enable[34] = (((var_serverC1_clientIdSend == var_plugC2_clientId) && wire_port_loc_en_serverC1_sendPlug) && wire_port_loc_en_plugC2_rcvServer);
    interactions_enablement[0] = (interactions_first_enable[0] && ((wire_selector == 0) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[1]) ) && ( ! interactions_first_enable[2]) ) && ( ! interactions_first_enable[3]) ) && ( ! interactions_first_enable[4]) ) && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[1] = (interactions_first_enable[1] && ((wire_selector == 1) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[2]) ) && ( ! interactions_first_enable[3]) ) && ( ! interactions_first_enable[4]) ) && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[2] = (interactions_first_enable[2] && ((wire_selector == 2) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[3]) ) && ( ! interactions_first_enable[4]) ) && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[3] = (interactions_first_enable[3] && ((wire_selector == 3) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[4]) ) && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[4] = (interactions_first_enable[4] && ((wire_selector == 4) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[5] = (interactions_first_enable[5] && ((wire_selector == 5) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[6] = (interactions_first_enable[6] && ((wire_selector == 6) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[7] = (interactions_first_enable[7] && ((wire_selector == 7) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[8] = (interactions_first_enable[8] && ((wire_selector == 8) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[9] = (interactions_first_enable[9] && ((wire_selector == 9) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[10] = (interactions_first_enable[10] && ((wire_selector == 10) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[11] = (interactions_first_enable[11] && ((wire_selector == 11) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[12] = (interactions_first_enable[12] && ((wire_selector == 12) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[13] = (interactions_first_enable[13] && ((wire_selector == 13) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[14] = (interactions_first_enable[14] && ((wire_selector == 14) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[15] = (interactions_first_enable[15] && ((wire_selector == 15) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[16] = (interactions_first_enable[16] && ((wire_selector == 16) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[17] = (interactions_first_enable[17] && ((wire_selector == 17) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[18] = (interactions_first_enable[18] && ((wire_selector == 18) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[19] = (interactions_first_enable[19] && ((wire_selector == 19) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[20] = (interactions_first_enable[20] && ((wire_selector == 20) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[21] = (interactions_first_enable[21] && ((wire_selector == 21) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[22] = (interactions_first_enable[22] && ((wire_selector == 22) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[23] = (interactions_first_enable[23] && ((wire_selector == 23) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[24] = (interactions_first_enable[24] && ((wire_selector == 24) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[25] = (interactions_first_enable[25] && ((wire_selector == 25) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[26] = (interactions_first_enable[26] && ((wire_selector == 26) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((true && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[27] = (interactions_first_enable[27] && ((wire_selector == 27) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((true && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[28] = (interactions_first_enable[28] && ((wire_selector == 28) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((true && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[29] = (interactions_first_enable[29] && ((wire_selector == 29) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((true && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[30] = (interactions_first_enable[30] && ((wire_selector == 30) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((true && ( ! interactions_first_enable[31]) ) && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[31] = (interactions_first_enable[31] && ((wire_selector == 31) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((true && ( ! interactions_first_enable[32]) ) && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[32] = (interactions_first_enable[32] && ((wire_selector == 32) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((true && ( ! interactions_first_enable[33]) ) && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[33] = (interactions_first_enable[33] && ((wire_selector == 33) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((true && ( ! interactions_first_enable[34]) ) && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[34] = (interactions_first_enable[34] && ((wire_selector == 34) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((true && ( ! interactions_first_enable[35]) ) && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[35] = (interactions_first_enable[35] && ((wire_selector == 35) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((true && ( ! interactions_first_enable[36]) ) && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[36] = (interactions_first_enable[36] && ((wire_selector == 36) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((true && ( ! interactions_first_enable[37]) ) && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[37] = (interactions_first_enable[37] && ((wire_selector == 37) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((true && ( ! interactions_first_enable[38]) ) && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[38] = (interactions_first_enable[38] && ((wire_selector == 38) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((true && ( ! interactions_first_enable[39]) ) && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[39] = (interactions_first_enable[39] && ((wire_selector == 39) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((true && ( ! interactions_first_enable[40]) ) && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[40] = (interactions_first_enable[40] && ((wire_selector == 40) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((true && ( ! interactions_first_enable[41]) ) && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[41] = (interactions_first_enable[41] && ((wire_selector == 41) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((true && ( ! interactions_first_enable[42]) ) && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[42] = (interactions_first_enable[42] && ((wire_selector == 42) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((true && ( ! interactions_first_enable[43]) ) && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[43] = (interactions_first_enable[43] && ((wire_selector == 43) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((true && ( ! interactions_first_enable[44]) ) && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[44] = (interactions_first_enable[44] && ((wire_selector == 44) || (( ! interactions_first_enable[wire_selector])  && (((((((((((true && ( ! interactions_first_enable[45]) ) && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[45] = (interactions_first_enable[45] && ((wire_selector == 45) || (( ! interactions_first_enable[wire_selector])  && ((((((((((true && ( ! interactions_first_enable[46]) ) && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[46] = (interactions_first_enable[46] && ((wire_selector == 46) || (( ! interactions_first_enable[wire_selector])  && (((((((((true && ( ! interactions_first_enable[47]) ) && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[47] = (interactions_first_enable[47] && ((wire_selector == 47) || (( ! interactions_first_enable[wire_selector])  && ((((((((true && ( ! interactions_first_enable[48]) ) && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[48] = (interactions_first_enable[48] && ((wire_selector == 48) || (( ! interactions_first_enable[wire_selector])  && (((((((true && ( ! interactions_first_enable[49]) ) && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[49] = (interactions_first_enable[49] && ((wire_selector == 49) || (( ! interactions_first_enable[wire_selector])  && ((((((true && ( ! interactions_first_enable[50]) ) && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[50] = (interactions_first_enable[50] && ((wire_selector == 50) || (( ! interactions_first_enable[wire_selector])  && (((((true && ( ! interactions_first_enable[51]) ) && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[51] = (interactions_first_enable[51] && ((wire_selector == 51) || (( ! interactions_first_enable[wire_selector])  && ((((true && ( ! interactions_first_enable[52]) ) && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[52] = (interactions_first_enable[52] && ((wire_selector == 52) || (( ! interactions_first_enable[wire_selector])  && (((true && ( ! interactions_first_enable[53]) ) && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[53] = (interactions_first_enable[53] && ((wire_selector == 53) || (( ! interactions_first_enable[wire_selector])  && ((true && ( ! interactions_first_enable[54]) ) && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[54] = (interactions_first_enable[54] && ((wire_selector == 54) || (( ! interactions_first_enable[wire_selector])  && (true && ( ! interactions_first_enable[55]) ))));
    interactions_enablement[55] = (interactions_first_enable[55] && ((wire_selector == 55) || (( ! interactions_first_enable[wire_selector])  && true)));
    wire_port_en_plug1_sendToClient = (false || interactions_enablement[0]);
    wire_port_en_plug1_singleton1 = (false || interactions_enablement[16]);
    wire_port_en_plug1_sendToChannel = (false || interactions_enablement[28]);
    wire_port_en_plug1_singleton2 = (false || interactions_enablement[20]);
    wire_port_en_plug1_switchB = (false || interactions_enablement[4]);
    wire_port_en_plug1_recieveFromServer = (false || interactions_enablement[35]);
    wire_port_en_plug1_ticker = (false || interactions_enablement[8]);
    wire_port_en_plug2_sendToClient = (false || interactions_enablement[1]);
    wire_port_en_plug2_singleton1 = (false || interactions_enablement[17]);
    wire_port_en_plug2_sendToChannel = (false || interactions_enablement[36]);
    wire_port_en_plug2_singleton2 = (false || interactions_enablement[21]);
    wire_port_en_plug2_switchB = (false || interactions_enablement[5]);
    wire_port_en_plug2_recieveFromServer = (false || interactions_enablement[43]);
    wire_port_en_plug2_ticker = (false || interactions_enablement[9]);
    wire_port_en_plug3_sendToClient = (false || interactions_enablement[2]);
    wire_port_en_plug3_singleton1 = (false || interactions_enablement[18]);
    wire_port_en_plug3_sendToChannel = (false || interactions_enablement[44]);
    wire_port_en_plug3_singleton2 = (false || interactions_enablement[22]);
    wire_port_en_plug3_switchB = (false || interactions_enablement[6]);
    wire_port_en_plug3_recieveFromServer = (false || interactions_enablement[49]);
    wire_port_en_plug3_ticker = (false || interactions_enablement[10]);
    wire_port_en_plug4_sendToClient = (false || interactions_enablement[3]);
    wire_port_en_plug4_singleton1 = (false || interactions_enablement[19]);
    wire_port_en_plug4_sendToChannel = (false || interactions_enablement[50]);
    wire_port_en_plug4_singleton2 = (false || interactions_enablement[23]);
    wire_port_en_plug4_switchB = (false || interactions_enablement[7]);
    wire_port_en_plug4_recieveFromServer = (false || interactions_enablement[55]);
    wire_port_en_plug4_ticker = (false || interactions_enablement[11]);
    wire_port_en_plugC1_SendS1 = (false || interactions_enablement[29]);
    wire_port_en_plugC1_rcvPlug = (false || interactions_enablement[28]);
    wire_port_en_plugC1_SendS2 = (false || interactions_enablement[30]);
    wire_port_en_plugC1_rcvServer = ((false || interactions_enablement[33]) || interactions_enablement[41]);
    wire_port_en_plugC1_sendClient = (false || interactions_enablement[35]);
    wire_port_en_plugC2_SendS1 = (false || interactions_enablement[37]);
    wire_port_en_plugC2_rcvPlug = (false || interactions_enablement[36]);
    wire_port_en_plugC2_SendS2 = (false || interactions_enablement[38]);
    wire_port_en_plugC2_rcvServer = ((false || interactions_enablement[34]) || interactions_enablement[42]);
    wire_port_en_plugC2_sendClient = (false || interactions_enablement[43]);
    wire_port_en_plugC3_SendS1 = (false || interactions_enablement[45]);
    wire_port_en_plugC3_rcvPlug = (false || interactions_enablement[44]);
    wire_port_en_plugC3_SendS2 = (false || interactions_enablement[46]);
    wire_port_en_plugC3_rcvServer = ((false || interactions_enablement[47]) || interactions_enablement[53]);
    wire_port_en_plugC3_sendClient = (false || interactions_enablement[49]);
    wire_port_en_plugC4_SendS1 = (false || interactions_enablement[51]);
    wire_port_en_plugC4_rcvPlug = (false || interactions_enablement[50]);
    wire_port_en_plugC4_SendS2 = (false || interactions_enablement[52]);
    wire_port_en_plugC4_rcvServer = ((false || interactions_enablement[48]) || interactions_enablement[54]);
    wire_port_en_plugC4_sendClient = (false || interactions_enablement[55]);
    wire_port_en_serverC1_rcvServer = (false || interactions_enablement[32]);
    wire_port_en_serverC1_sendPlug = ((((false || interactions_enablement[33]) || interactions_enablement[34]) || interactions_enablement[47]) || interactions_enablement[48]);
    wire_port_en_serverC1_loose = (false || interactions_enablement[12]);
    wire_port_en_serverC1_msglost = (false || interactions_enablement[13]);
    wire_port_en_serverC1_rcvPlugC = ((((false || interactions_enablement[29]) || interactions_enablement[37]) || interactions_enablement[45]) || interactions_enablement[51]);
    wire_port_en_serverC1_sendServer = (false || interactions_enablement[31]);
    wire_port_en_serverC2_rcvServer = (false || interactions_enablement[40]);
    wire_port_en_serverC2_sendPlug = ((((false || interactions_enablement[41]) || interactions_enablement[42]) || interactions_enablement[53]) || interactions_enablement[54]);
    wire_port_en_serverC2_loose = (false || interactions_enablement[14]);
    wire_port_en_serverC2_msglost = (false || interactions_enablement[15]);
    wire_port_en_serverC2_rcvPlugC = ((((false || interactions_enablement[30]) || interactions_enablement[38]) || interactions_enablement[46]) || interactions_enablement[52]);
    wire_port_en_serverC2_sendServer = (false || interactions_enablement[39]);
    wire_port_en_s1_RcvFromChannel = (false || interactions_enablement[31]);
    wire_port_en_s1_SendToServerC = (false || interactions_enablement[32]);
    wire_port_en_s1_singleton2 = (false || interactions_enablement[26]);
    wire_port_en_s1_singleton1 = (false || interactions_enablement[24]);
    wire_port_en_s2_RcvFromChannel = (false || interactions_enablement[39]);
    wire_port_en_s2_SendToServerC = (false || interactions_enablement[40]);
    wire_port_en_s2_singleton2 = (false || interactions_enablement[27]);
    wire_port_en_s2_singleton1 = (false || interactions_enablement[25]);
    if(interactions_enablement[35]) {
      var_plug1_decidedValueS_nsf= var_plugC1_decidedValue; 
    }
    else {
      var_plug1_decidedValueS_nsf= var_plug1_decidedValueS;
    }
    if(interactions_enablement[35]) {
      var_plug1_serverId_nsf= var_plugC1_serverId; 
    }
    else {
      var_plug1_serverId_nsf= var_plug1_serverId;
    }
    if(interactions_enablement[43]) {
      var_plug2_decidedValueS_nsf= var_plugC2_decidedValue; 
    }
    else {
      var_plug2_decidedValueS_nsf= var_plug2_decidedValueS;
    }
    if(interactions_enablement[43]) {
      var_plug2_serverId_nsf= var_plugC2_serverId; 
    }
    else {
      var_plug2_serverId_nsf= var_plug2_serverId;
    }
    if(interactions_enablement[49]) {
      var_plug3_decidedValueS_nsf= var_plugC3_decidedValue; 
    }
    else {
      var_plug3_decidedValueS_nsf= var_plug3_decidedValueS;
    }
    if(interactions_enablement[49]) {
      var_plug3_serverId_nsf= var_plugC3_serverId; 
    }
    else {
      var_plug3_serverId_nsf= var_plug3_serverId;
    }
    if(interactions_enablement[55]) {
      var_plug4_decidedValueS_nsf= var_plugC4_decidedValue; 
    }
    else {
      var_plug4_decidedValueS_nsf= var_plug4_decidedValueS;
    }
    if(interactions_enablement[55]) {
      var_plug4_serverId_nsf= var_plugC4_serverId; 
    }
    else {
      var_plug4_serverId_nsf= var_plug4_serverId;
    }
    if(interactions_enablement[41]) {
      var_plugC1_serverId_nsf= var_serverC2_serverId; 
    }
    else {
      if(interactions_enablement[33]) {
        var_plugC1_serverId_nsf= var_serverC1_serverId; 
      }
      else {
        var_plugC1_serverId_nsf= var_plugC1_serverId;
      }
    }
    if(interactions_enablement[41]) {
      var_plugC1_decidedValue_nsf= var_serverC2_decided; 
    }
    else {
      if(interactions_enablement[33]) {
        var_plugC1_decidedValue_nsf= var_serverC1_decided; 
      }
      else {
        var_plugC1_decidedValue_nsf= var_plugC1_decidedValue;
      }
    }
    if(interactions_enablement[28]) {
      var_plugC1_proposedValue_nsf= var_plug1_proposedValue; 
    }
    else {
      var_plugC1_proposedValue_nsf= var_plugC1_proposedValue;
    }
    if(interactions_enablement[42]) {
      var_plugC2_serverId_nsf= var_serverC2_serverId; 
    }
    else {
      if(interactions_enablement[34]) {
        var_plugC2_serverId_nsf= var_serverC1_serverId; 
      }
      else {
        var_plugC2_serverId_nsf= var_plugC2_serverId;
      }
    }
    if(interactions_enablement[42]) {
      var_plugC2_decidedValue_nsf= var_serverC2_decided; 
    }
    else {
      if(interactions_enablement[34]) {
        var_plugC2_decidedValue_nsf= var_serverC1_decided; 
      }
      else {
        var_plugC2_decidedValue_nsf= var_plugC2_decidedValue;
      }
    }
    if(interactions_enablement[36]) {
      var_plugC2_proposedValue_nsf= var_plug2_proposedValue; 
    }
    else {
      var_plugC2_proposedValue_nsf= var_plugC2_proposedValue;
    }
    if(interactions_enablement[53]) {
      var_plugC3_serverId_nsf= var_serverC2_serverId; 
    }
    else {
      if(interactions_enablement[47]) {
        var_plugC3_serverId_nsf= var_serverC1_serverId; 
      }
      else {
        var_plugC3_serverId_nsf= var_plugC3_serverId;
      }
    }
    if(interactions_enablement[53]) {
      var_plugC3_decidedValue_nsf= var_serverC2_decided; 
    }
    else {
      if(interactions_enablement[47]) {
        var_plugC3_decidedValue_nsf= var_serverC1_decided; 
      }
      else {
        var_plugC3_decidedValue_nsf= var_plugC3_decidedValue;
      }
    }
    if(interactions_enablement[44]) {
      var_plugC3_proposedValue_nsf= var_plug3_proposedValue; 
    }
    else {
      var_plugC3_proposedValue_nsf= var_plugC3_proposedValue;
    }
    if(interactions_enablement[54]) {
      var_plugC4_serverId_nsf= var_serverC2_serverId; 
    }
    else {
      if(interactions_enablement[48]) {
        var_plugC4_serverId_nsf= var_serverC1_serverId; 
      }
      else {
        var_plugC4_serverId_nsf= var_plugC4_serverId;
      }
    }
    if(interactions_enablement[54]) {
      var_plugC4_decidedValue_nsf= var_serverC2_decided; 
    }
    else {
      if(interactions_enablement[48]) {
        var_plugC4_decidedValue_nsf= var_serverC1_decided; 
      }
      else {
        var_plugC4_decidedValue_nsf= var_plugC4_decidedValue;
      }
    }
    if(interactions_enablement[50]) {
      var_plugC4_proposedValue_nsf= var_plug4_proposedValue; 
    }
    else {
      var_plugC4_proposedValue_nsf= var_plugC4_proposedValue;
    }
    if(interactions_enablement[32]) {
      var_serverC1_clientIdSend_nsf= var_s1_ClientId; 
    }
    else {
      var_serverC1_clientIdSend_nsf= var_serverC1_clientIdSend;
    }
    if(interactions_enablement[32]) {
      var_serverC1_decided_nsf= var_s1_decidedValue; 
    }
    else {
      var_serverC1_decided_nsf= var_serverC1_decided;
    }
    if(interactions_enablement[51]) {
      var_serverC1_proposed_nsf= var_plugC4_proposedValue; 
    }
    else {
      if(interactions_enablement[45]) {
        var_serverC1_proposed_nsf= var_plugC3_proposedValue; 
      }
      else {
        if(interactions_enablement[37]) {
          var_serverC1_proposed_nsf= var_plugC2_proposedValue; 
        }
        else {
          if(interactions_enablement[29]) {
            var_serverC1_proposed_nsf= var_plugC1_proposedValue; 
          }
          else {
            var_serverC1_proposed_nsf= var_serverC1_proposed;
          }
        }
      }
    }
    if(interactions_enablement[51]) {
      var_serverC1_clientIdRcv_nsf= var_plugC4_clientId; 
    }
    else {
      if(interactions_enablement[45]) {
        var_serverC1_clientIdRcv_nsf= var_plugC3_clientId; 
      }
      else {
        if(interactions_enablement[37]) {
          var_serverC1_clientIdRcv_nsf= var_plugC2_clientId; 
        }
        else {
          if(interactions_enablement[29]) {
            var_serverC1_clientIdRcv_nsf= var_plugC1_clientId; 
          }
          else {
            var_serverC1_clientIdRcv_nsf= var_serverC1_clientIdRcv;
          }
        }
      }
    }
    if(interactions_enablement[40]) {
      var_serverC2_clientIdSend_nsf= var_s2_ClientId; 
    }
    else {
      var_serverC2_clientIdSend_nsf= var_serverC2_clientIdSend;
    }
    if(interactions_enablement[40]) {
      var_serverC2_decided_nsf= var_s2_decidedValue; 
    }
    else {
      var_serverC2_decided_nsf= var_serverC2_decided;
    }
    if(interactions_enablement[52]) {
      var_serverC2_proposed_nsf= var_plugC4_proposedValue; 
    }
    else {
      if(interactions_enablement[46]) {
        var_serverC2_proposed_nsf= var_plugC3_proposedValue; 
      }
      else {
        if(interactions_enablement[38]) {
          var_serverC2_proposed_nsf= var_plugC2_proposedValue; 
        }
        else {
          if(interactions_enablement[30]) {
            var_serverC2_proposed_nsf= var_plugC1_proposedValue; 
          }
          else {
            var_serverC2_proposed_nsf= var_serverC2_proposed;
          }
        }
      }
    }
    if(interactions_enablement[52]) {
      var_serverC2_clientIdRcv_nsf= var_plugC4_clientId; 
    }
    else {
      if(interactions_enablement[46]) {
        var_serverC2_clientIdRcv_nsf= var_plugC3_clientId; 
      }
      else {
        if(interactions_enablement[38]) {
          var_serverC2_clientIdRcv_nsf= var_plugC2_clientId; 
        }
        else {
          if(interactions_enablement[30]) {
            var_serverC2_clientIdRcv_nsf= var_plugC1_clientId; 
          }
          else {
            var_serverC2_clientIdRcv_nsf= var_serverC2_clientIdRcv;
          }
        }
      }
    }
    if(interactions_enablement[31]) {
      var_s1_ClientId_nsf= var_serverC1_clientIdRcv; 
    }
    else {
      var_s1_ClientId_nsf= var_s1_ClientId;
    }
    if(interactions_enablement[31]) {
      var_s1_proposedValue_nsf= var_serverC1_proposed; 
    }
    else {
      var_s1_proposedValue_nsf= var_s1_proposedValue;
    }
    if(interactions_enablement[39]) {
      var_s2_ClientId_nsf= var_serverC2_clientIdRcv; 
    }
    else {
      var_s2_ClientId_nsf= var_s2_ClientId;
    }
    if(interactions_enablement[39]) {
      var_s2_proposedValue_nsf= var_serverC2_proposed; 
    }
    else {
      var_s2_proposedValue_nsf= var_s2_proposedValue;
    }
    if(((plug1_currentState == state_plug1_S5) && wire_port_en_plug1_switchB)) {
      plug1_currentState_nsf= state_plug1_S8;
    }
    else {
      if(((plug1_currentState == state_plug1_S5) && wire_port_en_plug1_sendToClient)) {
        plug1_currentState_nsf= state_plug1_S7;
      }
      else {
        if(((plug1_currentState == state_plug1_S3temp) && wire_port_en_plug1_singleton1)) {
          plug1_currentState_nsf= state_plug1_S3;
        }
        else {
          if(((plug1_currentState == state_plug1_S2) && wire_port_en_plug1_recieveFromServer)) {
            plug1_currentState_nsf= state_plug1_S3temp;
          }
          else {
            if(((plug1_currentState == state_plug1_S2) && wire_port_en_plug1_ticker)) {
              plug1_currentState_nsf= state_plug1_S4;
            }
            else {
              if(((plug1_currentState == state_plug1_S6) && wire_port_en_plug1_switchB)) {
                plug1_currentState_nsf= state_plug1_S8;
              }
              else {
                if(((plug1_currentState == state_plug1_S7) && wire_port_en_plug1_ticker)) {
                  plug1_currentState_nsf= state_plug1_S7;
                }
                else {
                  if(((plug1_currentState == state_plug1_S3) && wire_port_en_plug1_recieveFromServer)) {
                    plug1_currentState_nsf= state_plug1_S5temp;
                  }
                  else {
                    if(((plug1_currentState == state_plug1_S3) && wire_port_en_plug1_ticker)) {
                      plug1_currentState_nsf= state_plug1_S6;
                    }
                    else {
                      if(((plug1_currentState == state_plug1_S6temp) && wire_port_en_plug1_singleton1)) {
                        plug1_currentState_nsf= state_plug1_S6;
                      }
                      else {
                        if(((plug1_currentState == state_plug1_S1) && wire_port_en_plug1_sendToChannel)) {
                          plug1_currentState_nsf= state_plug1_S2;
                        }
                        else {
                          if(((plug1_currentState == state_plug1_S5temp) && wire_port_en_plug1_singleton1)) {
                            plug1_currentState_nsf= state_plug1_S5;
                          }
                          else {
                            if(((plug1_currentState == state_plug1_S5temp) && wire_port_en_plug1_singleton2)) {
                              plug1_currentState_nsf= state_plug1_S5;
                            }
                            else {
                              if(((plug1_currentState == state_plug1_S4) && wire_port_en_plug1_recieveFromServer)) {
                                plug1_currentState_nsf= state_plug1_S6temp;
                              }
                              else {
                                if(((plug1_currentState == state_plug1_S4) && wire_port_en_plug1_ticker)) {
                                  plug1_currentState_nsf= state_plug1_S4;
                                }
                                else {
                                  if(((plug1_currentState == state_plug1_S8) && wire_port_en_plug1_ticker)) {
                                    plug1_currentState_nsf= state_plug1_S8;
                                  }
                                  else {
                                    plug1_currentState_nsf= plug1_currentState;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((plug1_currentState == state_plug1_S5temp) && wire_port_en_plug1_singleton1)) {
      var_plug1_trigger_nsf= false;
    }
    else {
      if(((plug1_currentState == state_plug1_S5temp) && wire_port_en_plug1_singleton2)) {
        var_plug1_trigger_nsf= true;
      }
      else {
        var_plug1_trigger_nsf= var_plug1_trigger;
      }
    }
    if(((plug1_currentState == state_plug1_S3temp) && wire_port_en_plug1_singleton1)) {
      var_plug1_decidedValue_nsf= var_plug1_decidedValueS;
    }
    else {
      if(((plug1_currentState == state_plug1_S6temp) && wire_port_en_plug1_singleton1)) {
        var_plug1_decidedValue_nsf= var_plug1_decidedValueS;
      }
      else {
        if(((plug1_currentState == state_plug1_S5temp) && wire_port_en_plug1_singleton1)) {
          var_plug1_decidedValue_nsf= var_plug1_proposedValue;
        }
        else {
          var_plug1_decidedValue_nsf= var_plug1_decidedValue;
        }
      }
    }
    if(((plug2_currentState == state_plug2_S5) && wire_port_en_plug2_switchB)) {
      plug2_currentState_nsf= state_plug2_S8;
    }
    else {
      if(((plug2_currentState == state_plug2_S5) && wire_port_en_plug2_sendToClient)) {
        plug2_currentState_nsf= state_plug2_S7;
      }
      else {
        if(((plug2_currentState == state_plug2_S3temp) && wire_port_en_plug2_singleton1)) {
          plug2_currentState_nsf= state_plug2_S3;
        }
        else {
          if(((plug2_currentState == state_plug2_S2) && wire_port_en_plug2_recieveFromServer)) {
            plug2_currentState_nsf= state_plug2_S3temp;
          }
          else {
            if(((plug2_currentState == state_plug2_S2) && wire_port_en_plug2_ticker)) {
              plug2_currentState_nsf= state_plug2_S4;
            }
            else {
              if(((plug2_currentState == state_plug2_S6) && wire_port_en_plug2_switchB)) {
                plug2_currentState_nsf= state_plug2_S8;
              }
              else {
                if(((plug2_currentState == state_plug2_S7) && wire_port_en_plug2_ticker)) {
                  plug2_currentState_nsf= state_plug2_S7;
                }
                else {
                  if(((plug2_currentState == state_plug2_S3) && wire_port_en_plug2_recieveFromServer)) {
                    plug2_currentState_nsf= state_plug2_S5temp;
                  }
                  else {
                    if(((plug2_currentState == state_plug2_S3) && wire_port_en_plug2_ticker)) {
                      plug2_currentState_nsf= state_plug2_S6;
                    }
                    else {
                      if(((plug2_currentState == state_plug2_S6temp) && wire_port_en_plug2_singleton1)) {
                        plug2_currentState_nsf= state_plug2_S6;
                      }
                      else {
                        if(((plug2_currentState == state_plug2_S1) && wire_port_en_plug2_sendToChannel)) {
                          plug2_currentState_nsf= state_plug2_S2;
                        }
                        else {
                          if(((plug2_currentState == state_plug2_S5temp) && wire_port_en_plug2_singleton1)) {
                            plug2_currentState_nsf= state_plug2_S5;
                          }
                          else {
                            if(((plug2_currentState == state_plug2_S5temp) && wire_port_en_plug2_singleton2)) {
                              plug2_currentState_nsf= state_plug2_S5;
                            }
                            else {
                              if(((plug2_currentState == state_plug2_S4) && wire_port_en_plug2_recieveFromServer)) {
                                plug2_currentState_nsf= state_plug2_S6temp;
                              }
                              else {
                                if(((plug2_currentState == state_plug2_S4) && wire_port_en_plug2_ticker)) {
                                  plug2_currentState_nsf= state_plug2_S4;
                                }
                                else {
                                  if(((plug2_currentState == state_plug2_S8) && wire_port_en_plug2_ticker)) {
                                    plug2_currentState_nsf= state_plug2_S8;
                                  }
                                  else {
                                    plug2_currentState_nsf= plug2_currentState;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((plug2_currentState == state_plug2_S5temp) && wire_port_en_plug2_singleton1)) {
      var_plug2_trigger_nsf= false;
    }
    else {
      if(((plug2_currentState == state_plug2_S5temp) && wire_port_en_plug2_singleton2)) {
        var_plug2_trigger_nsf= true;
      }
      else {
        var_plug2_trigger_nsf= var_plug2_trigger;
      }
    }
    if(((plug2_currentState == state_plug2_S3temp) && wire_port_en_plug2_singleton1)) {
      var_plug2_decidedValue_nsf= var_plug2_decidedValueS;
    }
    else {
      if(((plug2_currentState == state_plug2_S6temp) && wire_port_en_plug2_singleton1)) {
        var_plug2_decidedValue_nsf= var_plug2_decidedValueS;
      }
      else {
        if(((plug2_currentState == state_plug2_S5temp) && wire_port_en_plug2_singleton1)) {
          var_plug2_decidedValue_nsf= var_plug2_proposedValue;
        }
        else {
          var_plug2_decidedValue_nsf= var_plug2_decidedValue;
        }
      }
    }
    if(((plug3_currentState == state_plug3_S5) && wire_port_en_plug3_switchB)) {
      plug3_currentState_nsf= state_plug3_S8;
    }
    else {
      if(((plug3_currentState == state_plug3_S5) && wire_port_en_plug3_sendToClient)) {
        plug3_currentState_nsf= state_plug3_S7;
      }
      else {
        if(((plug3_currentState == state_plug3_S3temp) && wire_port_en_plug3_singleton1)) {
          plug3_currentState_nsf= state_plug3_S3;
        }
        else {
          if(((plug3_currentState == state_plug3_S2) && wire_port_en_plug3_recieveFromServer)) {
            plug3_currentState_nsf= state_plug3_S3temp;
          }
          else {
            if(((plug3_currentState == state_plug3_S2) && wire_port_en_plug3_ticker)) {
              plug3_currentState_nsf= state_plug3_S4;
            }
            else {
              if(((plug3_currentState == state_plug3_S6) && wire_port_en_plug3_switchB)) {
                plug3_currentState_nsf= state_plug3_S8;
              }
              else {
                if(((plug3_currentState == state_plug3_S7) && wire_port_en_plug3_ticker)) {
                  plug3_currentState_nsf= state_plug3_S7;
                }
                else {
                  if(((plug3_currentState == state_plug3_S3) && wire_port_en_plug3_recieveFromServer)) {
                    plug3_currentState_nsf= state_plug3_S5temp;
                  }
                  else {
                    if(((plug3_currentState == state_plug3_S3) && wire_port_en_plug3_ticker)) {
                      plug3_currentState_nsf= state_plug3_S6;
                    }
                    else {
                      if(((plug3_currentState == state_plug3_S6temp) && wire_port_en_plug3_singleton1)) {
                        plug3_currentState_nsf= state_plug3_S6;
                      }
                      else {
                        if(((plug3_currentState == state_plug3_S1) && wire_port_en_plug3_sendToChannel)) {
                          plug3_currentState_nsf= state_plug3_S2;
                        }
                        else {
                          if(((plug3_currentState == state_plug3_S5temp) && wire_port_en_plug3_singleton1)) {
                            plug3_currentState_nsf= state_plug3_S5;
                          }
                          else {
                            if(((plug3_currentState == state_plug3_S5temp) && wire_port_en_plug3_singleton2)) {
                              plug3_currentState_nsf= state_plug3_S5;
                            }
                            else {
                              if(((plug3_currentState == state_plug3_S4) && wire_port_en_plug3_recieveFromServer)) {
                                plug3_currentState_nsf= state_plug3_S6temp;
                              }
                              else {
                                if(((plug3_currentState == state_plug3_S4) && wire_port_en_plug3_ticker)) {
                                  plug3_currentState_nsf= state_plug3_S4;
                                }
                                else {
                                  if(((plug3_currentState == state_plug3_S8) && wire_port_en_plug3_ticker)) {
                                    plug3_currentState_nsf= state_plug3_S8;
                                  }
                                  else {
                                    plug3_currentState_nsf= plug3_currentState;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((plug3_currentState == state_plug3_S5temp) && wire_port_en_plug3_singleton1)) {
      var_plug3_trigger_nsf= false;
    }
    else {
      if(((plug3_currentState == state_plug3_S5temp) && wire_port_en_plug3_singleton2)) {
        var_plug3_trigger_nsf= true;
      }
      else {
        var_plug3_trigger_nsf= var_plug3_trigger;
      }
    }
    if(((plug3_currentState == state_plug3_S3temp) && wire_port_en_plug3_singleton1)) {
      var_plug3_decidedValue_nsf= var_plug3_decidedValueS;
    }
    else {
      if(((plug3_currentState == state_plug3_S6temp) && wire_port_en_plug3_singleton1)) {
        var_plug3_decidedValue_nsf= var_plug3_decidedValueS;
      }
      else {
        if(((plug3_currentState == state_plug3_S5temp) && wire_port_en_plug3_singleton1)) {
          var_plug3_decidedValue_nsf= var_plug3_proposedValue;
        }
        else {
          var_plug3_decidedValue_nsf= var_plug3_decidedValue;
        }
      }
    }
    if(((plug4_currentState == state_plug4_S5) && wire_port_en_plug4_switchB)) {
      plug4_currentState_nsf= state_plug4_S8;
    }
    else {
      if(((plug4_currentState == state_plug4_S5) && wire_port_en_plug4_sendToClient)) {
        plug4_currentState_nsf= state_plug4_S7;
      }
      else {
        if(((plug4_currentState == state_plug4_S3temp) && wire_port_en_plug4_singleton1)) {
          plug4_currentState_nsf= state_plug4_S3;
        }
        else {
          if(((plug4_currentState == state_plug4_S2) && wire_port_en_plug4_recieveFromServer)) {
            plug4_currentState_nsf= state_plug4_S3temp;
          }
          else {
            if(((plug4_currentState == state_plug4_S2) && wire_port_en_plug4_ticker)) {
              plug4_currentState_nsf= state_plug4_S4;
            }
            else {
              if(((plug4_currentState == state_plug4_S6) && wire_port_en_plug4_switchB)) {
                plug4_currentState_nsf= state_plug4_S8;
              }
              else {
                if(((plug4_currentState == state_plug4_S7) && wire_port_en_plug4_ticker)) {
                  plug4_currentState_nsf= state_plug4_S7;
                }
                else {
                  if(((plug4_currentState == state_plug4_S3) && wire_port_en_plug4_recieveFromServer)) {
                    plug4_currentState_nsf= state_plug4_S5temp;
                  }
                  else {
                    if(((plug4_currentState == state_plug4_S3) && wire_port_en_plug4_ticker)) {
                      plug4_currentState_nsf= state_plug4_S6;
                    }
                    else {
                      if(((plug4_currentState == state_plug4_S6temp) && wire_port_en_plug4_singleton1)) {
                        plug4_currentState_nsf= state_plug4_S6;
                      }
                      else {
                        if(((plug4_currentState == state_plug4_S1) && wire_port_en_plug4_sendToChannel)) {
                          plug4_currentState_nsf= state_plug4_S2;
                        }
                        else {
                          if(((plug4_currentState == state_plug4_S5temp) && wire_port_en_plug4_singleton1)) {
                            plug4_currentState_nsf= state_plug4_S5;
                          }
                          else {
                            if(((plug4_currentState == state_plug4_S5temp) && wire_port_en_plug4_singleton2)) {
                              plug4_currentState_nsf= state_plug4_S5;
                            }
                            else {
                              if(((plug4_currentState == state_plug4_S4) && wire_port_en_plug4_recieveFromServer)) {
                                plug4_currentState_nsf= state_plug4_S6temp;
                              }
                              else {
                                if(((plug4_currentState == state_plug4_S4) && wire_port_en_plug4_ticker)) {
                                  plug4_currentState_nsf= state_plug4_S4;
                                }
                                else {
                                  if(((plug4_currentState == state_plug4_S8) && wire_port_en_plug4_ticker)) {
                                    plug4_currentState_nsf= state_plug4_S8;
                                  }
                                  else {
                                    plug4_currentState_nsf= plug4_currentState;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((plug4_currentState == state_plug4_S5temp) && wire_port_en_plug4_singleton1)) {
      var_plug4_trigger_nsf= false;
    }
    else {
      if(((plug4_currentState == state_plug4_S5temp) && wire_port_en_plug4_singleton2)) {
        var_plug4_trigger_nsf= true;
      }
      else {
        var_plug4_trigger_nsf= var_plug4_trigger;
      }
    }
    if(((plug4_currentState == state_plug4_S3temp) && wire_port_en_plug4_singleton1)) {
      var_plug4_decidedValue_nsf= var_plug4_decidedValueS;
    }
    else {
      if(((plug4_currentState == state_plug4_S6temp) && wire_port_en_plug4_singleton1)) {
        var_plug4_decidedValue_nsf= var_plug4_decidedValueS;
      }
      else {
        if(((plug4_currentState == state_plug4_S5temp) && wire_port_en_plug4_singleton1)) {
          var_plug4_decidedValue_nsf= var_plug4_proposedValue;
        }
        else {
          var_plug4_decidedValue_nsf= var_plug4_decidedValue;
        }
      }
    }
    if(((plugC1_currentState == state_plugC1_sendServer_rcvFServer) && wire_port_en_plugC1_SendS1)) {
      plugC1_currentState_nsf= state_plugC1_sendServer_rcvFServer;
    }
    else {
      if(((plugC1_currentState == state_plugC1_sendServer_rcvFServer) && wire_port_en_plugC1_SendS2)) {
        plugC1_currentState_nsf= state_plugC1_sendServer_rcvFServer;
      }
      else {
        if(((plugC1_currentState == state_plugC1_sendServer_rcvFServer) && wire_port_en_plugC1_rcvServer)) {
          plugC1_currentState_nsf= state_plugC1_sendServer_sendTClient;
        }
        else {
          if(((plugC1_currentState == state_plugC1_start_rcvFServer) && wire_port_en_plugC1_rcvPlug)) {
            plugC1_currentState_nsf= state_plugC1_sendServer_rcvFServer;
          }
          else {
            if(((plugC1_currentState == state_plugC1_start_rcvFServer) && wire_port_en_plugC1_rcvServer)) {
              plugC1_currentState_nsf= state_plugC1_start_sendTClient;
            }
            else {
              if(((plugC1_currentState == state_plugC1_start_sendTClient) && wire_port_en_plugC1_rcvPlug)) {
                plugC1_currentState_nsf= state_plugC1_sendServer_sendTClient;
              }
              else {
                if(((plugC1_currentState == state_plugC1_start_sendTClient) && wire_port_en_plugC1_sendClient)) {
                  plugC1_currentState_nsf= state_plugC1_start_rcvFServer;
                }
                else {
                  if(((plugC1_currentState == state_plugC1_sendServer_sendTClient) && wire_port_en_plugC1_SendS1)) {
                    plugC1_currentState_nsf= state_plugC1_sendServer_sendTClient;
                  }
                  else {
                    if(((plugC1_currentState == state_plugC1_sendServer_sendTClient) && wire_port_en_plugC1_SendS2)) {
                      plugC1_currentState_nsf= state_plugC1_sendServer_sendTClient;
                    }
                    else {
                      if(((plugC1_currentState == state_plugC1_sendServer_sendTClient) && wire_port_en_plugC1_sendClient)) {
                        plugC1_currentState_nsf= state_plugC1_sendServer_rcvFServer;
                      }
                      else {
                        plugC1_currentState_nsf= plugC1_currentState;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((plugC1_currentState == state_plugC1_sendServer_rcvFServer) && wire_port_en_plugC1_SendS1)) {
      var_plugC1_server1_nsf= true;
    }
    else {
      if(((plugC1_currentState == state_plugC1_sendServer_sendTClient) && wire_port_en_plugC1_SendS1)) {
        var_plugC1_server1_nsf= true;
      }
      else {
        var_plugC1_server1_nsf= var_plugC1_server1;
      }
    }
    if(((plugC1_currentState == state_plugC1_sendServer_rcvFServer) && wire_port_en_plugC1_SendS2)) {
      var_plugC1_server2_nsf= true;
    }
    else {
      if(((plugC1_currentState == state_plugC1_sendServer_sendTClient) && wire_port_en_plugC1_SendS2)) {
        var_plugC1_server2_nsf= true;
      }
      else {
        var_plugC1_server2_nsf= var_plugC1_server2;
      }
    }
    if(((plugC2_currentState == state_plugC2_sendServer_rcvFServer) && wire_port_en_plugC2_SendS1)) {
      plugC2_currentState_nsf= state_plugC2_sendServer_rcvFServer;
    }
    else {
      if(((plugC2_currentState == state_plugC2_sendServer_rcvFServer) && wire_port_en_plugC2_SendS2)) {
        plugC2_currentState_nsf= state_plugC2_sendServer_rcvFServer;
      }
      else {
        if(((plugC2_currentState == state_plugC2_sendServer_rcvFServer) && wire_port_en_plugC2_rcvServer)) {
          plugC2_currentState_nsf= state_plugC2_sendServer_sendTClient;
        }
        else {
          if(((plugC2_currentState == state_plugC2_start_rcvFServer) && wire_port_en_plugC2_rcvPlug)) {
            plugC2_currentState_nsf= state_plugC2_sendServer_rcvFServer;
          }
          else {
            if(((plugC2_currentState == state_plugC2_start_rcvFServer) && wire_port_en_plugC2_rcvServer)) {
              plugC2_currentState_nsf= state_plugC2_start_sendTClient;
            }
            else {
              if(((plugC2_currentState == state_plugC2_start_sendTClient) && wire_port_en_plugC2_rcvPlug)) {
                plugC2_currentState_nsf= state_plugC2_sendServer_sendTClient;
              }
              else {
                if(((plugC2_currentState == state_plugC2_start_sendTClient) && wire_port_en_plugC2_sendClient)) {
                  plugC2_currentState_nsf= state_plugC2_start_rcvFServer;
                }
                else {
                  if(((plugC2_currentState == state_plugC2_sendServer_sendTClient) && wire_port_en_plugC2_SendS1)) {
                    plugC2_currentState_nsf= state_plugC2_sendServer_sendTClient;
                  }
                  else {
                    if(((plugC2_currentState == state_plugC2_sendServer_sendTClient) && wire_port_en_plugC2_SendS2)) {
                      plugC2_currentState_nsf= state_plugC2_sendServer_sendTClient;
                    }
                    else {
                      if(((plugC2_currentState == state_plugC2_sendServer_sendTClient) && wire_port_en_plugC2_sendClient)) {
                        plugC2_currentState_nsf= state_plugC2_sendServer_rcvFServer;
                      }
                      else {
                        plugC2_currentState_nsf= plugC2_currentState;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((plugC2_currentState == state_plugC2_sendServer_rcvFServer) && wire_port_en_plugC2_SendS1)) {
      var_plugC2_server1_nsf= true;
    }
    else {
      if(((plugC2_currentState == state_plugC2_sendServer_sendTClient) && wire_port_en_plugC2_SendS1)) {
        var_plugC2_server1_nsf= true;
      }
      else {
        var_plugC2_server1_nsf= var_plugC2_server1;
      }
    }
    if(((plugC2_currentState == state_plugC2_sendServer_rcvFServer) && wire_port_en_plugC2_SendS2)) {
      var_plugC2_server2_nsf= true;
    }
    else {
      if(((plugC2_currentState == state_plugC2_sendServer_sendTClient) && wire_port_en_plugC2_SendS2)) {
        var_plugC2_server2_nsf= true;
      }
      else {
        var_plugC2_server2_nsf= var_plugC2_server2;
      }
    }
    if(((plugC3_currentState == state_plugC3_sendServer_rcvFServer) && wire_port_en_plugC3_SendS1)) {
      plugC3_currentState_nsf= state_plugC3_sendServer_rcvFServer;
    }
    else {
      if(((plugC3_currentState == state_plugC3_sendServer_rcvFServer) && wire_port_en_plugC3_SendS2)) {
        plugC3_currentState_nsf= state_plugC3_sendServer_rcvFServer;
      }
      else {
        if(((plugC3_currentState == state_plugC3_sendServer_rcvFServer) && wire_port_en_plugC3_rcvServer)) {
          plugC3_currentState_nsf= state_plugC3_sendServer_sendTClient;
        }
        else {
          if(((plugC3_currentState == state_plugC3_start_rcvFServer) && wire_port_en_plugC3_rcvPlug)) {
            plugC3_currentState_nsf= state_plugC3_sendServer_rcvFServer;
          }
          else {
            if(((plugC3_currentState == state_plugC3_start_rcvFServer) && wire_port_en_plugC3_rcvServer)) {
              plugC3_currentState_nsf= state_plugC3_start_sendTClient;
            }
            else {
              if(((plugC3_currentState == state_plugC3_start_sendTClient) && wire_port_en_plugC3_rcvPlug)) {
                plugC3_currentState_nsf= state_plugC3_sendServer_sendTClient;
              }
              else {
                if(((plugC3_currentState == state_plugC3_start_sendTClient) && wire_port_en_plugC3_sendClient)) {
                  plugC3_currentState_nsf= state_plugC3_start_rcvFServer;
                }
                else {
                  if(((plugC3_currentState == state_plugC3_sendServer_sendTClient) && wire_port_en_plugC3_SendS1)) {
                    plugC3_currentState_nsf= state_plugC3_sendServer_sendTClient;
                  }
                  else {
                    if(((plugC3_currentState == state_plugC3_sendServer_sendTClient) && wire_port_en_plugC3_SendS2)) {
                      plugC3_currentState_nsf= state_plugC3_sendServer_sendTClient;
                    }
                    else {
                      if(((plugC3_currentState == state_plugC3_sendServer_sendTClient) && wire_port_en_plugC3_sendClient)) {
                        plugC3_currentState_nsf= state_plugC3_sendServer_rcvFServer;
                      }
                      else {
                        plugC3_currentState_nsf= plugC3_currentState;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((plugC3_currentState == state_plugC3_sendServer_rcvFServer) && wire_port_en_plugC3_SendS1)) {
      var_plugC3_server1_nsf= true;
    }
    else {
      if(((plugC3_currentState == state_plugC3_sendServer_sendTClient) && wire_port_en_plugC3_SendS1)) {
        var_plugC3_server1_nsf= true;
      }
      else {
        var_plugC3_server1_nsf= var_plugC3_server1;
      }
    }
    if(((plugC3_currentState == state_plugC3_sendServer_rcvFServer) && wire_port_en_plugC3_SendS2)) {
      var_plugC3_server2_nsf= true;
    }
    else {
      if(((plugC3_currentState == state_plugC3_sendServer_sendTClient) && wire_port_en_plugC3_SendS2)) {
        var_plugC3_server2_nsf= true;
      }
      else {
        var_plugC3_server2_nsf= var_plugC3_server2;
      }
    }
    if(((plugC4_currentState == state_plugC4_sendServer_rcvFServer) && wire_port_en_plugC4_SendS1)) {
      plugC4_currentState_nsf= state_plugC4_sendServer_rcvFServer;
    }
    else {
      if(((plugC4_currentState == state_plugC4_sendServer_rcvFServer) && wire_port_en_plugC4_SendS2)) {
        plugC4_currentState_nsf= state_plugC4_sendServer_rcvFServer;
      }
      else {
        if(((plugC4_currentState == state_plugC4_sendServer_rcvFServer) && wire_port_en_plugC4_rcvServer)) {
          plugC4_currentState_nsf= state_plugC4_sendServer_sendTClient;
        }
        else {
          if(((plugC4_currentState == state_plugC4_start_rcvFServer) && wire_port_en_plugC4_rcvPlug)) {
            plugC4_currentState_nsf= state_plugC4_sendServer_rcvFServer;
          }
          else {
            if(((plugC4_currentState == state_plugC4_start_rcvFServer) && wire_port_en_plugC4_rcvServer)) {
              plugC4_currentState_nsf= state_plugC4_start_sendTClient;
            }
            else {
              if(((plugC4_currentState == state_plugC4_start_sendTClient) && wire_port_en_plugC4_rcvPlug)) {
                plugC4_currentState_nsf= state_plugC4_sendServer_sendTClient;
              }
              else {
                if(((plugC4_currentState == state_plugC4_start_sendTClient) && wire_port_en_plugC4_sendClient)) {
                  plugC4_currentState_nsf= state_plugC4_start_rcvFServer;
                }
                else {
                  if(((plugC4_currentState == state_plugC4_sendServer_sendTClient) && wire_port_en_plugC4_SendS1)) {
                    plugC4_currentState_nsf= state_plugC4_sendServer_sendTClient;
                  }
                  else {
                    if(((plugC4_currentState == state_plugC4_sendServer_sendTClient) && wire_port_en_plugC4_SendS2)) {
                      plugC4_currentState_nsf= state_plugC4_sendServer_sendTClient;
                    }
                    else {
                      if(((plugC4_currentState == state_plugC4_sendServer_sendTClient) && wire_port_en_plugC4_sendClient)) {
                        plugC4_currentState_nsf= state_plugC4_sendServer_rcvFServer;
                      }
                      else {
                        plugC4_currentState_nsf= plugC4_currentState;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((plugC4_currentState == state_plugC4_sendServer_rcvFServer) && wire_port_en_plugC4_SendS1)) {
      var_plugC4_server1_nsf= true;
    }
    else {
      if(((plugC4_currentState == state_plugC4_sendServer_sendTClient) && wire_port_en_plugC4_SendS1)) {
        var_plugC4_server1_nsf= true;
      }
      else {
        var_plugC4_server1_nsf= var_plugC4_server1;
      }
    }
    if(((plugC4_currentState == state_plugC4_sendServer_rcvFServer) && wire_port_en_plugC4_SendS2)) {
      var_plugC4_server2_nsf= true;
    }
    else {
      if(((plugC4_currentState == state_plugC4_sendServer_sendTClient) && wire_port_en_plugC4_SendS2)) {
        var_plugC4_server2_nsf= true;
      }
      else {
        var_plugC4_server2_nsf= var_plugC4_server2;
      }
    }
    if(((serverC1_currentState == state_serverC1_sendTServer_sendPlugC) && wire_port_en_serverC1_loose)) {
      serverC1_currentState_nsf= state_serverC1_crash_sendPlugC;
    }
    else {
      if(((serverC1_currentState == state_serverC1_sendTServer_sendPlugC) && wire_port_en_serverC1_msglost)) {
        serverC1_currentState_nsf= state_serverC1_rcvPlug_sendPlugC;
      }
      else {
        if(((serverC1_currentState == state_serverC1_sendTServer_sendPlugC) && wire_port_en_serverC1_sendServer)) {
          serverC1_currentState_nsf= state_serverC1_rcvPlug_sendPlugC;
        }
        else {
          if(((serverC1_currentState == state_serverC1_sendTServer_sendPlugC) && wire_port_en_serverC1_sendPlug)) {
            serverC1_currentState_nsf= state_serverC1_sendTServer_rcvFServer;
          }
          else {
            if(((serverC1_currentState == state_serverC1_crash_rcvFServer) && wire_port_en_serverC1_rcvPlugC)) {
              serverC1_currentState_nsf= state_serverC1_crash_rcvFServer;
            }
            else {
              if(((serverC1_currentState == state_serverC1_crash_rcvFServer) && wire_port_en_serverC1_rcvServer)) {
                serverC1_currentState_nsf= state_serverC1_crash_sendPlugC;
              }
              else {
                if(((serverC1_currentState == state_serverC1_sendTServer_rcvFServer) && wire_port_en_serverC1_loose)) {
                  serverC1_currentState_nsf= state_serverC1_crash_rcvFServer;
                }
                else {
                  if(((serverC1_currentState == state_serverC1_sendTServer_rcvFServer) && wire_port_en_serverC1_msglost)) {
                    serverC1_currentState_nsf= state_serverC1_rcvPlug_rcvFServer;
                  }
                  else {
                    if(((serverC1_currentState == state_serverC1_sendTServer_rcvFServer) && wire_port_en_serverC1_sendServer)) {
                      serverC1_currentState_nsf= state_serverC1_rcvPlug_rcvFServer;
                    }
                    else {
                      if(((serverC1_currentState == state_serverC1_sendTServer_rcvFServer) && wire_port_en_serverC1_rcvServer)) {
                        serverC1_currentState_nsf= state_serverC1_sendTServer_sendPlugC;
                      }
                      else {
                        if(((serverC1_currentState == state_serverC1_rcvPlug_rcvFServer) && wire_port_en_serverC1_rcvPlugC)) {
                          serverC1_currentState_nsf= state_serverC1_sendTServer_rcvFServer;
                        }
                        else {
                          if(((serverC1_currentState == state_serverC1_rcvPlug_rcvFServer) && wire_port_en_serverC1_rcvServer)) {
                            serverC1_currentState_nsf= state_serverC1_rcvPlug_sendPlugC;
                          }
                          else {
                            if(((serverC1_currentState == state_serverC1_rcvPlug_sendPlugC) && wire_port_en_serverC1_rcvPlugC)) {
                              serverC1_currentState_nsf= state_serverC1_sendTServer_sendPlugC;
                            }
                            else {
                              if(((serverC1_currentState == state_serverC1_rcvPlug_sendPlugC) && wire_port_en_serverC1_sendPlug)) {
                                serverC1_currentState_nsf= state_serverC1_rcvPlug_rcvFServer;
                              }
                              else {
                                if(((serverC1_currentState == state_serverC1_crash_sendPlugC) && wire_port_en_serverC1_rcvPlugC)) {
                                  serverC1_currentState_nsf= state_serverC1_crash_sendPlugC;
                                }
                                else {
                                  if(((serverC1_currentState == state_serverC1_crash_sendPlugC) && wire_port_en_serverC1_sendPlug)) {
                                    serverC1_currentState_nsf= state_serverC1_crash_rcvFServer;
                                  }
                                  else {
                                    serverC1_currentState_nsf= serverC1_currentState;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((serverC2_currentState == state_serverC2_sendTServer_sendPlugC) && wire_port_en_serverC2_loose)) {
      serverC2_currentState_nsf= state_serverC2_crash_sendPlugC;
    }
    else {
      if(((serverC2_currentState == state_serverC2_sendTServer_sendPlugC) && wire_port_en_serverC2_msglost)) {
        serverC2_currentState_nsf= state_serverC2_rcvPlug_sendPlugC;
      }
      else {
        if(((serverC2_currentState == state_serverC2_sendTServer_sendPlugC) && wire_port_en_serverC2_sendServer)) {
          serverC2_currentState_nsf= state_serverC2_rcvPlug_sendPlugC;
        }
        else {
          if(((serverC2_currentState == state_serverC2_sendTServer_sendPlugC) && wire_port_en_serverC2_sendPlug)) {
            serverC2_currentState_nsf= state_serverC2_sendTServer_rcvFServer;
          }
          else {
            if(((serverC2_currentState == state_serverC2_crash_rcvFServer) && wire_port_en_serverC2_rcvPlugC)) {
              serverC2_currentState_nsf= state_serverC2_crash_rcvFServer;
            }
            else {
              if(((serverC2_currentState == state_serverC2_crash_rcvFServer) && wire_port_en_serverC2_rcvServer)) {
                serverC2_currentState_nsf= state_serverC2_crash_sendPlugC;
              }
              else {
                if(((serverC2_currentState == state_serverC2_sendTServer_rcvFServer) && wire_port_en_serverC2_loose)) {
                  serverC2_currentState_nsf= state_serverC2_crash_rcvFServer;
                }
                else {
                  if(((serverC2_currentState == state_serverC2_sendTServer_rcvFServer) && wire_port_en_serverC2_msglost)) {
                    serverC2_currentState_nsf= state_serverC2_rcvPlug_rcvFServer;
                  }
                  else {
                    if(((serverC2_currentState == state_serverC2_sendTServer_rcvFServer) && wire_port_en_serverC2_sendServer)) {
                      serverC2_currentState_nsf= state_serverC2_rcvPlug_rcvFServer;
                    }
                    else {
                      if(((serverC2_currentState == state_serverC2_sendTServer_rcvFServer) && wire_port_en_serverC2_rcvServer)) {
                        serverC2_currentState_nsf= state_serverC2_sendTServer_sendPlugC;
                      }
                      else {
                        if(((serverC2_currentState == state_serverC2_rcvPlug_rcvFServer) && wire_port_en_serverC2_rcvPlugC)) {
                          serverC2_currentState_nsf= state_serverC2_sendTServer_rcvFServer;
                        }
                        else {
                          if(((serverC2_currentState == state_serverC2_rcvPlug_rcvFServer) && wire_port_en_serverC2_rcvServer)) {
                            serverC2_currentState_nsf= state_serverC2_rcvPlug_sendPlugC;
                          }
                          else {
                            if(((serverC2_currentState == state_serverC2_rcvPlug_sendPlugC) && wire_port_en_serverC2_rcvPlugC)) {
                              serverC2_currentState_nsf= state_serverC2_sendTServer_sendPlugC;
                            }
                            else {
                              if(((serverC2_currentState == state_serverC2_rcvPlug_sendPlugC) && wire_port_en_serverC2_sendPlug)) {
                                serverC2_currentState_nsf= state_serverC2_rcvPlug_rcvFServer;
                              }
                              else {
                                if(((serverC2_currentState == state_serverC2_crash_sendPlugC) && wire_port_en_serverC2_rcvPlugC)) {
                                  serverC2_currentState_nsf= state_serverC2_crash_sendPlugC;
                                }
                                else {
                                  if(((serverC2_currentState == state_serverC2_crash_sendPlugC) && wire_port_en_serverC2_sendPlug)) {
                                    serverC2_currentState_nsf= state_serverC2_crash_rcvFServer;
                                  }
                                  else {
                                    serverC2_currentState_nsf= serverC2_currentState;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if(((s1_currentState == state_s1_SEND) && wire_port_en_s1_SendToServerC)) {
      s1_currentState_nsf= state_s1_RECEIVE;
    }
    else {
      if(((s1_currentState == state_s1_RECEIVE) && wire_port_en_s1_RcvFromChannel)) {
        s1_currentState_nsf= state_s1_SEND_TEMP;
      }
      else {
        if(((s1_currentState == state_s1_SEND_TEMP) && wire_port_en_s1_singleton1)) {
          s1_currentState_nsf= state_s1_SEND;
        }
        else {
          if(((s1_currentState == state_s1_SEND_TEMP) && wire_port_en_s1_singleton2)) {
            s1_currentState_nsf= state_s1_SEND;
          }
          else {
            s1_currentState_nsf= s1_currentState;
          }
        }
      }
    }
    if(((s1_currentState == state_s1_SEND_TEMP) && wire_port_en_s1_singleton1)) {
      var_s1_decidedValue_nsf= var_s1_proposedValue;
    }
    else {
      var_s1_decidedValue_nsf= var_s1_decidedValue;
    }
    if(((s2_currentState == state_s2_SEND) && wire_port_en_s2_SendToServerC)) {
      s2_currentState_nsf= state_s2_RECEIVE;
    }
    else {
      if(((s2_currentState == state_s2_RECEIVE) && wire_port_en_s2_RcvFromChannel)) {
        s2_currentState_nsf= state_s2_SEND_TEMP;
      }
      else {
        if(((s2_currentState == state_s2_SEND_TEMP) && wire_port_en_s2_singleton1)) {
          s2_currentState_nsf= state_s2_SEND;
        }
        else {
          if(((s2_currentState == state_s2_SEND_TEMP) && wire_port_en_s2_singleton2)) {
            s2_currentState_nsf= state_s2_SEND;
          }
          else {
            s2_currentState_nsf= s2_currentState;
          }
        }
      }
    }
    if(((s2_currentState == state_s2_SEND_TEMP) && wire_port_en_s2_singleton1)) {
      var_s2_decidedValue_nsf= var_s2_proposedValue;
    }
    else {
      var_s2_decidedValue_nsf= var_s2_decidedValue;
    }
  }
  var_s1_serverId = var_s1_serverId_nsf;
  var_plug1_trigger = var_plug1_trigger_nsf;
  var_plug1_serverId = var_plug1_serverId_nsf;
  var_plug4_decidedValueS = var_plug4_decidedValueS_nsf;
  plugC3_currentState = plugC3_currentState_nsf;
  var_plug2_trigger = var_plug2_trigger_nsf;
  var_plugC2_decidedValue = var_plugC2_decidedValue_nsf;
  plug3_currentState = plug3_currentState_nsf;
  var_plugC4_server2 = var_plugC4_server2_nsf;
  serverC2_currentState = serverC2_currentState_nsf;
  var_s1_ClientId = var_s1_ClientId_nsf;
  var_plugC4_server1 = var_plugC4_server1_nsf;
  var_plugC4_decidedValue = var_plugC4_decidedValue_nsf;
  plugC4_currentState = plugC4_currentState_nsf;
  var_serverC2_serverId = var_serverC2_serverId_nsf;
  var_plug2_decidedValue = var_plug2_decidedValue_nsf;
  var_serverC1_serverId = var_serverC1_serverId_nsf;
  var_plugC4_clientId = var_plugC4_clientId_nsf;
  var_plug4_proposedValue = var_plug4_proposedValue_nsf;
  var_plug1_decidedValue = var_plug1_decidedValue_nsf;
  serverC1_currentState = serverC1_currentState_nsf;
  var_plug3_decidedValueS = var_plug3_decidedValueS_nsf;
  var_plugC3_clientId = var_plugC3_clientId_nsf;
  var_serverC1_proposed = var_serverC1_proposed_nsf;
  var_plugC1_serverId = var_plugC1_serverId_nsf;
  var_serverC2_clientIdRcv = var_serverC2_clientIdRcv_nsf;
  var_plug4_serverId = var_plug4_serverId_nsf;
  var_serverC2_clientIdSend = var_serverC2_clientIdSend_nsf;
  var_plug2_serverId = var_plug2_serverId_nsf;
  var_plugC1_clientId = var_plugC1_clientId_nsf;
  var_plugC2_serverId = var_plugC2_serverId_nsf;
  var_plugC1_decidedValue = var_plugC1_decidedValue_nsf;
  var_s1_proposedValue = var_s1_proposedValue_nsf;
  plug2_currentState = plug2_currentState_nsf;
  var_s2_decidedValue = var_s2_decidedValue_nsf;
  var_plug3_serverId = var_plug3_serverId_nsf;
  var_plugC3_serverId = var_plugC3_serverId_nsf;
  plug1_currentState = plug1_currentState_nsf;
  var_plugC1_server1 = var_plugC1_server1_nsf;
  var_plugC4_serverId = var_plugC4_serverId_nsf;
  var_plugC1_server2 = var_plugC1_server2_nsf;
  var_s2_serverId = var_s2_serverId_nsf;
  var_plugC1_proposedValue = var_plugC1_proposedValue_nsf;
  var_plug1_proposedValue = var_plug1_proposedValue_nsf;
  var_plug2_proposedValue = var_plug2_proposedValue_nsf;
  var_plugC3_proposedValue = var_plugC3_proposedValue_nsf;
  var_plug3_trigger = var_plug3_trigger_nsf;
  s1_currentState = s1_currentState_nsf;
  var_plugC4_proposedValue = var_plugC4_proposedValue_nsf;
  var_s1_decidedValue = var_s1_decidedValue_nsf;
  var_plugC3_server1 = var_plugC3_server1_nsf;
  var_plugC2_server2 = var_plugC2_server2_nsf;
  var_plugC3_server2 = var_plugC3_server2_nsf;
  var_plugC2_server1 = var_plugC2_server1_nsf;
  plugC1_currentState = plugC1_currentState_nsf;
  var_plug3_decidedValue = var_plug3_decidedValue_nsf;
  var_plug2_decidedValueS = var_plug2_decidedValueS_nsf;
  var_serverC2_proposed = var_serverC2_proposed_nsf;
  var_serverC1_decided = var_serverC1_decided_nsf;
  s2_currentState = s2_currentState_nsf;
  var_plugC3_decidedValue = var_plugC3_decidedValue_nsf;
  var_plug4_decidedValue = var_plug4_decidedValue_nsf;
  var_plugC2_proposedValue = var_plugC2_proposedValue_nsf;
  var_s2_ClientId = var_s2_ClientId_nsf;
  var_serverC1_clientIdSend = var_serverC1_clientIdSend_nsf;
  plug4_currentState = plug4_currentState_nsf;
  var_s2_proposedValue = var_s2_proposedValue_nsf;
  var_plug3_proposedValue = var_plug3_proposedValue_nsf;
  var_serverC2_decided = var_serverC2_decided_nsf;
  var_plug1_decidedValueS = var_plug1_decidedValueS_nsf;
  plugC2_currentState = plugC2_currentState_nsf;
  var_plug4_trigger = var_plug4_trigger_nsf;
  var_plugC2_clientId = var_plugC2_clientId_nsf;
  var_serverC1_clientIdRcv = var_serverC1_clientIdRcv_nsf;
cout << "cycle" << " " << __cycle_num__<< ",";
  cout<< "var_s1_serverId" << " " << var_s1_serverId << ","; 
  cout<< "var_plug1_trigger" << " " << var_plug1_trigger << ","; 
  cout<< "var_plug1_serverId" << " " << var_plug1_serverId << ","; 
  cout<< "var_plug4_decidedValueS" << " " << var_plug4_decidedValueS << ","; 
  cout<< "plugC3_currentState" << " " << plugC3_currentState << ","; 
  cout<< "var_plug2_trigger" << " " << var_plug2_trigger << ","; 
  cout<< "var_plugC2_decidedValue" << " " << var_plugC2_decidedValue << ","; 
  cout<< "plug3_currentState" << " " << plug3_currentState << ","; 
  cout<< "var_plugC4_server2" << " " << var_plugC4_server2 << ","; 
  cout<< "serverC2_currentState" << " " << serverC2_currentState << ","; 
  cout<< "var_s1_ClientId" << " " << var_s1_ClientId << ","; 
  cout<< "var_plugC4_server1" << " " << var_plugC4_server1 << ","; 
  cout<< "var_plugC4_decidedValue" << " " << var_plugC4_decidedValue << ","; 
  cout<< "plugC4_currentState" << " " << plugC4_currentState << ","; 
  cout<< "var_serverC2_serverId" << " " << var_serverC2_serverId << ","; 
  cout<< "var_plug2_decidedValue" << " " << var_plug2_decidedValue << ","; 
  cout<< "var_serverC1_serverId" << " " << var_serverC1_serverId << ","; 
  cout<< "var_plugC4_clientId" << " " << var_plugC4_clientId << ","; 
  cout<< "var_plug4_proposedValue" << " " << var_plug4_proposedValue << ","; 
  cout<< "var_plug1_decidedValue" << " " << var_plug1_decidedValue << ","; 
  cout<< "serverC1_currentState" << " " << serverC1_currentState << ","; 
  cout<< "var_plug3_decidedValueS" << " " << var_plug3_decidedValueS << ","; 
  cout<< "var_plugC3_clientId" << " " << var_plugC3_clientId << ","; 
  cout<< "var_serverC1_proposed" << " " << var_serverC1_proposed << ","; 
  cout<< "var_plugC1_serverId" << " " << var_plugC1_serverId << ","; 
  cout<< "var_serverC2_clientIdRcv" << " " << var_serverC2_clientIdRcv << ","; 
  cout<< "var_plug4_serverId" << " " << var_plug4_serverId << ","; 
  cout<< "var_serverC2_clientIdSend" << " " << var_serverC2_clientIdSend << ","; 
  cout<< "var_plug2_serverId" << " " << var_plug2_serverId << ","; 
  cout<< "var_plugC1_clientId" << " " << var_plugC1_clientId << ","; 
  cout<< "var_plugC2_serverId" << " " << var_plugC2_serverId << ","; 
  cout<< "var_plugC1_decidedValue" << " " << var_plugC1_decidedValue << ","; 
  cout<< "var_s1_proposedValue" << " " << var_s1_proposedValue << ","; 
  cout<< "plug2_currentState" << " " << plug2_currentState << ","; 
  cout<< "var_s2_decidedValue" << " " << var_s2_decidedValue << ","; 
  cout<< "var_plug3_serverId" << " " << var_plug3_serverId << ","; 
  cout<< "var_plugC3_serverId" << " " << var_plugC3_serverId << ","; 
  cout<< "plug1_currentState" << " " << plug1_currentState << ","; 
  cout<< "var_plugC1_server1" << " " << var_plugC1_server1 << ","; 
  cout<< "var_plugC4_serverId" << " " << var_plugC4_serverId << ","; 
  cout<< "var_plugC1_server2" << " " << var_plugC1_server2 << ","; 
  cout<< "var_s2_serverId" << " " << var_s2_serverId << ","; 
  cout<< "var_plugC1_proposedValue" << " " << var_plugC1_proposedValue << ","; 
  cout<< "var_plug1_proposedValue" << " " << var_plug1_proposedValue << ","; 
  cout<< "var_plug2_proposedValue" << " " << var_plug2_proposedValue << ","; 
  cout<< "var_plugC3_proposedValue" << " " << var_plugC3_proposedValue << ","; 
  cout<< "var_plug3_trigger" << " " << var_plug3_trigger << ","; 
  cout<< "s1_currentState" << " " << s1_currentState << ","; 
  cout<< "var_plugC4_proposedValue" << " " << var_plugC4_proposedValue << ","; 
  cout<< "var_s1_decidedValue" << " " << var_s1_decidedValue << ","; 
  cout<< "var_plugC3_server1" << " " << var_plugC3_server1 << ","; 
  cout<< "var_plugC2_server2" << " " << var_plugC2_server2 << ","; 
  cout<< "var_plugC3_server2" << " " << var_plugC3_server2 << ","; 
  cout<< "var_plugC2_server1" << " " << var_plugC2_server1 << ","; 
  cout<< "plugC1_currentState" << " " << plugC1_currentState << ","; 
  cout<< "var_plug3_decidedValue" << " " << var_plug3_decidedValue << ","; 
  cout<< "var_plug2_decidedValueS" << " " << var_plug2_decidedValueS << ","; 
  cout<< "var_serverC2_proposed" << " " << var_serverC2_proposed << ","; 
  cout<< "var_serverC1_decided" << " " << var_serverC1_decided << ","; 
  cout<< "s2_currentState" << " " << s2_currentState << ","; 
  cout<< "var_plugC3_decidedValue" << " " << var_plugC3_decidedValue << ","; 
  cout<< "var_plug4_decidedValue" << " " << var_plug4_decidedValue << ","; 
  cout<< "var_plugC2_proposedValue" << " " << var_plugC2_proposedValue << ","; 
  cout<< "var_s2_ClientId" << " " << var_s2_ClientId << ","; 
  cout<< "var_serverC1_clientIdSend" << " " << var_serverC1_clientIdSend << ","; 
  cout<< "plug4_currentState" << " " << plug4_currentState << ","; 
  cout<< "var_s2_proposedValue" << " " << var_s2_proposedValue << ","; 
  cout<< "var_plug3_proposedValue" << " " << var_plug3_proposedValue << ","; 
  cout<< "var_serverC2_decided" << " " << var_serverC2_decided << ","; 
  cout<< "var_plug1_decidedValueS" << " " << var_plug1_decidedValueS << ","; 
  cout<< "plugC2_currentState" << " " << plugC2_currentState << ","; 
  cout<< "var_plug4_trigger" << " " << var_plug4_trigger << ","; 
  cout<< "var_plugC2_clientId" << " " << var_plugC2_clientId << ","; 
  cout<< "var_serverC1_clientIdRcv" << " " << var_serverC1_clientIdRcv << ","; 
  for(int i = 0; i < 56; i++) 
  	if(interactions_enablement[i] == true) cout<< "selected" << " "  << i << ","; 
  cout<< endl;
__cycle_num__++;
}
}
