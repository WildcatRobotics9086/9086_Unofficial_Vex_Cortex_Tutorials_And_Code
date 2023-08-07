/*
This snippet is designed to display how to make the component work and show all of the functions for them.

Display: 
  Sensor gathers data then outputs data and waits 1 second
Notes:
  Debug console also shows this data
*/

//Use ROBOTC Configuration Wizard (Motor and Sensor button) to set up ports
task main(){
  //Use a while() statement to constantly repeat the process
  while(true) {
    //Reads the sensor and outputs the data to the debug stream (debug stream may not open automatically you may have to open it manually using the menus at the top)
    int ultrasonic = SensorValue(dgtl2);
    writeDebugStreamLine("Distance:", ultrasonic);
    wait(1000);
  }
}
