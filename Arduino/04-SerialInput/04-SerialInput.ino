const int ledPin = 3;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(100);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available()) {
    int ledValue = Serial.parseInt();
    Serial.println(ledValue);
    analogWrite(ledPin, ledValue);
  }
}
