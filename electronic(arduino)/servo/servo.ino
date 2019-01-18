//Program by Jeremy Blum
//www.jeremyblum.com
//Controls a Servo Motor

//Include Servo Library
#include <Servo.h>

//Define Pins
int servoPin = 9;

//Create Servo Object
Servo ankur;

void setup()
{
 
  //Attaches the Servo to our object
  ankur.attach(servoPin);
}

void loop()
{

  //We can Turn a Servo to 180 degrees
  for (int i = 0; i <=180; i=i+60)
  {
    ankur.write(i);
    delay(1000);
  }
  for (int i = 180; i >=1; i=i-90)
  {
    ankur.write(i);
    delay(1000);
  }
  
}

