// Program to print out ultrasonic distance values
#define TRIG_PIN 7
#define ECHO_PIN 10

void setup() {
  // put your setup code here, to run once:
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIG_PIN, OUTPUT);
  Serial.begin(9600);
}

// getUltrasonicVal() is a function which will return 
// the distance detected by the ultrasonic sensor
int getUltrasonicVal() {
  // Clears the Trigger Pin by turning it off
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  // Turns on the Trigger Pin for 10 microseconds and off
  // to send a signal
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);


  // Printing the echo time in cm
  int echoDistance = pulseIn(ECHO_PIN, HIGH) * 0.034 / 2;
  return echoDistance;
}

void loop() {
  int echoDistance = getUltrasonicVal();
  Serial.println(echoDistance);
}
