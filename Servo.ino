#include <Servo.h>

Servo myservo;

int servoPin = 9;
  // delay(3600000); will run after an hour

void setup() {
  // put your setup code here, to run once:
  myservo.attach(servoPin);
}

void loop() {
  myservo.write(0);
  delay(500);
  myservo.write(15);
  delay(500);
  myservo.write(30);
  delay(500); 
  myservo.write(45);
  delay(500);
  myservo.write(60);
  delay(500);
  myservo.write(75);
  delay(500);
  myservo.write(90);
  delay(500);
  myservo.write(105);
  delay(500);
  myservo.write(120);
  delay(500);
  myservo.write(135);
  delay(500);
  myservo.write(150);
  delay(500);
  myservo.write(165);
  delay(500);
  myservo.write(180);
  delay(500);
  myservo.write(195);
  delay(500);
  myservo.write(210);
  delay(500);
  myservo.write(225);
  delay(500);
  myservo.write(240);
  delay(500);
  myservo.write(255);
  delay(500);
  myservo.write(270);
  delay(500);
  myservo.write(285);
  delay(500);
  myservo.write(300);
  delay(500);
  myservo.write(315);
  delay(500);
  myservo.write(330);
  delay(500);
  myservo.write(345);
  delay(500);
  myservo.write(360);
  delay(500);
  return;
}





