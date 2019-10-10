


const int ledPin = 13; // the pin that the LED is attached to
int incomingByte; // a variable to read incoming serial data into

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // check for incoming serial data:
  if (Serial.available() > 0) {
    // read previous byte in the serial buffer:
    incomingByte = Serial.read();
    // turn on the LED:
    if (incomingByte == 1) {
      digitalWrite(ledPin, HIGH);
    }
    // turn off the LED:
    if (incomingByte == 0) {
      digitalWrite(ledPin, LOW);
    }
  }
}
