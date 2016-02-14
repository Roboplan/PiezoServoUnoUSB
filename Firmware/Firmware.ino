
#include "Global.h"

#define ServoFirstPos	20
#define ServoSecondPos	150

void setup() 
{
	Serial.begin(9600);
	servo.attach(SERVO_SIGNAL_PIN);
	servo.write(ServoFirstPos);
	Serial.println("start");
	
}

void loop() 
{	
	if(piezo.read() > 1000)
	{
		servo.write(ServoSecondPos);
		Serial.println("knock detected");
		delay(1000);
		servo.write(ServoFirstPos);
	}
}
