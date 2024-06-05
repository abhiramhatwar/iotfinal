const int soundSensorPin = A0;
const int ledPin = 2;
void setup() {
 pinMode(soundSensorPin, INPUT);
 pinMode(ledPin, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 int soundValue = analogRead(soundSensorPin);

 Serial.print("Sound Level: ");
 Serial.println(soundValue);
 int threshold = 400;
 if (soundValue > threshold) {
 digitalWrite(ledPin, HIGH);
 } else {
 digitalWrite(ledPin, LOW);
 }
 delay(100);
}
