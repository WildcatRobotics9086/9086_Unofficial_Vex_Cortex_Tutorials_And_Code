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
	int i;
	while(true){

    //create an array of data
		string dataArray[8];
		i = 0;

    //get UART data BEFORE calculation
		while(true){
      
      //get UART character on the reciever pins
			char originalData = getChar(UART1);
			int dataRecieved = originalData;
			clearDebugStream();
			writeDebugStreamLine("Data recieved: %i", dataRecieved);

      //get the value of the data
			if ((dataRecieved >= 0) && (dataRecieved != 255)){
				writeDebugStreamLine("dataInt: %i", dataRecieved);

        //if the data is an end character then break
				if (dataRecieved == 59){
					writeDebugStreamLine("BREAK");
					i = 0;
					break;
				}

        //print to debug
				writeDebugStreamLine("Char: %c", dataRecieved);
				writeDebugStreamLine("i: %d", i);

        //the single character to the previous data and repeat unless break
				char dataChar = dataRecieved;
				dataArray[i] = dataChar;
				i = i + 1;
			}

      //make all of the data into string/int format to use on motors and debug
			string data0 = dataArray[0];
			string data1 = dataArray[1];
			string data2 = dataArray[2];
			string data3 = dataArray[3];
			strcat(data0, data1);
			strcat(data0, data2);
			strcat(data0, data3);
			int data = atoi(data0);

      //debug stream print
			writeDebugStreamLine("Data: %i", data);
			writeDebugStreamLine("Data recieved: %d", data);

      //make it move
			if (data >= 0){ //If any data
				if (data >= 1000){ //If forwardbackward data
					if (data >= 1127){ //forward
						int value = data - 1127;
						motor[port2] = value;
						motor[port3] = value;
						motor[port8] = value;
						motor[port9] = value;
					}
					if (data <= 1127){ //backward
						int value = data - 1127;
						motor[port2] = value;
						motor[port3] = value;
						motor[port8] = value;
						motor[port9] = value;
					}
				}
				if (data >= 2000){ //If leftright data
					if (data >= 2127){ //right
						int value = data - 2127;
						motor[port2] = value;
						motor[port3] = value;
						motor[port8] = value;
						motor[port9] = value;
					  }
					if (data <= 2127){ //left
						int value = data - 2127;
						motor[port2] = value;
						motor[port3] = value;
						motor[port8] = value;
						motor[port9] = value;
					  }
					}
				}
			}
		}
	}
}
