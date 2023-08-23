**DO NOT PROCEED WITHOUT READING DOCUMENTS AND IMAGE DIAGRAMS**
_EXTREMELY GOOD CODE KNOWLEDGE REQUIRED_

UART is a method to link two Cortexes together. It uses two transmission pins, a common +5V, and a common ground. Both UART1 and UART2 can be found next to the I2C bus on the Cortex. UART ports can also act as an input for power, however this is not entirely recommended.

Due to Cortex UART limitations, we must disconnect all data sent to the other Cortex into multiple single characters. Without the breakup operation, the data transmitted will be skewed and can even max out at integer limits of 127.

When using UART with a single master Cortex, you must also disable the VEXNet connection on the slave Cortex to ensure that it does not try to collect a VEXNet signal out of a nonexistent VEXNet key.
