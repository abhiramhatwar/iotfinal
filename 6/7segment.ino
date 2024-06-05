const int segments[] = {2, 3, 4, 5, 6, 7, 8};
const byte digitPatterns[10] = {
 B11111100, // 0
 B01100000, // 1
 B11011010, // 2
 B11110010, // 3
 B01100110, // 4
 B10110110, // 5
 B10111110, // 6
 B11100000, // 7
 B11111110, // 8
 B11110110 // 9
};
void setup() {
 for (int i = 0; i < 7; i++) {
 pinMode(segments[i], OUTPUT);
 }
}
void loop() {
 for (int i = 0; i < 10; i++) {
 displayDigit(i);
 delay(1000);
 }
}
void displayDigit(int digit) {
   byte pattern = digitPatterns[digit];
 for (int i = 0; i < 7; i++) {
 digitalWrite(segments[i], bitRead(pattern, i));
 }
}
