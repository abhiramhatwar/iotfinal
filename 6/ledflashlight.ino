const int flashLightPin = 8;
void setup() {
 pinMode(flashLightPin, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 digitalWrite(flashLightPin, HIGH);
 Serial.println("High");
 delay(1000);

 digitalWrite(flashLightPin, LOW);
 Serial.println("Low");
 delay(1000);
}
