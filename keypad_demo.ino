//// Program to print values from a 16 Key Touch Pad
//#define TOUCH_PIN 11
//void setup() {
//  // put your setup code here, to run once:
//  pinMode(TOUCH_PIN, INPUT);
//  Serial.begin(9600);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  int pressValue = analogRead(TOUCH_PIN);
//  Serial.println(pressValue);
//}

#define CLK_PIN 2
#define DATA_PIN 3

void setup() {
  Serial.begin(9600);
  pinMode(CLK_PIN, OUTPUT);  
  pinMode(DATA_PIN, INPUT); 

}

void loop() {
  int key = getkey();
  
  if (key != 0) {
    Serial.println(key);
  }

  delay(150);
}

int getkey(void) {
  int num = 0;

  for(int count = 1; count < 9; count++) {
    digitalWrite(CLK_PIN, LOW); 
    if (digitalRead(DATA_PIN) == 0) {
      num = count; 
      break;
    }
    
    digitalWrite(CLK_PIN, HIGH);
    
  }  

  

  return num; 

}
