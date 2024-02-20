#include <max6675.h>

// #include "max6675.h"

// DO & CLK PINS for Arduino UNO are 12 & 13 (see pin-out-map for other PLC models)
int thermoDO1 = 35;      // Pin 35
int thermoCLK1 = 31;     // Pin 31

int thermoDO2 = 45;      // Pin 45
int thermoCLK2 = 41;     // Pin 41

int thermoDO3 = 47;      // Pin 57
int thermoCLK3 = 51;     // Pin 51

//Thermocouple 1        // Setup Thermocouple
int thermoCS1 = 29;     // Pin 35
MAX6675 thermocouple1(thermoCLK1, thermoCS1, thermoDO1);  // Equation called from max6675.h

//Thermocouple 2        // Setup Thermocouple
int thermoCS2 = 33;      // Pin 37
MAX6675 thermocouple2(thermoCLK1, thermoCS2, thermoDO1);  // Equation called from max6675.h

//Thermocouple 3        // Setup Thermocouple
int thermoCS3 = 39;     // Pin 39
MAX6675 thermocouple3(thermoCLK2, thermoCS3, thermoDO2);  // Equation called from max6675.h

//Thermocouple 4        // Setup Thermocouple
int thermoCS4 = 43;      // Pin 41
MAX6675 thermocouple4(thermoCLK2, thermoCS4, thermoDO2);  // Equation called from max6675.h

//Thermocouple 5        // Setup Thermocouple
int thermoCS5 = 49;     // Pin 43
MAX6675 thermocouple5(thermoCLK3, thermoCS5, thermoDO3);  // Equation called from max6675.h


void setup() {
  Serial.begin(115200);
  // use Arduino pins

  // //Thermocouple 1 (Pull Voltage up to 5 Volts)
  // pinMode(thermoCS1, OUTPUT); digitalWrite(thermoCS1, HIGH);

  // //Thermocouple 2 (Pull Voltage up to 5 Volts)
  // pinMode(thermoCS2, OUTPUT); digitalWrite(thermoCS2, HIGH);

  // //Thermocouple 3 (Pull Voltage up to 5 Volts)
  // pinMode(thermoCS3, OUTPUT); digitalWrite(thermoCS3, HIGH);

  // //Thermocouple 4 (Pull Voltage up to 5 Volts)
  // pinMode(thermoCS4, OUTPUT); digitalWrite(thermoCS4, HIGH);

  // //Thermocouple 5 (Pull Voltage up to 5 Volts)
  // pinMode(thermoCS5, OUTPUT); digitalWrite(thermoCS5, HIGH);
  
//  pinMode(thermoCS6, OUTPUT); digitalWrite(thermoCS6, HIGH);
  
  Serial.println("MAX6675 test");
  // wait for MAX chip to stabilize
  delay(500);
}

void loop() {
  // basic readout test, just print the current temp

  // Thermocouple 1    Readout
  Serial.println(" new temp");
  Serial.print(thermocouple1.readCelsius());     Serial.println(" = 1  ");  //brush
  Serial.print(thermocouple2.readCelsius());     Serial.println(" = 2  ");  //bearing
  Serial.print(thermocouple3.readCelsius());     Serial.println(" = 3  ");  //magnet
  Serial.print(thermocouple4.readCelsius());     Serial.println(" = 4  ");  //body
  Serial.print(thermocouple5.readCelsius());     Serial.println(" = 5  ");  //ambient
  Serial.println();
//  Serial.print(thermocouple6.readCelsius());     Serial.println(" = 6  "); Serial.println();


  delay(500);
}
