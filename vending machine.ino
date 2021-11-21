#include <Servo.h>
Servo myServo1;
Servo myServo2;
//int button1 = 2;
//int button2 = 5;


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  //pinMode(button1, INPUT);
  //pinMode(button2, INPUT);
  myServo1.attach(9);
  myServo2.attach(7);
}

void loop() {
  if(Serial.available()>0){
    char data = Serial.read();
    switch(data){
      case 'a':
      digitalWrite(LED_BUILTIN, HIGH);
      myServo1.write(180);
      delay(3000); // can be changed to turn for longer

      break;

      case 'b':
      digitalWrite(LED_BUILTIN, HIGH);
      myServo2.write(180);
      delay(3000); // can be changed to turn for longer

      break;

      default : break;
    }
    Serial.println(data);
  }
 /* if (digitalRead(button1) == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    myServo1.write(180);
    delay(3000); // can be changed to turn for longer
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
    myServo1.write(90);
  }

  if(digitalRead(button2) == HIGH){
    digitalWrite(LED_BUILTIN, HIGH);
    myServo2.write(180);
    delay(3000); // can be changed to turn for longer
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
    myServo2.write(90);
  }
*/    
}
