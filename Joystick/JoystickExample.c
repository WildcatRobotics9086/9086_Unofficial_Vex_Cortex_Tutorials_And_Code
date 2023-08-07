/*
This snippet is designed to display how to make the component work and show all of the functions for them.

Display: 
  Motor with variable speed by gathering data from joystick
Notes:
  CANNOT DO THIS WHILE COMPUTER IS CONNECTED TO CORTEX
*/

//Use ROBOTC Configuration Wizard (Motor and Sensor button) to set up ports
task main(){
  //Use a while() statement to constantly repeat the process
  while(true) {
    //Reads the joystick value and sends it to the motor. We are using joystick channel 1.
    int speed = vexRT[1];
    motor[port2] = speed;
    wait(1000);
  }
}
