


int e1=3;
int ip_1=5;
int ip_2=6;
int echo_Pin=11;
int trig_Pin=12;
long duration,distance;



void setup() {
  // put your setup code here, to run once:

   Serial.begin(9600);
 
    pinMode(e1, OUTPUT);
        pinMode(ip_1, OUTPUT);
    pinMode(ip_2, OUTPUT);
      pinMode(trig_Pin,OUTPUT);
  pinMode(echo_Pin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trig_Pin, LOW);
delayMicroseconds(2);
digitalWrite(trig_Pin, HIGH);
delayMicroseconds(10);
digitalWrite(trig_Pin, LOW);
duration= pulseIn(echo_Pin, HIGH);
distance = (duration/2) / 29.1;
Serial.println(duration);

  while(Serial.available()==0);
  char data=Serial.read();
  if (data=='1')
  {
 
    analogWrite(e1, 153); 
   
 
    digitalWrite(ip_1, HIGH);
    digitalWrite(ip_2, LOW);
    
    delay(1000);
  }

  if (duration<=10)
{
 digitalWrite(ip_1, LOW);
    digitalWrite(ip_2, LOW);
   
delay(1000);
}

}
