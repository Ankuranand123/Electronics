//Program by Jeremy Blum
//www.jeremyblum.com
//Test Motor Speed Using a Transistor

//Define Pins
int motorPin = 9;
int sensePin=0;
int ledPin=11;

void setup()
{
  //Set the PWM Motor pin as an output
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  //Increase Motor Speed from 0 -> 255

  int value=analogRead(sensePin);
  Serial.println(value);
  if(value<10)
  {

   
    for (int i=0; i<=255; i++)
  {
    
    analogWrite(motorPin, i);
    delay(10);
    
    
  }
  
    
  }
  
  else{
    for(int i=255; i>=0; i--)
  {
    analogWrite(motorPin, i);
    delay(10);
    
  }
    
  }
  //Hold it!
  
  //Decrease Motor Speed from 255 -> 0
  
  

  
}

