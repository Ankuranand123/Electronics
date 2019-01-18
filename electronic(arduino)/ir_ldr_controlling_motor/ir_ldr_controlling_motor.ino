
int sensePin=A0;
int buzzer=8;
int irPin=A1;




void setup() {
  // put your setup code here, to run once:
pinMode(sensePin,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(irPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  if((analogRead(sensePin)<200) && (analogRead(irPin)<100)){
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
  }
  Serial.println(analogRead(irPin));
  delay(1000);

}
