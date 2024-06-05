include <IRremoteInt.h>
#include <IRremote.h>

int RECV_PIN = 11; //define input pin on Arduino
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
  pinMode(LED_BUILTIN, OUTPUT);

}
void loop() {
  if (irrecv.decode( & results)) {
    String hex = String(results.value, HEX);
    Serial.print("Hexadecimal Code: ");
    Serial.println(hex);

    if(hex == "ff18e7"){
        digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    }

    if(hex == "ff4ab5"){
        digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    }

    irrecv.resume(); // Receive the next value
  }
}
