# Motor Control
## Motor Controllers
  When using a VEX motor from the Cortex series of products it is important to understand the use of a motor controller. These will control motors of the variants 269, 393, and regular motor modules. Motor controllers are used to determine the speed/power and direction of each motor's movement. Please remember that this does not apply to the newer V5 Smart Motors or the servo modules. All motors max out their speed at points -127 and 127 respectively.
### Motor Controller (Cortex)
  As you look at the motor block on the Cortex you may see that the two ports of 1 and 10 only contain space for two wire connectors. This observation is important to understand how the two ports work. Ports 1 and 10 already have motor controllers inside of them, this will allow the motors connected directly to the ports to operate as if there was a regular motor controller connected to them.
### Motor Controller 29
  For the rest of the motor control block on the Cortex a motor controller 29 is required, these motor controllers are placed between the motor and the block of ports for motors. Notably the controllers have 3 pins on one side and 2 on the other. The 2 side can go directly into the motor while the 1 side goes into the port block.
## Servo Motor
  Servo motors are essential for any precise manuever that is performed in the 127 degree range. These motors do not need a special motor controller connected to them as it is baked into the servo itself. Remember that servos can be damaged if they are pushed past their limits (something that must be done manually), in fact it is best to not view the servo as a regular motor and instead view it as a point of fine rotational movement because of this issue.
