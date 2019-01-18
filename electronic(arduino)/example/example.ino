int led=13;
int ldr=0;
int mot=4;

void setup(){


  pinMode(led,OUTPUT);
  pinMode(mot,OUTPUT);
  
}
void loop(){

  digitalWrite(mot,LOW);
  if(analogRead(ldr)>=100)
  {
    digitalWrite(led,HIGH);
    digitalWrite(mot,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(100);
  }
  else{
    digitalWrite(led,HIGH);
    
    
  }
}

