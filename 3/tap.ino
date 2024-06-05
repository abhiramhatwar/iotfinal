const int tapSensorPin = 2; 

void setup() {
  pinMode(tapSensorPin, INPUT_PULLUP); 
  Serial.begin(9600); 
}

void loop() {
  int tapState = digitalRead(tapSensorPin); 
  
  if (tapState == LOW) {
    Serial.println("Tap detected!"); 
  }
  
  delay(100);
}
