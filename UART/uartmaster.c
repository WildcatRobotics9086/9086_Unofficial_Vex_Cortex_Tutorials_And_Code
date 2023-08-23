/*
This snippet is designed to display how to make the component work and show all of the functions for them.

Display: 
  UART master code for controlling a Cortex slave with a Cortex master
Notes:
  READ ALL DOCUMENTS
  UART requires code for BOTH MASTER AND SLAVE
*/

//Use ROBOTC Configuration Wizard (Motor and Sensor button) to set up ports
task main()
{
	while(true){
    //getting Joystick inputs
		int leftright = vexRT[Ch4];
		int forwardbackward = vexRT[Ch3];

    //create the data values needed to drive each cortex and print it to the debug console
		int data;
    clearDebugStream();
    writeDebugStreamLine("VALUE000: %d", forwardbackward);
    writeDebugStreamLine("VALUE001: %d", leftright);

    //convert inputs into a transfer data point
    //cortex UART struggles with negatives so we increase the numbers by at least 1000 to prevent all negatives
		if ((forwardbackward != 0) && (forwardbackward != 1)){
			data = forwardbackward + 1127;
			writeDebugStreamLine("value1: %d", data);
		}

		if (leftright != 0){
			data = leftright + 2127;
			writeDebugStreamLine("value2: %d", data);
		}

    //turn the data into a single output cvariable
		string dataString;
		writeDebugStreamLine("value4: %d", data);
		sprintf(dataString, "%d", data);
		writeDebugStreamLine("value5: %s", dataString);

    //loop to print a single character out of the dataString variable
		for (int x = 0; x < 4; x++){
      //get a single character to send
			char character = stringGetChar(dataString, x);
      //sned character
			sendChar(UART1, character);
			sendChar(UART2, character);
		  writeDebugStreamLine("Sending data: %c", character);
		}

    //send end transmission point to denote a newline
	  char end = ';';
	  clearDebugStream();
		writeDebugStreamLine("Sending data: %c", end);
		sendChar(UART1, end);
		sendChar(UART2, end);
	}
}
