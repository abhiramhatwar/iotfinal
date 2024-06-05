const int joyXPin = A0;
const int joyYPin = A1;
const int joySwitchPin = 2;
void setup() {
 Serial.begin(9600);
 pinMode(joyXPin, INPUT);
 pinMode(joyYPin, INPUT);
 pinMode(joySwitchPin, INPUT_PULLUP);
 digitalWrite(joySwitchPin, HIGH);
}
void loop() {
 int joyXValue = analogRead(joyXPin);
int joyYValue = analogRead(joyYPin);
int switchState = digitalRead(joySwitchPin);
Serial.print("X: ");
Serial.print(joyXValue);
Serial.print(", Y: ");
Serial.print(joyYValue);
Serial.print(", Switch: ");
Serial.println(switchState);
delay(500);
} 
