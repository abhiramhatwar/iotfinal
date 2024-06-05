const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;
const int colors[7][3] = {
 {255, 0, 0},
 {0, 255, 0},
 {0, 0, 255},
 {255, 255, 0},
 {0, 255, 255},
 {255, 0, 255},
 {255, 255, 255}
};
void setup() {
 pinMode(redPin, OUTPUT);
 pinMode(greenPin, OUTPUT);
 pinMode(bluePin, OUTPUT);
}
void loop() {
 for (int colorIndex = 0; colorIndex < 7; colorIndex++) {
 setColor(colors[colorIndex][0], colors[colorIndex][1], colors[colorIndex][2]);
 delay(1000);
 }
}
void setColor(int redValue, int greenValue, int blueValue) {
 analogWrite(redPin, redValue);
 analogWrite(greenPin, greenValue);
 analogWrite(bluePin, blueValue);
}
