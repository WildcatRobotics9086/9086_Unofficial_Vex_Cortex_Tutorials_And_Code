/*
This snippet is designed to display how to make the component work and show all of the functions for them.

Display: 
  Bumper/limit switch gathers data and outputs it to the debug stream, then waits.
Notes:
  Debug console also shows this data
*/

//Use ROBOTC Configuration Wizard (Motor and Sensor button) to set up ports
task main() {
  //Use a while() statement to constantly repeat the process
  while(true) {
    //Reads the sensor
    int pressed = SensorValue(dgtl2);
    
    //If the button is pressed it will output 1
    if (pressed == 1) {
      writeDebugStreamLine("Button is pressed");
    }
    else {
		  writeDebugStreamLine("Button is not pressed");
    }
    wait(1000);
  }
}
