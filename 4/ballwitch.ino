const int ballSwitchPin = 2;
const int ledPin = 13;
void setup() {
 Serial.begin(9600);
 pinMode(ballSwitchPin, INPUT);
 pinMode(ledPin, OUTPUT);
}
void loop() {
 int ballState = digitalRead(ballSwitchPin);

 if (ballState == HIGH) {
 digitalWrite(ledPin, HIGH);
 Serial.println("MOVED");
 } else {
 digitalWrite(ledPin, LOW);
 Serial.println("NOT MOVED");

 }delay(1000);
}
