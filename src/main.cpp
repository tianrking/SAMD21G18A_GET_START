#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  for(int i = 2; i <= 5 ;i++){
    pinMode(i,INPUT)  ;	
  }
}

void loop() {

  int temp = 1;
  for(int i = 2; i <= 5 ;i++){
    Serial.print(digitalRead(i));
    temp *= digitalRead(i);
  }

  if(temp==1){
    analogWrite(6, 220);  //A2
  }
  Serial.print("\n");
  delay(100);

}
