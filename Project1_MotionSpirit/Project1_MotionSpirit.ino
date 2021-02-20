/*
Michal Rinott <http://people.interaction-ivrea.it/m.rinott>
Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  

int potpin = 0;  
int val;    

void setup() {
  myservo.attach(9); 
}

void loop() {
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);     
  myservo.write(val);                  
  delay(5);                           
}
