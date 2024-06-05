int led = 13;
int digitalPin = 2;
int analogPin = A0;
int digitalVal;
int analogVal;
void setup()
{
 pinMode(led, OUTPUT);
 pinMode(digitalPin, INPUT);
 //pinMode(analogPin, OUTPUT);
 Serial.begin(9600);
}
void loop()
{
 digitalVal = digitalRead(digitalPin);
 analogVal = analogRead(analogPin);
 Serial.println(analogVal);
 if(analogVal >45)
 {
 digitalWrite(led, HIGH);
 Serial.println("Fire detected");
 }
 else
 {
 digitalWrite(led, LOW);
 Serial.println("Fire not detected");
 }
 //Serial.println(analogVal);
 delay(100);
}
