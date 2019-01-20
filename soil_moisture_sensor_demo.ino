#define MOISTURE_PIN 0

void setup() {
  Serial.begin(9600);
  pinMode(MOISTURE_PIN, INPUT);
}

void loop() {
  int moistureVal = analogRead(MOISTURE_PIN);
  Serial.println(moistureVal);
  delay(500);
}
