// Program to read joystick values

#define X_PIN 4
#define Y_PIN 5
#define SWITCH_PIN 2

void setup() {
  Serial.begin(9600);
  pinMode(SWITCH_PIN, INPUT);
  digitalWrite(SWITCH_PIN, HIGH);
}

void loop() {
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_PIN));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_PIN));
  Serial.print("\n");
  Serial.print("Switch status: ");
  Serial.print(digitalRead(SWITCH_PIN));
  Serial.print("\n\n");
  delay(1000);
}
