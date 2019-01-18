#define E1 3  // Enable Pin for motor 1
#define E2 5  // Enable Pin for motor 2
 
#define I1 6 // Control pin 1 for motor 1
#define I2 9  // Control pin 2 for motor 1
#define I3 11  // Control pin 1 for motor 2
#define I4 10  // Control pin 2 for motor 2
 
void setup() {

  Serial.begin(9600);
 
    pinMode(E1, OUTPUT);
    pinMode(E2, OUTPUT);
 
    pinMode(I1, OUTPUT);
    pinMode(I2, OUTPUT);
    pinMode(I3, OUTPUT);
    pinMode(I4, OUTPUT);
}
 

void loop() {

  while(Serial.available()==0);
  char data=Serial.read();
  if (data=='1')
  {
 
    analogWrite(E1, 153); // Run in half speed
    analogWrite(E2, 153); // Run in full speed
 
    digitalWrite(I1, HIGH);
    digitalWrite(I2, LOW);
    digitalWrite(I3, HIGH);
    digitalWrite(I4, LOW);
    delay(1000);
  }
 
    
 
    // change direction
      if (data=='2')
      {
            analogWrite(E1, 153); // Run in half speed
    analogWrite(E2, 153); // Run in full speed
      digitalWrite(I1, LOW);
    digitalWrite(I2, HIGH);
    digitalWrite(I3, LOW);
    digitalWrite(I4, HIGH);
     delay(1000);
 
      }
     
}
 
    

