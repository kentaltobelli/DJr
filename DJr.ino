// DJr - DJ Jr. Robotic Project
// two wheeled balancing robot

// analogWrite on pins 3, 9, 10 and 11

#include "BNO055.h"

// Left/Right Forward/Back PWM pin assignments
#define R_F 3
#define R_B 9
#define L_F 10
#define L_B 11

void setup () {
	Serial.begin(9600);
	Serial.println("Initializing...");

	pinMode(3, OUTPUT);
	digitalWrite(3, 0);
	pinMode(9, OUTPUT);
	digitalWrite(9, 0);
	pinMode(10, OUTPUT);
	digitalWrite(10, 0);
	pinMode(11, OUTPUT);
	digitalWrite(11, 0);
}

void loop () {
	// analogWrite(L_F,128);
	// delay(1000);
	// analogWrite(L_F,0);
	// analogWrite(L_B,128);
	// delay(1000);
	// analogWrite(L_B,0);
	// analogWrite(R_F,128);
	// delay(1000);
	// analogWrite(R_F,0);
	// analogWrite(R_B,128);
	// delay(1000);
	// analogWrite(R_B,0);

	digitalWrite(10, 1);
	digitalWrite(11, 0);
	delay(1000);

	digitalWrite(10, 0);
	digitalWrite(11, 0);
	delay(500);

	digitalWrite(10, 0);
	digitalWrite(11, 1);
	delay(1000);

	digitalWrite(10, 0);
	digitalWrite(11, 0);
	delay(5000);
}
