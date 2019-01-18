int ledPin=8;
int ledPin1=9;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);
  delay(200);
  digitalWrite(ledPin,LOW);
 

  
  digitalWrite(ledPin1,HIGH);
  delay(200);
  digitalWrite(ledPin1,LOW);
 
  
  

}
