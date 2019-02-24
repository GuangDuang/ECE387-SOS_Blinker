void setup() {
    pinMode(3, OUTPUT);

}

void loop() {
   for (int i = 0; i < 3; i++) {
    digitalWrite(3, HIGH);  
    delay(300);
    digitalWrite(3, LOW);    
    delay(300);
  }
  for (int i = 0; i < 3; i++) {
    digitalWrite(3, HIGH);  
    delay(1500);
    digitalWrite(3, LOW);    
    delay(500);
  }
   for (int i = 0; i < 3; i++) {
    digitalWrite(3, HIGH);  
    delay(300);
    digitalWrite(3, LOW);    
    delay(300);
  }
   delay(2000);
                     
  

}
