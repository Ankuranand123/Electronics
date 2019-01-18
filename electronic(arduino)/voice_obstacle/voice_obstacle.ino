

int e1=3;
int ip_1=5;
int ip_2=6;
int e2=9;
int ip_3=10;
int ip_4=11;
int trig = 13; 
int echo = 12;
long t,h; 









void setup() {

  Serial.begin(9600);
 
    pinMode(e1, OUTPUT);
    pinMode(e2, OUTPUT);
 
    pinMode(ip_1, OUTPUT);
    pinMode(ip_2, OUTPUT);
    pinMode(ip_3, OUTPUT);
    pinMode(ip_4, OUTPUT);
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
}
 

void loop() {


digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
t = pulseIn(echo, HIGH);
h = (t/2) / 29.1;
Serial.println(h);

  while(Serial.available()==0);
  char data=Serial.read();
  if (data=='1')
  {
 
    analogWrite(e1, 153); 
    analogWrite(e2, 153); 
 
    digitalWrite(ip_1, HIGH);
    digitalWrite(ip_2, LOW);
    digitalWrite(ip_3, HIGH);
    digitalWrite(ip_4, LOW);
    delay(1000);
  }
 
    
 
    // change direction
      if (data=='2')
      {
            analogWrite(e1, 153); 
    analogWrite(e2, 153); 
      digitalWrite(ip_1, LOW);
    digitalWrite(ip_2, HIGH);
    digitalWrite(ip_3, LOW);
    digitalWrite(ip_4, HIGH);
     delay(1000);
 
      }

      if (h<=10)
{
 digitalWrite(ip_1, LOW);
    digitalWrite(ip_2, LOW);
    digitalWrite(ip_3, LOW);
    digitalWrite(ip_4, LOW);
delay(1000);
}
}
     

 
    

