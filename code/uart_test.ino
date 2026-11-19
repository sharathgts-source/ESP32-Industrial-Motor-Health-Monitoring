void setup() {
  Serial.begin(9600);
  Serial.println("ESP32 UART Communication Started");
}

void loop() {
  if (Serial.available()) {
    char receivedData = Serial.read();

    Serial.print("Received: ");
    Serial.println(receivedData);
  }
}
