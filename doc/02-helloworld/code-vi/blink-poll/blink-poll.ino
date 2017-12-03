int ledPin = 16;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    if (ledState == LOW)
      ledState = HIGH;  // Đổi trạng thái
    else
      ledState = LOW;   // Đổi trạng thái
    digitalWrite(ledPin, ledState);
  }
}
