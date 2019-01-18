
int SensePin=0;
int ledPin=9;


void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
int value=analogRead(SensePin);
if (value<10)
{
  digitalWrite(ledPin, HIGH);
}else
{
  digitalWrite(ledPin, LOW);
}

}
