#include<iostream>;
#include<stdlib.h>;
#include<time.h>;
using namespace std;
#define wire
#define boolean bool
int main() {
  int __cycle_num__ = 0;
  int __sed = time(NULL);
  srand (__sed);
cout<< "The sed is " << __sed << endl;
  int __interactionsArray__[27] = {16, 24, 25, 19, 12, 20, 22, 18, 27, 13, 28, 29, 23, 10, 31, 11, 5, 3, 17, 19, 12, 20, 21, 23, 14, 0, 4};
int var_plug1_decidedValueS;
  int var_plug1_decidedValueS_nsf;
int var_plug1_serverId;
  int var_plug1_serverId_nsf;
int var_plug1_proposedValue;
  int var_plug1_proposedValue_nsf;
int var_plug1_decidedValue;
  int var_plug1_decidedValue_nsf;
boolean var_plug1_trigger;
  boolean var_plug1_trigger_nsf;
int var_plug1_id;
  int var_plug1_id_nsf;
int var_plug2_decidedValueS;
  int var_plug2_decidedValueS_nsf;
int var_plug2_serverId;
  int var_plug2_serverId_nsf;
int var_plug2_proposedValue;
  int var_plug2_proposedValue_nsf;
int var_plug2_decidedValue;
  int var_plug2_decidedValue_nsf;
boolean var_plug2_trigger;
  boolean var_plug2_trigger_nsf;
int var_plug2_id;
  int var_plug2_id_nsf;
int var_plugC1_decidedValue;
  int var_plugC1_decidedValue_nsf;
boolean var_plugC1_server2;
  boolean var_plugC1_server2_nsf;
int var_plugC1_clientId;
  int var_plugC1_clientId_nsf;
boolean var_plugC1_server1;
  boolean var_plugC1_server1_nsf;
int var_plugC1_serverId;
  int var_plugC1_serverId_nsf;
int var_plugC1_proposedValue;
  int var_plugC1_proposedValue_nsf;
int var_plugC1_id;
  int var_plugC1_id_nsf;
int var_plugC2_decidedValue;
  int var_plugC2_decidedValue_nsf;
boolean var_plugC2_server2;
  boolean var_plugC2_server2_nsf;
int var_plugC2_clientId;
  int var_plugC2_clientId_nsf;
boolean var_plugC2_server1;
  boolean var_plugC2_server1_nsf;
int var_plugC2_serverId;
  int var_plugC2_serverId_nsf;
int var_plugC2_proposedValue;
  int var_plugC2_proposedValue_nsf;
int var_plugC2_id;
  int var_plugC2_id_nsf;
int var_serverC1_proposed;
  int var_serverC1_proposed_nsf;
int var_serverC1_clientIdRcv;
  int var_serverC1_clientIdRcv_nsf;
int var_serverC1_decided;
  int var_serverC1_decided_nsf;
int var_serverC1_serverId;
  int var_serverC1_serverId_nsf;
int var_serverC1_clientIdSend;
  int var_serverC1_clientIdSend_nsf;
int var_serverC1_id;
  int var_serverC1_id_nsf;
int var_serverC2_proposed;
  int var_serverC2_proposed_nsf;
int var_serverC2_clientIdRcv;
  int var_serverC2_clientIdRcv_nsf;
int var_serverC2_decided;
  int var_serverC2_decided_nsf;
int var_serverC2_serverId;
  int var_serverC2_serverId_nsf;
int var_serverC2_clientIdSend;
  int var_serverC2_clientIdSend_nsf;
int var_serverC2_id;
  int var_serverC2_id_nsf;
int var_s1_proposedValue;
  int var_s1_proposedValue_nsf;
int var_s1_decidedValue;
  int var_s1_decidedValue_nsf;
int var_s1_ClientId;
  int var_s1_ClientId_nsf;
int var_s1_serverId;
  int var_s1_serverId_nsf;
int var_s1_id;
  int var_s1_id_nsf;
int var_s2_proposedValue;
  int var_s2_proposedValue_nsf;
int var_s2_decidedValue;
  int var_s2_decidedValue_nsf;
int var_s2_ClientId;
  int var_s2_ClientId_nsf;
int var_s2_serverId;
  int var_s2_serverId_nsf;
int var_s2_id;
  int var_s2_id_nsf;
wire int wire_selector;
int plug1_currentState;
  int plug1_currentState_nsf;
int plug2_currentState;
  int plug2_currentState_nsf;
int plugC1_currentState;
  int plugC1_currentState_nsf;
int plugC2_currentState;
  int plugC2_currentState_nsf;
int serverC1_currentState;
  int serverC1_currentState_nsf;
int serverC2_currentState;
  int serverC2_currentState_nsf;
int s1_currentState;
  int s1_currentState_nsf;
int s2_currentState;
  int s2_currentState_nsf;
wire boolean wire_port_loc_en_plug1_ticker;
wire boolean wire_port_en_plug1_ticker;
wire boolean wire_port_loc_en_plug1_switchB;
wire boolean wire_port_en_plug1_switchB;
wire boolean wire_port_loc_en_plug1_sendToChannel;
wire boolean wire_port_en_plug1_sendToChannel;
wire boolean wire_port_loc_en_plug1_singleton1;
wire boolean wire_port_en_plug1_singleton1;
wire boolean wire_port_loc_en_plug1_sendToClient;
wire boolean wire_port_en_plug1_sendToClient;
wire boolean wire_port_loc_en_plug1_singleton2;
wire boolean wire_port_en_plug1_singleton2;
wire boolean wire_port_loc_en_plug1_recieveFromServer;
wire boolean wire_port_en_plug1_recieveFromServer;
wire boolean wire_port_loc_en_plug2_ticker;
wire boolean wire_port_en_plug2_ticker;
wire boolean wire_port_loc_en_plug2_switchB;
wire boolean wire_port_en_plug2_switchB;
wire boolean wire_port_loc_en_plug2_sendToChannel;
wire boolean wire_port_en_plug2_sendToChannel;
wire boolean wire_port_loc_en_plug2_singleton1;
wire boolean wire_port_en_plug2_singleton1;
wire boolean wire_port_loc_en_plug2_sendToClient;
wire boolean wire_port_en_plug2_sendToClient;
wire boolean wire_port_loc_en_plug2_singleton2;
wire boolean wire_port_en_plug2_singleton2;
wire boolean wire_port_loc_en_plug2_recieveFromServer;
wire boolean wire_port_en_plug2_recieveFromServer;
wire boolean wire_port_loc_en_plugC1_SendS2;
wire boolean wire_port_en_plugC1_SendS2;
wire boolean wire_port_loc_en_plugC1_rcvServer;
wire boolean wire_port_en_plugC1_rcvServer;
wire boolean wire_port_loc_en_plugC1_sendClient;
wire boolean wire_port_en_plugC1_sendClient;
wire boolean wire_port_loc_en_plugC1_rcvPlug;
wire boolean wire_port_en_plugC1_rcvPlug;
wire boolean wire_port_loc_en_plugC1_SendS1;
wire boolean wire_port_en_plugC1_SendS1;
wire boolean wire_port_loc_en_plugC2_SendS2;
wire boolean wire_port_en_plugC2_SendS2;
wire boolean wire_port_loc_en_plugC2_rcvServer;
wire boolean wire_port_en_plugC2_rcvServer;
wire boolean wire_port_loc_en_plugC2_sendClient;
wire boolean wire_port_en_plugC2_sendClient;
wire boolean wire_port_loc_en_plugC2_rcvPlug;
wire boolean wire_port_en_plugC2_rcvPlug;
wire boolean wire_port_loc_en_plugC2_SendS1;
wire boolean wire_port_en_plugC2_SendS1;
wire boolean wire_port_loc_en_serverC1_rcvPlugC;
wire boolean wire_port_en_serverC1_rcvPlugC;
wire boolean wire_port_loc_en_serverC1_loose;
wire boolean wire_port_en_serverC1_loose;
wire boolean wire_port_loc_en_serverC1_msglost;
wire boolean wire_port_en_serverC1_msglost;
wire boolean wire_port_loc_en_serverC1_rcvServer;
wire boolean wire_port_en_serverC1_rcvServer;
wire boolean wire_port_loc_en_serverC1_sendServer;
wire boolean wire_port_en_serverC1_sendServer;
wire boolean wire_port_loc_en_serverC1_sendPlug;
wire boolean wire_port_en_serverC1_sendPlug;
wire boolean wire_port_loc_en_serverC2_rcvPlugC;
wire boolean wire_port_en_serverC2_rcvPlugC;
wire boolean wire_port_loc_en_serverC2_loose;
wire boolean wire_port_en_serverC2_loose;
wire boolean wire_port_loc_en_serverC2_msglost;
wire boolean wire_port_en_serverC2_msglost;
wire boolean wire_port_loc_en_serverC2_rcvServer;
wire boolean wire_port_en_serverC2_rcvServer;
wire boolean wire_port_loc_en_serverC2_sendServer;
wire boolean wire_port_en_serverC2_sendServer;
wire boolean wire_port_loc_en_serverC2_sendPlug;
wire boolean wire_port_en_serverC2_sendPlug;
wire boolean wire_port_loc_en_s1_singleton1;
wire boolean wire_port_en_s1_singleton1;
wire boolean wire_port_loc_en_s1_SendToServerC;
wire boolean wire_port_en_s1_SendToServerC;
wire boolean wire_port_loc_en_s1_RcvFromChannel;
wire boolean wire_port_en_s1_RcvFromChannel;
wire boolean wire_port_loc_en_s2_singleton1;
wire boolean wire_port_en_s2_singleton1;
wire boolean wire_port_loc_en_s2_SendToServerC;
wire boolean wire_port_en_s2_SendToServerC;
wire boolean wire_port_loc_en_s2_RcvFromChannel;
wire boolean wire_port_en_s2_RcvFromChannel;
wire boolean  interactions_enablement[32];
wire boolean  interactions_first_enable[32];
const int state_plug1_S5temp = 8;
const int state_plug1_S6temp = 10;
const int state_plug1_S8 = 7;
const int state_plug1_S5 = 4;
const int state_plug1_S4 = 3;
const int state_plug1_S2 = 1;
const int state_plug1_S6 = 5;
const int state_plug1_S7 = 6;
const int state_plug1_S3 = 2;
const int state_plug1_S1 = 0;
const int state_plug1_S3temp = 9;
const int state_plug2_S5temp = 19;
const int state_plug2_S6temp = 21;
const int state_plug2_S8 = 18;
const int state_plug2_S5 = 15;
const int state_plug2_S4 = 14;
const int state_plug2_S2 = 12;
const int state_plug2_S6 = 16;
const int state_plug2_S7 = 17;
const int state_plug2_S3 = 13;
const int state_plug2_S1 = 11;
const int state_plug2_S3temp = 20;
const int state_plugC1_sendServer_rcvFServer = 23;
const int state_plugC1_sendServer_sendTClient = 25;
const int state_plugC1_start_sendTClient = 24;
const int state_plugC1_start_rcvFServer = 22;
const int state_plugC2_sendServer_rcvFServer = 27;
const int state_plugC2_sendServer_sendTClient = 29;
const int state_plugC2_start_sendTClient = 28;
const int state_plugC2_start_rcvFServer = 26;
const int state_serverC1_crash_rcvFServer = 32;
const int state_serverC1_sendTServer_rcvFServer = 31;
const int state_serverC1_sendTServer_sendPlugC = 34;
const int state_serverC1_rcvPlug_sendPlugC = 33;
const int state_serverC1_crash_sendPlugC = 35;
const int state_serverC1_rcvPlug_rcvFServer = 30;
const int state_serverC2_crash_rcvFServer = 38;
const int state_serverC2_sendTServer_rcvFServer = 37;
const int state_serverC2_sendTServer_sendPlugC = 40;
const int state_serverC2_rcvPlug_sendPlugC = 39;
const int state_serverC2_crash_sendPlugC = 41;
const int state_serverC2_rcvPlug_rcvFServer = 36;
const int state_s1_RECEIVE = 42;
const int state_s1_SEND_TEMP = 44;
const int state_s1_SEND = 43;
const int state_s2_RECEIVE = 45;
const int state_s2_SEND_TEMP = 47;
const int state_s2_SEND = 46;
{
  var_plug1_id = 1;
  var_plug2_id = 2;
  var_plugC1_id = 1;
  var_plugC2_id = 2;
  var_serverC1_id = 1;
  var_serverC2_id = 2;
  var_s1_id = 1;
  var_s2_id = 2;
}
{
  var_plug1_proposedValue = var_plug1_id; var_plug1_decidedValue = 0; var_plug1_trigger = false; var_plug1_serverId = 0; 
  plug1_currentState = 0;
  var_plug2_proposedValue = var_plug2_id; var_plug2_decidedValue = 0; var_plug2_trigger = false; var_plug2_serverId = 0; 
  plug2_currentState = 11;
  var_plugC1_server1 = false; var_plugC1_server2 = false; var_plugC1_clientId = var_plugC1_id; 
  plugC1_currentState = 22;
  var_plugC2_server1 = false; var_plugC2_server2 = false; var_plugC2_clientId = var_plugC2_id; 
  plugC2_currentState = 26;
  var_serverC1_serverId = var_serverC1_id; 
  serverC1_currentState = 30;
  var_serverC2_serverId = var_serverC2_id; 
  serverC2_currentState = 36;
  var_s1_serverId = var_s1_id; var_s1_decidedValue = 0; 
  s1_currentState = 42;
  var_s2_serverId = var_s2_id; var_s2_decidedValue = 0; 
  s2_currentState = 45;
}
while(true) {
  wire_selector = __interactionsArray__[__cycle_num__];
{
    wire_port_loc_en_plug1_ticker = (((((false || (state_plug1_S2 == plug1_currentState)) || (state_plug1_S3 == plug1_currentState)) || (state_plug1_S7 == plug1_currentState)) || (state_plug1_S8 == plug1_currentState)) || (state_plug1_S4 == plug1_currentState));
    wire_port_loc_en_plug1_switchB = ((false || (state_plug1_S6 == plug1_currentState)) || ((state_plug1_S5 == plug1_currentState) && !var_plug1_trigger));
    wire_port_loc_en_plug1_sendToChannel = (false || (state_plug1_S1 == plug1_currentState));
    wire_port_loc_en_plug1_singleton1 = (((false || (state_plug1_S3temp == plug1_currentState)) || (state_plug1_S6temp == plug1_currentState)) || ((state_plug1_S5temp == plug1_currentState) && var_plug1_decidedValue != var_plug1_decidedValueS));
    wire_port_loc_en_plug1_sendToClient = (false || ((state_plug1_S5 == plug1_currentState) && var_plug1_trigger));
    wire_port_loc_en_plug1_singleton2 = (false || ((state_plug1_S5temp == plug1_currentState) && var_plug1_decidedValue == var_plug1_decidedValueS));
    wire_port_loc_en_plug1_recieveFromServer = (((false || (state_plug1_S2 == plug1_currentState)) || (state_plug1_S4 == plug1_currentState)) || (state_plug1_S3 == plug1_currentState));
    wire_port_loc_en_plug2_ticker = (((((false || (state_plug2_S2 == plug2_currentState)) || (state_plug2_S3 == plug2_currentState)) || (state_plug2_S7 == plug2_currentState)) || (state_plug2_S8 == plug2_currentState)) || (state_plug2_S4 == plug2_currentState));
    wire_port_loc_en_plug2_switchB = ((false || (state_plug2_S6 == plug2_currentState)) || ((state_plug2_S5 == plug2_currentState) && !var_plug2_trigger));
    wire_port_loc_en_plug2_sendToChannel = (false || (state_plug2_S1 == plug2_currentState));
    wire_port_loc_en_plug2_singleton1 = (((false || (state_plug2_S3temp == plug2_currentState)) || (state_plug2_S6temp == plug2_currentState)) || ((state_plug2_S5temp == plug2_currentState) && var_plug2_decidedValue != var_plug2_decidedValueS));
    wire_port_loc_en_plug2_sendToClient = (false || ((state_plug2_S5 == plug2_currentState) && var_plug2_trigger));
    wire_port_loc_en_plug2_singleton2 = (false || ((state_plug2_S5temp == plug2_currentState) && var_plug2_decidedValue == var_plug2_decidedValueS));
    wire_port_loc_en_plug2_recieveFromServer = (((false || (state_plug2_S2 == plug2_currentState)) || (state_plug2_S4 == plug2_currentState)) || (state_plug2_S3 == plug2_currentState));
    wire_port_loc_en_plugC1_SendS2 = ((false || ((state_plugC1_sendServer_rcvFServer == plugC1_currentState) && !var_plugC1_server2)) || ((state_plugC1_sendServer_sendTClient == plugC1_currentState) && !var_plugC1_server2));
    wire_port_loc_en_plugC1_rcvServer = ((false || (state_plugC1_start_rcvFServer == plugC1_currentState)) || (state_plugC1_sendServer_rcvFServer == plugC1_currentState));
    wire_port_loc_en_plugC1_sendClient = ((false || (state_plugC1_start_sendTClient == plugC1_currentState)) || (state_plugC1_sendServer_sendTClient == plugC1_currentState));
    wire_port_loc_en_plugC1_rcvPlug = ((false || (state_plugC1_start_rcvFServer == plugC1_currentState)) || (state_plugC1_start_sendTClient == plugC1_currentState));
    wire_port_loc_en_plugC1_SendS1 = ((false || ((state_plugC1_sendServer_rcvFServer == plugC1_currentState) && !var_plugC1_server1)) || ((state_plugC1_sendServer_sendTClient == plugC1_currentState) && !var_plugC1_server1));
    wire_port_loc_en_plugC2_SendS2 = ((false || ((state_plugC2_sendServer_rcvFServer == plugC2_currentState) && !var_plugC2_server2)) || ((state_plugC2_sendServer_sendTClient == plugC2_currentState) && !var_plugC2_server2));
    wire_port_loc_en_plugC2_rcvServer = ((false || (state_plugC2_start_rcvFServer == plugC2_currentState)) || (state_plugC2_sendServer_rcvFServer == plugC2_currentState));
    wire_port_loc_en_plugC2_sendClient = ((false || (state_plugC2_start_sendTClient == plugC2_currentState)) || (state_plugC2_sendServer_sendTClient == plugC2_currentState));
    wire_port_loc_en_plugC2_rcvPlug = ((false || (state_plugC2_start_rcvFServer == plugC2_currentState)) || (state_plugC2_start_sendTClient == plugC2_currentState));
    wire_port_loc_en_plugC2_SendS1 = ((false || ((state_plugC2_sendServer_rcvFServer == plugC2_currentState) && !var_plugC2_server1)) || ((state_plugC2_sendServer_sendTClient == plugC2_currentState) && !var_plugC2_server1));
    wire_port_loc_en_serverC1_rcvPlugC = ((((false || (state_serverC1_rcvPlug_rcvFServer == serverC1_currentState)) || (state_serverC1_rcvPlug_sendPlugC == serverC1_currentState)) || (state_serverC1_crash_rcvFServer == serverC1_currentState)) || (state_serverC1_crash_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC1_loose = ((false || (state_serverC1_sendTServer_rcvFServer == serverC1_currentState)) || (state_serverC1_sendTServer_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC1_msglost = ((false || (state_serverC1_sendTServer_rcvFServer == serverC1_currentState)) || (state_serverC1_sendTServer_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC1_rcvServer = (((false || (state_serverC1_rcvPlug_rcvFServer == serverC1_currentState)) || (state_serverC1_sendTServer_rcvFServer == serverC1_currentState)) || (state_serverC1_crash_rcvFServer == serverC1_currentState));
    wire_port_loc_en_serverC1_sendServer = ((false || (state_serverC1_sendTServer_rcvFServer == serverC1_currentState)) || (state_serverC1_sendTServer_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC1_sendPlug = (((false || (state_serverC1_rcvPlug_sendPlugC == serverC1_currentState)) || (state_serverC1_sendTServer_sendPlugC == serverC1_currentState)) || (state_serverC1_crash_sendPlugC == serverC1_currentState));
    wire_port_loc_en_serverC2_rcvPlugC = ((((false || (state_serverC2_rcvPlug_rcvFServer == serverC2_currentState)) || (state_serverC2_rcvPlug_sendPlugC == serverC2_currentState)) || (state_serverC2_crash_rcvFServer == serverC2_currentState)) || (state_serverC2_crash_sendPlugC == serverC2_currentState));
    wire_port_loc_en_serverC2_loose = ((false || (state_serverC2_sendTServer_rcvFServer == serverC2_currentState)) || (state_serverC2_sendTServer_sendPlugC == serverC2_currentState));
    wire_port_loc_en_serverC2_msglost = ((false || (state_serverC2_sendTServer_rcvFServer == serverC2_currentState)) || (state_serverC2_sendTServer_sendPlugC == serverC2_currentState));
    wire_port_loc_en_serverC2_rcvServer = (((false || (state_serverC2_rcvPlug_rcvFServer == serverC2_currentState)) || (state_serverC2_sendTServer_rcvFServer == serverC2_currentState)) || (state_serverC2_crash_rcvFServer == serverC2_currentState));
    wire_port_loc_en_serverC2_sendServer = ((false || (state_serverC2_sendTServer_rcvFServer == serverC2_currentState)) || (state_serverC2_sendTServer_sendPlugC == serverC2_currentState));
    wire_port_loc_en_serverC2_sendPlug = (((false || (state_serverC2_rcvPlug_sendPlugC == serverC2_currentState)) || (state_serverC2_sendTServer_sendPlugC == serverC2_currentState)) || (state_serverC2_crash_sendPlugC == serverC2_currentState));
    wire_port_loc_en_s1_singleton1 = (false || ((state_s1_SEND_TEMP == s1_currentState) && true));
    wire_port_loc_en_s1_SendToServerC = (false || (state_s1_SEND == s1_currentState));
    wire_port_loc_en_s1_RcvFromChannel = (false || (state_s1_RECEIVE == s1_currentState));
    wire_port_loc_en_s2_singleton1 = (false || ((state_s2_SEND_TEMP == s2_currentState) && true));
    wire_port_loc_en_s2_SendToServerC = (false || (state_s2_SEND == s2_currentState));
    wire_port_loc_en_s2_RcvFromChannel = (false || (state_s2_RECEIVE == s2_currentState));
    interactions_first_enable[20] = ((true && wire_port_loc_en_serverC1_rcvServer) && wire_port_loc_en_s1_SendToServerC);
    interactions_first_enable[28] = ((true && wire_port_loc_en_serverC2_rcvServer) && wire_port_loc_en_s2_SendToServerC);
    interactions_first_enable[19] = ((true && wire_port_loc_en_serverC1_sendServer) && wire_port_loc_en_s1_RcvFromChannel);
    interactions_first_enable[3] = (true && wire_port_loc_en_plug2_switchB);
    interactions_first_enable[29] = (((var_serverC2_clientIdSend == var_plugC1_clientId) && wire_port_loc_en_serverC2_sendPlug) && wire_port_loc_en_plugC1_rcvServer);
    interactions_first_enable[6] = (true && wire_port_loc_en_serverC1_loose);
    interactions_first_enable[27] = ((true && wire_port_loc_en_serverC2_sendServer) && wire_port_loc_en_s2_RcvFromChannel);
    interactions_first_enable[1] = (true && wire_port_loc_en_plug2_sendToClient);
    interactions_first_enable[30] = (((var_serverC2_clientIdSend == var_plugC2_clientId) && wire_port_loc_en_serverC2_sendPlug) && wire_port_loc_en_plugC2_rcvServer);
    interactions_first_enable[7] = (true && wire_port_loc_en_serverC1_msglost);
    interactions_first_enable[13] = (true && wire_port_loc_en_s2_singleton1);
    interactions_first_enable[21] = (((var_serverC1_clientIdSend == var_plugC1_clientId) && wire_port_loc_en_serverC1_sendPlug) && wire_port_loc_en_plugC1_rcvServer);
    interactions_first_enable[9] = (true && wire_port_loc_en_serverC2_msglost);
    interactions_first_enable[24] = ((true && wire_port_loc_en_plugC2_rcvPlug) && wire_port_loc_en_plug2_sendToChannel);
    interactions_first_enable[12] = (true && wire_port_loc_en_s1_singleton1);
    interactions_first_enable[14] = (true && wire_port_loc_en_plug1_singleton2);
    interactions_first_enable[17] = ((true && wire_port_loc_en_serverC1_rcvPlugC) && wire_port_loc_en_plugC1_SendS1);
    interactions_first_enable[16] = ((true && wire_port_loc_en_plugC1_rcvPlug) && wire_port_loc_en_plug1_sendToChannel);
    interactions_first_enable[5] = (true && wire_port_loc_en_plug2_ticker);
    interactions_first_enable[25] = ((true && wire_port_loc_en_serverC1_rcvPlugC) && wire_port_loc_en_plugC2_SendS1);
    interactions_first_enable[2] = (true && wire_port_loc_en_plug1_switchB);
    interactions_first_enable[10] = (true && wire_port_loc_en_plug1_singleton1);
    interactions_first_enable[26] = ((true && wire_port_loc_en_serverC2_rcvPlugC) && wire_port_loc_en_plugC2_SendS2);
    interactions_first_enable[23] = ((true && wire_port_loc_en_plug1_recieveFromServer) && wire_port_loc_en_plugC1_sendClient);
    interactions_first_enable[8] = (true && wire_port_loc_en_serverC2_loose);
    interactions_first_enable[0] = (true && wire_port_loc_en_plug1_sendToClient);
    interactions_first_enable[15] = (true && wire_port_loc_en_plug2_singleton2);
    interactions_first_enable[4] = (true && wire_port_loc_en_plug1_ticker);
    interactions_first_enable[31] = ((true && wire_port_loc_en_plugC2_sendClient) && wire_port_loc_en_plug2_recieveFromServer);
    interactions_first_enable[11] = (true && wire_port_loc_en_plug2_singleton1);
    interactions_first_enable[22] = (((var_serverC1_clientIdSend == var_plugC2_clientId) && wire_port_loc_en_plugC2_rcvServer) && wire_port_loc_en_serverC1_sendPlug);
    interactions_first_enable[18] = ((true && wire_port_loc_en_serverC2_rcvPlugC) && wire_port_loc_en_plugC1_SendS2);
    interactions_enablement[0] = (interactions_first_enable[0] && ((wire_selector == 0) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[1]) ) && ( ! interactions_first_enable[2]) ) && ( ! interactions_first_enable[3]) ) && ( ! interactions_first_enable[4]) ) && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[1] = (interactions_first_enable[1] && ((wire_selector == 1) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((((true && ( ! interactions_first_enable[2]) ) && ( ! interactions_first_enable[3]) ) && ( ! interactions_first_enable[4]) ) && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[2] = (interactions_first_enable[2] && ((wire_selector == 2) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((((true && ( ! interactions_first_enable[3]) ) && ( ! interactions_first_enable[4]) ) && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[3] = (interactions_first_enable[3] && ((wire_selector == 3) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((((true && ( ! interactions_first_enable[4]) ) && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[4] = (interactions_first_enable[4] && ((wire_selector == 4) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((((true && ( ! interactions_first_enable[5]) ) && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[5] = (interactions_first_enable[5] && ((wire_selector == 5) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((((true && ( ! interactions_first_enable[6]) ) && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[6] = (interactions_first_enable[6] && ((wire_selector == 6) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((((true && ( ! interactions_first_enable[7]) ) && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[7] = (interactions_first_enable[7] && ((wire_selector == 7) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((((true && ( ! interactions_first_enable[8]) ) && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[8] = (interactions_first_enable[8] && ((wire_selector == 8) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((((true && ( ! interactions_first_enable[9]) ) && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[9] = (interactions_first_enable[9] && ((wire_selector == 9) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((((true && ( ! interactions_first_enable[10]) ) && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[10] = (interactions_first_enable[10] && ((wire_selector == 10) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((((true && ( ! interactions_first_enable[11]) ) && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[11] = (interactions_first_enable[11] && ((wire_selector == 11) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((((true && ( ! interactions_first_enable[12]) ) && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[12] = (interactions_first_enable[12] && ((wire_selector == 12) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((((true && ( ! interactions_first_enable[13]) ) && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[13] = (interactions_first_enable[13] && ((wire_selector == 13) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((((true && ( ! interactions_first_enable[14]) ) && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[14] = (interactions_first_enable[14] && ((wire_selector == 14) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((((true && ( ! interactions_first_enable[15]) ) && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[15] = (interactions_first_enable[15] && ((wire_selector == 15) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((((true && ( ! interactions_first_enable[16]) ) && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[16] = (interactions_first_enable[16] && ((wire_selector == 16) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((((true && ( ! interactions_first_enable[17]) ) && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[17] = (interactions_first_enable[17] && ((wire_selector == 17) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((((true && ( ! interactions_first_enable[18]) ) && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[18] = (interactions_first_enable[18] && ((wire_selector == 18) || (( ! interactions_first_enable[wire_selector])  && (((((((((((((true && ( ! interactions_first_enable[19]) ) && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[19] = (interactions_first_enable[19] && ((wire_selector == 19) || (( ! interactions_first_enable[wire_selector])  && ((((((((((((true && ( ! interactions_first_enable[20]) ) && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[20] = (interactions_first_enable[20] && ((wire_selector == 20) || (( ! interactions_first_enable[wire_selector])  && (((((((((((true && ( ! interactions_first_enable[21]) ) && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[21] = (interactions_first_enable[21] && ((wire_selector == 21) || (( ! interactions_first_enable[wire_selector])  && ((((((((((true && ( ! interactions_first_enable[22]) ) && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[22] = (interactions_first_enable[22] && ((wire_selector == 22) || (( ! interactions_first_enable[wire_selector])  && (((((((((true && ( ! interactions_first_enable[23]) ) && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[23] = (interactions_first_enable[23] && ((wire_selector == 23) || (( ! interactions_first_enable[wire_selector])  && ((((((((true && ( ! interactions_first_enable[24]) ) && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[24] = (interactions_first_enable[24] && ((wire_selector == 24) || (( ! interactions_first_enable[wire_selector])  && (((((((true && ( ! interactions_first_enable[25]) ) && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[25] = (interactions_first_enable[25] && ((wire_selector == 25) || (( ! interactions_first_enable[wire_selector])  && ((((((true && ( ! interactions_first_enable[26]) ) && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[26] = (interactions_first_enable[26] && ((wire_selector == 26) || (( ! interactions_first_enable[wire_selector])  && (((((true && ( ! interactions_first_enable[27]) ) && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[27] = (interactions_first_enable[27] && ((wire_selector == 27) || (( ! interactions_first_enable[wire_selector])  && ((((true && ( ! interactions_first_enable[28]) ) && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[28] = (interactions_first_enable[28] && ((wire_selector == 28) || (( ! interactions_first_enable[wire_selector])  && (((true && ( ! interactions_first_enable[29]) ) && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[29] = (interactions_first_enable[29] && ((wire_selector == 29) || (( ! interactions_first_enable[wire_selector])  && ((true && ( ! interactions_first_enable[30]) ) && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[30] = (interactions_first_enable[30] && ((wire_selector == 30) || (( ! interactions_first_enable[wire_selector])  && (true && ( ! interactions_first_enable[31]) ))));
    interactions_enablement[31] = (interactions_first_enable[31] && ((wire_selector == 31) || (( ! interactions_first_enable[wire_selector])  && true)));
    wire_port_en_plug1_ticker = (false || interactions_enablement[4]);
    wire_port_en_plug1_switchB = (false || interactions_enablement[2]);
    wire_port_en_plug1_sendToChannel = (false || interactions_enablement[16]);
    wire_port_en_plug1_singleton1 = (false || interactions_enablement[10]);
    wire_port_en_plug1_sendToClient = (false || interactions_enablement[0]);
    wire_port_en_plug1_singleton2 = (false || interactions_enablement[14]);
    wire_port_en_plug1_recieveFromServer = (false || interactions_enablement[23]);
    wire_port_en_plug2_ticker = (false || interactions_enablement[5]);
    wire_port_en_plug2_switchB = (false || interactions_enablement[3]);
    wire_port_en_plug2_sendToChannel = (false || interactions_enablement[24]);
    wire_port_en_plug2_singleton1 = (false || interactions_enablement[11]);
    wire_port_en_plug2_sendToClient = (false || interactions_enablement[1]);
    wire_port_en_plug2_singleton2 = (false || interactions_enablement[15]);
    wire_port_en_plug2_recieveFromServer = (false || interactions_enablement[31]);
    wire_port_en_plugC1_SendS2 = (false || interactions_enablement[18]);
    wire_port_en_plugC1_rcvServer = ((false || interactions_enablement[21]) || interactions_enablement[29]);
    wire_port_en_plugC1_sendClient = (false || interactions_enablement[23]);
    wire_port_en_plugC1_rcvPlug = (false || interactions_enablement[16]);
    wire_port_en_plugC1_SendS1 = (false || interactions_enablement[17]);
    wire_port_en_plugC2_SendS2 = (false || interactions_enablement[26]);
    wire_port_en_plugC2_rcvServer = ((false || interactions_enablement[22]) || interactions_enablement[30]);
    wire_port_en_plugC2_sendClient = (false || interactions_enablement[31]);
    wire_port_en_plugC2_rcvPlug = (false || interactions_enablement[24]);
    wire_port_en_plugC2_SendS1 = (false || interactions_enablement[25]);
    wire_port_en_serverC1_rcvPlugC = ((false || interactions_enablement[17]) || interactions_enablement[25]);
    wire_port_en_serverC1_loose = (false || interactions_enablement[6]);
    wire_port_en_serverC1_msglost = (false || interactions_enablement[7]);
    wire_port_en_serverC1_rcvServer = (false || interactions_enablement[20]);
    wire_port_en_serverC1_sendServer = (false || interactions_enablement[19]);
    wire_port_en_serverC1_sendPlug = ((false || interactions_enablement[21]) || interactions_enablement[22]);
    wire_port_en_serverC2_rcvPlugC = ((false || interactions_enablement[18]) || interactions_enablement[26]);
    wire_port_en_serverC2_loose = (false || interactions_enablement[8]);
    wire_port_en_serverC2_msglost = (false || interactions_enablement[9]);
    wire_port_en_serverC2_rcvServer = (false || interactions_enablement[28]);
    wire_port_en_serverC2_sendServer = (false || interactions_enablement[27]);
    wire_port_en_serverC2_sendPlug = ((false || interactions_enablement[29]) || interactions_enablement[30]);
    wire_port_en_s1_singleton1 = (false || interactions_enablement[12]);
    wire_port_en_s1_SendToServerC = (false || interactions_enablement[20]);
    wire_port_en_s1_RcvFromChannel = (false || interactions_enablement[19]);
    wire_port_en_s2_singleton1 = (false || interactions_enablement[13]);
    wire_port_en_s2_SendToServerC = (false || interactions_enablement[28]);
    wire_port_en_s2_RcvFromChannel = (false || interactions_enablement[27]);
    if(interactions_enablement[23]) {
      var_plug1_decidedValueS_nsf= var_plugC1_decidedValue; 
    }
    else {
      var_plug1_decidedValueS_nsf= var_plug1_decidedValueS;
    }
    if(interactions_enablement[23]) {
      var_plug1_serverId_nsf= var_plugC1_serverId; 
    }
    else {
      var_plug1_serverId_nsf= var_plug1_serverId;
    }
    if(interactions_enablement[31]) {
      var_plug2_decidedValueS_nsf= var_plugC2_decidedValue; 
    }
    else {
      var_plug2_decidedValueS_nsf= var_plug2_decidedValueS;
    }
    if(interactions_enablement[31]) {
      var_plug2_serverId_nsf= var_plugC2_serverId; 
    }
    else {
      var_plug2_serverId_nsf= var_plug2_serverId;
    }
    if(interactions_enablement[29]) {
      var_plugC1_decidedValue_nsf= var_serverC2_decided; 
    }
    else {
      var_plugC1_decidedValue_nsf= var_plugC1_decidedValue;
    }
    if(interactions_enablement[29]) {
      var_plugC1_serverId_nsf= var_serverC2_serverId; 
    }
    else {
      var_plugC1_serverId_nsf= var_plugC1_serverId;
    }
    if(interactions_enablement[16]) {
      var_plugC1_proposedValue_nsf= var_plug1_proposedValue; 
    }
    else {
      var_plugC1_proposedValue_nsf= var_plugC1_proposedValue;
    }
    if(interactions_enablement[30]) {
      var_plugC2_decidedValue_nsf= var_serverC2_decided; 
    }
    else {
      var_plugC2_decidedValue_nsf= var_plugC2_decidedValue;
    }
    if(interactions_enablement[30]) {
      var_plugC2_serverId_nsf= var_serverC2_serverId; 
    }
    else {
      var_plugC2_serverId_nsf= var_plugC2_serverId;
    }
    if(interactions_enablement[24]) {
      var_plugC2_proposedValue_nsf= var_plug2_proposedValue; 
    }
    else {
      var_plugC2_proposedValue_nsf= var_plugC2_proposedValue;
    }
    if(interactions_enablement[17]) {
      var_serverC1_proposed_nsf= var_plugC1_proposedValue; 
    }
    else {
      var_serverC1_proposed_nsf= var_serverC1_proposed;
    }
    if(interactions_enablement[17]) {
      var_serverC1_clientIdRcv_nsf= var_plugC1_clientId; 
    }
    else {
      var_serverC1_clientIdRcv_nsf= var_serverC1_clientIdRcv;
    }
    if(interactions_enablement[20]) {
      var_serverC1_decided_nsf= var_s1_decidedValue; 
    }
    else {
      var_serverC1_decided_nsf= var_serverC1_decided;
    }
    if(interactions_enablement[20]) {
      var_serverC1_clientIdSend_nsf= var_s1_ClientId; 
    }
    else {
      var_serverC1_clientIdSend_nsf= var_serverC1_clientIdSend;
    }
    if(interactions_enablement[18]) {
      var_serverC2_proposed_nsf= var_plugC1_proposedValue; 
    }
    else {
      var_serverC2_proposed_nsf= var_serverC2_proposed;
    }
    if(interactions_enablement[18]) {
      var_serverC2_clientIdRcv_nsf= var_plugC1_clientId; 
    }
    else {
      var_serverC2_clientIdRcv_nsf= var_serverC2_clientIdRcv;
    }
    if(interactions_enablement[28]) {
      var_serverC2_decided_nsf= var_s2_decidedValue; 
    }
    else {
      var_serverC2_decided_nsf= var_serverC2_decided;
    }
    if(interactions_enablement[28]) {
      var_serverC2_clientIdSend_nsf= var_s2_ClientId; 
    }
    else {
      var_serverC2_clientIdSend_nsf= var_serverC2_clientIdSend;
    }
    if(interactions_enablement[19]) {
      var_s1_proposedValue_nsf= var_serverC1_proposed; 
    }
    else {
      var_s1_proposedValue_nsf= var_s1_proposedValue;
    }
    if(interactions_enablement[19]) {
      var_s1_ClientId_nsf= var_serverC1_clientIdRcv; 
    }
    else {
      var_s1_ClientId_nsf= var_s1_ClientId;
    }
    if(interactions_enablement[27]) {
      var_s2_proposedValue_nsf= var_serverC2_proposed; 
    }
    else {
      var_s2_proposedValue_nsf= var_s2_proposedValue;
    }
    if(interactions_enablement[27]) {
      var_s2_ClientId_nsf= var_serverC2_clientIdRcv; 
    }
    else {
      var_s2_ClientId_nsf= var_s2_ClientId;
    }
    if(((plug1_currentState == state_plug1_S5temp) && wire_port_en_plug1_singleton1)) {
      plug1_currentState_nsf= state_plug1_S5;
    }
    else {
      if(((plug1_currentState == state_plug1_S5temp) && wire_port_en_plug1_singleton2)) {
        plug1_currentState_nsf= state_plug1_S5;
      }
      else {
        if(((plug1_currentState == state_plug1_S6temp) && wire_port_en_plug1_singleton1)) {
          plug1_currentState_nsf= state_plug1_S6;
        }
        else {
          if(((plug1_currentState == state_plug1_S8) && wire_port_en_plug1_ticker)) {
            plug1_currentState_nsf= state_plug1_S8;
          }
          else {
            if(((plug1_currentState == state_plug1_S5) && wire_port_en_plug1_switchB)) {
              plug1_currentState_nsf= state_plug1_S8;
            }
            else {
              if(((plug1_currentState == state_plug1_S5) && wire_port_en_plug1_sendToClient)) {
                plug1_currentState_nsf= state_plug1_S7;
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
                                if(((plug1_currentState == state_plug1_S1) && wire_port_en_plug1_sendToChannel)) {
                                  plug1_currentState_nsf= state_plug1_S2;
                                }
                                else {
                                  if(((plug1_currentState == state_plug1_S3temp) && wire_port_en_plug1_singleton1)) {
                                    plug1_currentState_nsf= state_plug1_S3;
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
    if(((plug2_currentState == state_plug2_S5temp) && wire_port_en_plug2_singleton1)) {
      plug2_currentState_nsf= state_plug2_S5;
    }
    else {
      if(((plug2_currentState == state_plug2_S5temp) && wire_port_en_plug2_singleton2)) {
        plug2_currentState_nsf= state_plug2_S5;
      }
      else {
        if(((plug2_currentState == state_plug2_S6temp) && wire_port_en_plug2_singleton1)) {
          plug2_currentState_nsf= state_plug2_S6;
        }
        else {
          if(((plug2_currentState == state_plug2_S8) && wire_port_en_plug2_ticker)) {
            plug2_currentState_nsf= state_plug2_S8;
          }
          else {
            if(((plug2_currentState == state_plug2_S5) && wire_port_en_plug2_switchB)) {
              plug2_currentState_nsf= state_plug2_S8;
            }
            else {
              if(((plug2_currentState == state_plug2_S5) && wire_port_en_plug2_sendToClient)) {
                plug2_currentState_nsf= state_plug2_S7;
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
                                if(((plug2_currentState == state_plug2_S1) && wire_port_en_plug2_sendToChannel)) {
                                  plug2_currentState_nsf= state_plug2_S2;
                                }
                                else {
                                  if(((plug2_currentState == state_plug2_S3temp) && wire_port_en_plug2_singleton1)) {
                                    plug2_currentState_nsf= state_plug2_S3;
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
                if(((plugC1_currentState == state_plugC1_start_sendTClient) && wire_port_en_plugC1_rcvPlug)) {
                  plugC1_currentState_nsf= state_plugC1_sendServer_sendTClient;
                }
                else {
                  if(((plugC1_currentState == state_plugC1_start_sendTClient) && wire_port_en_plugC1_sendClient)) {
                    plugC1_currentState_nsf= state_plugC1_start_rcvFServer;
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
                if(((plugC2_currentState == state_plugC2_start_sendTClient) && wire_port_en_plugC2_rcvPlug)) {
                  plugC2_currentState_nsf= state_plugC2_sendServer_sendTClient;
                }
                else {
                  if(((plugC2_currentState == state_plugC2_start_sendTClient) && wire_port_en_plugC2_sendClient)) {
                    plugC2_currentState_nsf= state_plugC2_start_rcvFServer;
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
                                if(((serverC1_currentState == state_serverC1_rcvPlug_rcvFServer) && wire_port_en_serverC1_rcvPlugC)) {
                                  serverC1_currentState_nsf= state_serverC1_sendTServer_rcvFServer;
                                }
                                else {
                                  if(((serverC1_currentState == state_serverC1_rcvPlug_rcvFServer) && wire_port_en_serverC1_rcvServer)) {
                                    serverC1_currentState_nsf= state_serverC1_rcvPlug_sendPlugC;
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
                                if(((serverC2_currentState == state_serverC2_rcvPlug_rcvFServer) && wire_port_en_serverC2_rcvPlugC)) {
                                  serverC2_currentState_nsf= state_serverC2_sendTServer_rcvFServer;
                                }
                                else {
                                  if(((serverC2_currentState == state_serverC2_rcvPlug_rcvFServer) && wire_port_en_serverC2_rcvServer)) {
                                    serverC2_currentState_nsf= state_serverC2_rcvPlug_sendPlugC;
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
    if(((s1_currentState == state_s1_RECEIVE) && wire_port_en_s1_RcvFromChannel)) {
      s1_currentState_nsf= state_s1_SEND_TEMP;
    }
    else {
      if(((s1_currentState == state_s1_SEND_TEMP) && wire_port_en_s1_singleton1)) {
        s1_currentState_nsf= state_s1_SEND;
      }
      else {
        if(((s1_currentState == state_s1_SEND) && wire_port_en_s1_SendToServerC)) {
          s1_currentState_nsf= state_s1_RECEIVE;
        }
        else {
          s1_currentState_nsf= s1_currentState;
        }
      }
    }
    if(((s1_currentState == state_s1_SEND_TEMP) && wire_port_en_s1_singleton1)) {
      var_s1_decidedValue_nsf= var_s1_proposedValue;
    }
    else {
      var_s1_decidedValue_nsf= var_s1_decidedValue;
    }
    if(((s2_currentState == state_s2_RECEIVE) && wire_port_en_s2_RcvFromChannel)) {
      s2_currentState_nsf= state_s2_SEND_TEMP;
    }
    else {
      if(((s2_currentState == state_s2_SEND_TEMP) && wire_port_en_s2_singleton1)) {
        s2_currentState_nsf= state_s2_SEND;
      }
      else {
        if(((s2_currentState == state_s2_SEND) && wire_port_en_s2_SendToServerC)) {
          s2_currentState_nsf= state_s2_RECEIVE;
        }
        else {
          s2_currentState_nsf= s2_currentState;
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
  var_plug2_trigger = var_plug2_trigger_nsf;
  var_plugC2_decidedValue = var_plugC2_decidedValue_nsf;
  var_s2_id = var_s2_id_nsf;
  serverC2_currentState = serverC2_currentState_nsf;
  var_s1_ClientId = var_s1_ClientId_nsf;
  var_serverC2_serverId = var_serverC2_serverId_nsf;
  var_plug2_decidedValue = var_plug2_decidedValue_nsf;
  var_serverC2_id = var_serverC2_id_nsf;
  var_serverC1_serverId = var_serverC1_serverId_nsf;
  var_plug1_decidedValue = var_plug1_decidedValue_nsf;
  serverC1_currentState = serverC1_currentState_nsf;
  var_serverC1_proposed = var_serverC1_proposed_nsf;
  var_plugC1_serverId = var_plugC1_serverId_nsf;
  var_serverC2_clientIdRcv = var_serverC2_clientIdRcv_nsf;
  var_serverC2_clientIdSend = var_serverC2_clientIdSend_nsf;
  var_plugC1_clientId = var_plugC1_clientId_nsf;
  var_plug2_serverId = var_plug2_serverId_nsf;
  var_plugC2_serverId = var_plugC2_serverId_nsf;
  var_serverC1_id = var_serverC1_id_nsf;
  var_plugC1_decidedValue = var_plugC1_decidedValue_nsf;
  var_s1_proposedValue = var_s1_proposedValue_nsf;
  plug2_currentState = plug2_currentState_nsf;
  var_s2_decidedValue = var_s2_decidedValue_nsf;
  var_plugC1_server1 = var_plugC1_server1_nsf;
  plug1_currentState = plug1_currentState_nsf;
  var_plugC1_server2 = var_plugC1_server2_nsf;
  var_plugC1_proposedValue = var_plugC1_proposedValue_nsf;
  var_s2_serverId = var_s2_serverId_nsf;
  var_plug1_proposedValue = var_plug1_proposedValue_nsf;
  var_plug1_id = var_plug1_id_nsf;
  var_plug2_proposedValue = var_plug2_proposedValue_nsf;
  s1_currentState = s1_currentState_nsf;
  var_plugC1_id = var_plugC1_id_nsf;
  var_s1_decidedValue = var_s1_decidedValue_nsf;
  var_plugC2_id = var_plugC2_id_nsf;
  var_plugC2_server2 = var_plugC2_server2_nsf;
  var_plugC2_server1 = var_plugC2_server1_nsf;
  plugC1_currentState = plugC1_currentState_nsf;
  var_plug2_decidedValueS = var_plug2_decidedValueS_nsf;
  var_serverC2_proposed = var_serverC2_proposed_nsf;
  var_plug2_id = var_plug2_id_nsf;
  var_serverC1_decided = var_serverC1_decided_nsf;
  s2_currentState = s2_currentState_nsf;
  var_plugC2_proposedValue = var_plugC2_proposedValue_nsf;
  var_s2_ClientId = var_s2_ClientId_nsf;
  var_serverC1_clientIdSend = var_serverC1_clientIdSend_nsf;
  var_s2_proposedValue = var_s2_proposedValue_nsf;
  var_serverC2_decided = var_serverC2_decided_nsf;
  var_plug1_decidedValueS = var_plug1_decidedValueS_nsf;
  plugC2_currentState = plugC2_currentState_nsf;
  var_plugC2_clientId = var_plugC2_clientId_nsf;
  var_s1_id = var_s1_id_nsf;
  var_serverC1_clientIdRcv = var_serverC1_clientIdRcv_nsf;
cout << "cycle" << " " << __cycle_num__<< ",";
  cout<< "var_s1_serverId" << " " << var_s1_serverId << ","; 
  cout<< "var_plug1_trigger" << " " << var_plug1_trigger << ","; 
  cout<< "var_plug1_serverId" << " " << var_plug1_serverId << ","; 
  cout<< "var_plug2_trigger" << " " << var_plug2_trigger << ","; 
  cout<< "var_plugC2_decidedValue" << " " << var_plugC2_decidedValue << ","; 
  cout<< "var_s2_id" << " " << var_s2_id << ","; 
  cout<< "serverC2_currentState" << " " << serverC2_currentState << ","; 
  cout<< "var_s1_ClientId" << " " << var_s1_ClientId << ","; 
  cout<< "var_serverC2_serverId" << " " << var_serverC2_serverId << ","; 
  cout<< "var_plug2_decidedValue" << " " << var_plug2_decidedValue << ","; 
  cout<< "var_serverC2_id" << " " << var_serverC2_id << ","; 
  cout<< "var_serverC1_serverId" << " " << var_serverC1_serverId << ","; 
  cout<< "var_plug1_decidedValue" << " " << var_plug1_decidedValue << ","; 
  cout<< "serverC1_currentState" << " " << serverC1_currentState << ","; 
  cout<< "var_serverC1_proposed" << " " << var_serverC1_proposed << ","; 
  cout<< "var_plugC1_serverId" << " " << var_plugC1_serverId << ","; 
  cout<< "var_serverC2_clientIdRcv" << " " << var_serverC2_clientIdRcv << ","; 
  cout<< "var_serverC2_clientIdSend" << " " << var_serverC2_clientIdSend << ","; 
  cout<< "var_plugC1_clientId" << " " << var_plugC1_clientId << ","; 
  cout<< "var_plug2_serverId" << " " << var_plug2_serverId << ","; 
  cout<< "var_plugC2_serverId" << " " << var_plugC2_serverId << ","; 
  cout<< "var_serverC1_id" << " " << var_serverC1_id << ","; 
  cout<< "var_plugC1_decidedValue" << " " << var_plugC1_decidedValue << ","; 
  cout<< "var_s1_proposedValue" << " " << var_s1_proposedValue << ","; 
  cout<< "plug2_currentState" << " " << plug2_currentState << ","; 
  cout<< "var_s2_decidedValue" << " " << var_s2_decidedValue << ","; 
  cout<< "var_plugC1_server1" << " " << var_plugC1_server1 << ","; 
  cout<< "plug1_currentState" << " " << plug1_currentState << ","; 
  cout<< "var_plugC1_server2" << " " << var_plugC1_server2 << ","; 
  cout<< "var_plugC1_proposedValue" << " " << var_plugC1_proposedValue << ","; 
  cout<< "var_s2_serverId" << " " << var_s2_serverId << ","; 
  cout<< "var_plug1_proposedValue" << " " << var_plug1_proposedValue << ","; 
  cout<< "var_plug1_id" << " " << var_plug1_id << ","; 
  cout<< "var_plug2_proposedValue" << " " << var_plug2_proposedValue << ","; 
  cout<< "s1_currentState" << " " << s1_currentState << ","; 
  cout<< "var_plugC1_id" << " " << var_plugC1_id << ","; 
  cout<< "var_s1_decidedValue" << " " << var_s1_decidedValue << ","; 
  cout<< "var_plugC2_id" << " " << var_plugC2_id << ","; 
  cout<< "var_plugC2_server2" << " " << var_plugC2_server2 << ","; 
  cout<< "var_plugC2_server1" << " " << var_plugC2_server1 << ","; 
  cout<< "plugC1_currentState" << " " << plugC1_currentState << ","; 
  cout<< "var_plug2_decidedValueS" << " " << var_plug2_decidedValueS << ","; 
  cout<< "var_serverC2_proposed" << " " << var_serverC2_proposed << ","; 
  cout<< "var_plug2_id" << " " << var_plug2_id << ","; 
  cout<< "var_serverC1_decided" << " " << var_serverC1_decided << ","; 
  cout<< "s2_currentState" << " " << s2_currentState << ","; 
  cout<< "var_plugC2_proposedValue" << " " << var_plugC2_proposedValue << ","; 
  cout<< "var_s2_ClientId" << " " << var_s2_ClientId << ","; 
  cout<< "var_serverC1_clientIdSend" << " " << var_serverC1_clientIdSend << ","; 
  cout<< "var_s2_proposedValue" << " " << var_s2_proposedValue << ","; 
  cout<< "var_serverC2_decided" << " " << var_serverC2_decided << ","; 
  cout<< "var_plug1_decidedValueS" << " " << var_plug1_decidedValueS << ","; 
  cout<< "plugC2_currentState" << " " << plugC2_currentState << ","; 
  cout<< "var_plugC2_clientId" << " " << var_plugC2_clientId << ","; 
  cout<< "var_s1_id" << " " << var_s1_id << ","; 
  cout<< "var_serverC1_clientIdRcv" << " " << var_serverC1_clientIdRcv << ","; 
  cout<< endl;
__cycle_num__++;
if(__cycle_num__ >= 27) break;
cout<<"-------------------------------"<<endl;
}
}
