/*
This snippet is designed to display how to make the component work and show all of the functions for them.

Display: 
  Motor on port 2 moves clockwise full speed for 10 second, then stops for 10 seconds, and finally reverses at full speed for 10 seconds before stopping again.
Notes:
  Motor controls have 2 function sets that do the same thing, both are displayed, it is recommended to only use one type in your code.
  The example code uses a Motor 393 with Motor Controller 29. The code is the same for motor modules and motor 269s as well as with the inbuilt motor controllers int the cortex. Please refer to the configurator in the IDE.
*/

//Use ROBOTC Configuration Wizard (Motor and Sensor button) to set up ports
task main(){
  //Starting motor at full speed (127) for 10000ms using function set 1
  motor[port2] = 127;
  wait(10000);
  
  //Stopping motor by making speed 0 for 10000ms using function set 1
  motor[port2] = 0;
  wait(10000);
  
  //Starting motor at full speed (127) for 10000ms using function set 2
  startMotor(port2, -127);
  wait(10000);
  
  //Stopping motor by using command using function set 2
  stopMotor(port2);
  //Note by using function set 2's stopMotor() command, the motor stops the coil whine. By using the stopMotor() command instead of setting motor speed to 0 should result in less power consumption.
}
