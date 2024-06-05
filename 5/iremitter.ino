const int irLedPin = 8;
void setup() {
 Serial.begin(9600);
 pinMode(irLedPin, OUTPUT);
}
void loop() {
 digitalWrite(irLedPin, HIGH);
 Serial.println("EMITTED");
 delay(100);

 digitalWrite(irLedPin, LOW);
 Serial.println("NOT EMITTED");
 delay(100);
} 
