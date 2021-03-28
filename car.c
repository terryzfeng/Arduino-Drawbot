/* 
  Car file for arduino
*/
#include <Servo.h>

#define MOTOR_CTRL 5
#define SERVO_CTRL 9

#define MOTOR_SPEED 10

Servo servoMain;

// Prototypes
void initServo(int pin);
void initMotor();
void turnServo(int dir);

void setup() {
  initServo(SERVO_CTRL);
  initMotor();
  turnServo(90);
}

void loop() {
  // Drive in a figure 8 pattern
  analogWrite(MOTOR_CTRL, MOTOR_SPEED);
  turnServo(45);
  delay(15000);
  analogWrite(MOTOR_CTRL, MOTOR_SPEED);
  turnServo(135);
  delay(15000);
}

// Functions
void initServo(int pin) {
  servoMain.attach(pin);
}

void turnServo(int dir) {
  if (dir >= 180)
    dir = 179;
  if (dir <= 0)
    dir = 1;
  servoMain.write(dir);
}

void initMotor() {
  pinMode(MOTOR_CTRL, OUTPUT);
  digitalWrite(MOTOR_CTRL, LOW);
}