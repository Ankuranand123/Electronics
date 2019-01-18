
int ledPin=8;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);

}

void loop() {
  // put your mainavailable code here, to run repeatedly
  while(Serial.available()==0);
  char data=Serial.read();
  if(data == '1')
  {
    digitalWrite(ledPin,HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }

}
