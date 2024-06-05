int sensorPin = 7;
int val;
void setup() {
 pinMode(sensorPin, INPUT);
 Serial.begin(9600);
}
void loop() {
 val = digitalRead(sensorPin);

 if (val == HIGH) {
 Serial.println("Line detected");
 } else {
 Serial.println("Line NOT detected");
 }
 delay(500);
}
