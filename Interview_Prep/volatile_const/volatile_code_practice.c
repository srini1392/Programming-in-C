/*
Problem

🧠 Problem Title:
“The Stable Sensor: Managing Static, Volatile, and Constant Variables”
Problem Description:
In an embedded system, a sensor reading function is called repeatedly in a control loop.
You are asked to simulate the behavior of a sensor reading system where:

A static variable is used to store the number of times the sensor has been read.

A volatile variable represents the sensor register value, which can change at any time (simulate this using user input).

A const variable holds the maximum safe threshold for the sensor value.

Your task is to implement a function readSensor() that:

Reads a volatile sensor value from input.

Increments a static counter each time it’s called.

Prints a warning if the sensor value exceeds the constant threshold.

Returns the number of times the function has been called.

Function Signature:
int readSensor(void);
Input Format:
The program will take N — the number of sensor readings.

Followed by N integers representing sensor values.

Output Format:
For each sensor reading, print:

The reading number (Read #1, Read #2, …)

The sensor value

A warning if the value exceeds the threshold.

Finally, after all readings, print the total number of times the sensor was read.

Example:
Input:
5
12 45 78 33 90
Output:
Read #1: Sensor Value = 12
Read #2: Sensor Value = 45
Read #3: Sensor Value = 78 ⚠️ Warning: Above safe threshold (50)
Read #4: Sensor Value = 33
Read #5: Sensor Value = 90 ⚠️ Warning: Above safe threshold (50)
Total Reads = 5
Explanation:
The static counter persists across function calls and counts total reads.

The volatile variable simulates sensor data changing unpredictably.

The const variable represents the fixed safe limit of the sensor value.

 
Concepts Tested:
✅ Understanding of static variable persistence across function calls
✅ Correct use of volatile for simulating changing hardware registers
✅ Use of const for defining immutable thresholds
✅ Looping and function behavior in embedded-style code


Please select GCC compiler C(GCC 9.2.0)  from Drop Down Menu and then start Coding

statement.

*/
