
int led_pin=7;
int ir_pin=0;

void setup() {
  // put your setup code here, to run once:

  pinMode(led_pin,OUTPUT);
  pinMode(ir_pin,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(analogRead(ir_pin)<100)
  {
    
    digitalWrite(led_pin,LOW);
  }
  else
  {
    digitalWrite(led_pin,HIGH);
  }

}
