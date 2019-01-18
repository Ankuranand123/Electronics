

int ledPin=13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  while(Serial.available()==0);
  int val=Serial.read()-'0';
  if(val==1)
  {
    Serial.println("LED is on");
    digitalWrite(ledPin,HIGH);
  }else if(val==0)
  {
    Serial.println("LED is off");
    digitalWrite(ledPin,LOW);
  }
  else
  {
    Serial.println("INVALID");
    
  }
  Serial.flush();


}
