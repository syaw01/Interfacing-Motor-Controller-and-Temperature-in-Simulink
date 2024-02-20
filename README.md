# Interfacing-Motor-Controller-and-Temperature-in-Simulink
In this tutorial show development of motor controller and temperature data acquisition in Simulink. 
The thermocouple type K with max6675 module used as temperature instrumentation.
The brushed dc motor MY1016 was supplied with 24V DC. 
While for motor driver mdd10 shield used and it can be used for other type of dc brushed motor. 
Also, the motor shield can support 10A continuous and 30A peak. 
This model also comes with an encoder model to get real situation speed of dc motor where the rotary encoder attached to the motor.
Keep in mind, this model was build in MATLAB R2022b. For other version of MATLAB some adjustment need to consider.

These are library and Arduino code used in development model:
1. "encoder_rpm" Arduino file for to read speed of motor in RPM using endcoder 500 PPR.
2. "max6675withmega" Arduino file for read temperature in celsuis reading using 5 device of thermocouple with MAX6675 module.
3. "arduino.mlpkginstall" MATLAB library for Simulink support package for Arduino hardware.
4. "encoder code.txt" Arduino code for encoder used in s-function builder in Simulink model.
5. "max6675 code.txt" Arduino code for max6675 used in s-function builder in Simulink model.
6. "max6675.cpp" Arduino library for function reading in celsius and fahrenheit max6675 module.
7. "max6675.h" Arduino library for header max6675 module.
8. "mingw.mlpkginstall" MATLAB library for compile s-function builder for Arduino code C++.
9. "tempDAQ.slx" motor controller and temperature daq model in Simulink for MATLAB R2022b version.
10. "https://www.youtube.com/watch?v=vFup14vi6H4&ab_channel=NathanielTyler" example of integrate max6657 with Ardunio in SImulink
