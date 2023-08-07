/*
This snippet is designed to display how to make the component work and show all of the functions for them.

Display: 
  Button press turning on motor on port 2
Notes:
  CANNOT BE DONE WHEN COMPUTER IS CONNECTED TO CORTEX
*/

//Use ROBOTC Configuration Wizard (Motor and Sensor button) to set up ports
task main(){
  //Use a while() statement to constantly repeat the process
  while(true) {
    //Reads the controller data to determine whether or not to turn motor on. The button we are reading is 8R
    int buttonState = vexRT[Btn8R];
    if (buttonState == 1) {
      motor[port2] = 127;
    }
    else {
      motor[port2] = 127;
    }
    wait(1000);
  }
}
