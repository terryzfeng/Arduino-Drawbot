
/*
  Test file for Car Drawing Robot 
*/
#include <Stepper.h>
#include <Servo.h>
Servo servoMain;

// DC MOTOR
#define MOTOR_GND 4
#define MOTOR_CTRL 5

void setup() {
  // put your setup code here, to run once:
  pinMode(MOTOR_GND, OUTPUT);
  pinMode(MOTOR_CTRL, OUTPUT);
  digitalWrite(MOTOR_GND, LOW);
  digitalWrite(MOTOR_CTRL, LOW);
  servoMain.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Power: High\n");
  digitalWrite(MOTOR_CTRL, HIGH);

  Serial.print("turning 45\n");
   servoMain.write(45);  // Turn Servo Left to 45 degrees
   delay(5000);          // Wait 1 second
  Serial.print("turning 1\n");
   servoMain.write(1);   // Turn Servo Left to 0 degrees
   delay(5000);          // Wait 1 second
  Serial.print("turning 90\n");
   servoMain.write(90);  // Turn Servo back to center position (90 degrees)
   delay(5000);          // Wait 1 second
  Serial.print("turning 135\n");
   servoMain.write(135); // Turn Servo Right to 135 degrees
   delay(5000);          // Wait 1 second
  Serial.print("turning 180\n");
   servoMain.write(180); // Turn Servo Right to 180 degrees
   delay(5000);          // Wait 1 second
  Serial.print("turning 90\n");
   servoMain.write(90);  // Turn Servo back to center position (90 degrees)
   delay(5000);          // Wait 1 second   

  Serial.print("Power: Low\n");
  digitalWrite(MOTOR_CTRL, LOW);
}
