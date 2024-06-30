#include <Servo.h>

Servo myServo;
int servoPin = 9;
int openPosition = 0;
int closePosition = 90;

void setup() 
{
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() 
{
  char command = Serial.read();

  if (command == 'o') 
  {
    myServo.write(openPosition); 
    Serial.println("Claw opened");
  }
  else if (command == 'c') 
  {
    myServo.write(closePosition); 
    Serial.println("Claw closed");
  }

  delay(1000);
}
