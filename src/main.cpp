#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  for(int i = 1; i <= 4 ;i++){
    pinMode(i,INPUT)  ;	
  }
}

void loop() {
  // put your main code here, to run repeatedly:

   int reads = digitalRead(3);	//read the digital value on pin 9
  // Serial.print("1");

  Serial.println(reads);

  delay(100);

}
