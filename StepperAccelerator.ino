/*
 Name:		StepperAccelerator.ino
 Created:	28.05.2022 13:50:49
 Author:	KingKong
*/

// the setup function runs once when you press reset or power the board
#include <SteppMaster.h>

SteppMaster _stepper(1, 2, 3, false);

void setup() {

     
    _stepper.SET_ENA_Off();
    
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
