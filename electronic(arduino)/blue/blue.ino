
int yellow=8;
int red=7;


void setup() {
  // put your setoutputup code here, to run once:
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  while(Serial.available()==0);
  char value=Serial.read();

  if(value=="one")
  {
    digitalWrite(yellow,HIGH);

    delay(1000);
  }
 else if(value=='2')
  {
    digitalWrite(red,HIGH);
    delay(1000);
  }

  else if(value=="eight")
  {
    digitalWrite(red,LOW);
    delay(1000);
  }

}
