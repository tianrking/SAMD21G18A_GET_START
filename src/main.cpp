#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  pinMode(2,INPUT)  ;	//set pin 9 as INPUT 
  pinMode(3,INPUT)  ;	//set pin 9 as INPUT 
  // pinMode(5,INPUT)  ;	//set pin 9 as INPUT 
  // pinMode(6,INPUT)  ;	//set pin 9 as INPUT 
}

void loop() {
  // put your main code here, to run repeatedly:

   int reads = digitalRead(3);	//read the digital value on pin 9
  // Serial.print("1");

  Serial.println(reads);

  delay(100);

}
