const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
void setup() {
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}
void loop() {
setColor(255, 0, 0);
delay(300);
Serial.println("RED");
setColor(0, 255, 0);
delay(300);
Serial.println("GREEN");
setColor(0, 0, 255);
delay(300);
Serial.println("BLUE");
}
void setColor(int redValue, int greenValue, int blueValue) {
digitalWrite(redPin, redValue);
digitalWrite(greenPin, greenValue);
digitalWrite(bluePin, blueValue);
}
