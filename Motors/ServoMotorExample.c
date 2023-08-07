/*
This snippet is designed to display how to make the component work and show all of the functions for them.

Display: 
  Servo on port 2 moves to 127 and waits for 10 seconds, then goes to -127 and waits for 10 seconds, and finally returns to 0.
Notes:
  No motor controller needed between servo and Cortex
  Only one type of motor control function available
*/

//Use ROBOTC Configuration Wizard (Motor and Sensor button) to set up ports
task main(){
  //Send the motor to position 127 and wait
  motor[port2] = 127;
  wait(10000);
  
  //Send the motor to position -127 and wait
  motor[port2] = -127;
  wait(10000);
  
  //Send the motor to position 0
  motor[port2] = 0;
}
