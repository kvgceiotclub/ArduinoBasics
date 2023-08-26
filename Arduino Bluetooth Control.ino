/*
   -- New project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__HARDSERIAL

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_SERIAL Serial
#define REMOTEXY_SERIAL_SPEED 115200


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 154 bytes
  { 255,3,0,0,0,147,0,16,69,0,129,0,7,3,86,6,46,75,86,71,
  32,67,79,76,76,69,71,69,32,79,70,32,69,78,71,73,78,69,69,82,
  73,78,71,32,0,129,0,2,12,94,4,33,69,76,69,67,84,82,79,78,
  73,67,83,32,65,78,68,32,67,79,77,77,85,78,73,67,65,84,73,79,
  78,32,69,78,71,73,78,69,69,82,73,78,71,32,0,129,0,33,19,34,
  8,25,73,79,84,32,67,76,85,66,0,1,0,29,41,14,14,2,146,0,
  10,48,8,40,15,15,4,1,31,79,78,0,31,79,70,70,0,2,0,51,
  43,22,11,2,60,136,37,79,78,0,79,70,70,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t button_12; // =1 if button pressed, else =0 
  uint8_t pushSwitch_13; // =1 if state is ON, else =0 
  uint8_t switch_8; // =1 if switch ON and =0 if OFF 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#define PIN_BUTTON_12 12
#define PIN_PUSHSWITCH_13 13
#define PIN_SWITCH_8 8


void setup() 
{
  RemoteXY_Init (); 
  
  pinMode (PIN_BUTTON_12, OUTPUT);
  pinMode (PIN_PUSHSWITCH_13, OUTPUT);
  pinMode (PIN_SWITCH_8, OUTPUT);
  
  // TODO you setup code
  
}

void loop() 
{ 
  RemoteXY_Handler ();
  
  digitalWrite(PIN_BUTTON_12, (RemoteXY.button_12==0)?LOW:HIGH);
  digitalWrite(PIN_PUSHSWITCH_13, (RemoteXY.pushSwitch_13==0)?LOW:HIGH);
  digitalWrite(PIN_SWITCH_8, (RemoteXY.switch_8==0)?LOW:HIGH);
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay() 


}