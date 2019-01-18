
int echo_Pin=11;
int trig_Pin=12;
int ip_1=5;
int ip_2=6;
int e1=3;
int e2=9;

int ip_3=10;
int ip_4=13;
int led_pin=2;
int led_pin2=8;


long duration,distance;





void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(9600);
  pinMode(trig_Pin,OUTPUT);
  pinMode(echo_Pin,INPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(9,OUTPUT);
  
  
  pinMode(10,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(2,OUTPUT);
   pinMode(8,OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trig_Pin,LOW);
  delayMicroseconds(2);

   digitalWrite(trig_Pin,HIGH);
  delayMicroseconds(10);

    digitalWrite(trig_Pin,HIGH);
  delayMicroseconds(10);

  duration=pulseIn(echo_Pin,HIGH);

  distance=duration/29.2;
  Serial.println(distance);

  delay(50);

   while(Serial.available()==0);
  char data=Serial.read();
  Serial.println(data);

  if(data == '1' && (distance>200||distance<270 ))
  {

      digitalWrite(3,HIGH);
   digitalWrite(9,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
     digitalWrite(10,HIGH);
    digitalWrite(13,LOW);
    delay(5000);
    
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
     digitalWrite(10,LOW);
    digitalWrite(13,LOW);
    digitalWrite(2,LOW);
    digitalWrite(8,HIGH);
    delay(2000);
     digitalWrite(8,LOW);
    
    
  }
     

  
  else if(data == '2' && distance<200 )
  {

   digitalWrite(3,HIGH);
   digitalWrite(9,HIGH);
    digitalWrite(2,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
     digitalWrite(10,LOW);
    digitalWrite(13,HIGH);
    delay(5000);
    
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
     digitalWrite(10,LOW);
    digitalWrite(13,LOW);
    digitalWrite(2,LOW);
    digitalWrite(8,HIGH);
    delay(2000);
     digitalWrite(8,LOW);
    
    
  }
    

   else if(data =='3' &&  (distance>270 || distance<350))
  {

   digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
     digitalWrite(10,HIGH);
    digitalWrite(13,LOW);
    delay(5000);
    
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
     digitalWrite(10,LOW);
    digitalWrite(13,LOW);
    digitalWrite(2,LOW);
    digitalWrite(8,HIGH);
    delay(2000);
     digitalWrite(8,LOW);
    
    
  }
  else if(distance>360)
  {

   digitalWrite(9,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
     digitalWrite(10,LOW);
    digitalWrite(13,LOW);
    delay(4000);
    
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
     digitalWrite(10,LOW);
    digitalWrite(13,LOW);
    digitalWrite(2,LOW);
    digitalWrite(8,HIGH);
    delay(2000);
     digitalWrite(8,LOW);
    
    
  }
  delay(2000);
}
  






  
  

  







