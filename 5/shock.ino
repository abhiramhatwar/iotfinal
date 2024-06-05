const int shockSensorPin = 7;
Sensor module
const int alertPin = 13;
void setup() {
 pinMode(shockSensorPin, INPUT);
 pinMode(alertPin, OUTPUT);
 digitalWrite(alertPin, LOW);
 Serial.begin(9600);
}
void loop() {
 int shockValue = digitalRead(shockSensorPin);

 if (shockValue == HIGH) {
 Serial.println("Shock detected!");
 digitalWrite(alertPin, HIGH);
 } else {
 digitalWrite(alertPin, LOW);
 Serial.println("Shock NOT detected!");
 }
 delay(1000);
}
