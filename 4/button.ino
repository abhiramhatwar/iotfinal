void setup() {
 Serial.begin(9600);
 pinMode(3, INPUT);
}
void loop() {
 int value = digitalRead(3);
 if(value == 1){
 Serial.println("Tilted");
 delay(1000);
 } else {
 Serial.println("Not");
 delay(1000);
 }
} 
