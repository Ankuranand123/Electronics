


int ledPin=13;



void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);      //13 pin is connected to output

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(500);
  digitalWrite(ledPin, LOW);
  delay(500);

}
