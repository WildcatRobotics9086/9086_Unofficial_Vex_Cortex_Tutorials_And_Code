# Sensors
  If the Cortex is the brain, and motors are the muscles, then sensors would be the nerves of the VEX body. Sensors are used to gather data points that the code can use to automate tasks or help a driver. There are 2 types of sensor outputs, digital and analog.
## Digital
  These sensors are to ONLY go into the DIGITAL port block.
### Ultrasonic Sensors
  An ultrasonic sensor works by sending out a pulse of an ultrasonic wave and timing the amount of time it takes for the wave to return, similar to echolocation. The sensor is very useful in determining distance but must be used with caution as sound dampening materials (example: carpet floor tiles) may skew or distort the output. The sensor is strange as it has 2 sets of 3 pin connectors, one set is used to send the pulse signal and one is the sense signal. The ultrasonic sensor will output in raw data, centimeters, or inches.
  Do not cover the "eyes" of the sensor as it will then always provide an incorrect result until uncovered.
  The ultrasonic sensor does have a unspecified range and will provide innaccurate or null results if the range is exceeded.
### Bumper Switch
  The easiest sensor to understand as it is only a button. It will provide results in either 1 or 0 (true or false).
  Please note that the material on the top of the sensor is quite soft and deformable and can me broken by deformation.
### Limit Switch
  Also the easiest as it also contains a button. It will provide results in either 1 or 0 (true or false). It also has the advantage of a higher sensitivity (being easier to press)
  Please note that the switch material is very bendable and can change the sensitivity depending on the shape of the metal (DO NOT BEND THE METAL SWITCH)
### Shaft Encoder
  If you ever encounter the need to read the number of rotations or the speed of rotations, the optical shaft encoder is your friend. By using a light and light sensor paired with a spinnable disk with holes cut into it, the shaft encoder is able to read the number of flashes (that is how many holes have passed between the light and light sensor) to determine the amount of rotation. It usually requires 2 of the 3 pin connectors (due to having 2 sense components), but older models may only have 1. It will return rotation data that can be processed later.
## Analog
  These sensors are to ONLY go into the ANALOG port block.
### Potentiometer
  The potentiometer is a sensor that is limited to 127 degrees of motion in both directions similar to the servo motor (exception: V5 potentiometer). This sensor can give a very accurate measurement of the angle at which the axle running inside of it is at. It will return rotational location data that can be processed later.
  Please note that you can break the sensor by pushing it past the 127 degree mark causing incorrect results.
### Line Follower
  By using the infrared emissions from different colors, the line follower is able to determine where different colors are. By using two or three of these sensors you can make a robot follow a line. It will return the emission data of what is in front of it which can be processed later.
  Do not cover the "eye" of the sensor as it will then always provide and incorrect result until uncovered.
### Light Sensor
  By using a photocell the light sensor is able to determine the amount of light around it. These sensors can be found in the shaft encoders, but DO NOT TAKE APART THE SHAFT ENCODERS. It will provide results in the form of the light amount which can be processed later.
  Do not cover the little circle with the strange pattern on top as it will then always provide and incorrect result until uncovered.
