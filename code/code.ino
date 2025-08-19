#include <Servo.h>

// Create Servo objects
Servo servoBase;
Servo servoShoulder;
Servo servoElbow;
Servo servoWrist;

// Analog joystick pins
const int xPin = A0;
const int yPin = A1;

// Servo positions
int posBase = 90;
int posShoulder = 90;
int posElbow = 90;
int posWrist = 90;

// Servo control sensitivity
int sensitivity = 2; // Higher = slower response

void setup() {
  // Attach servos to pins
  servoBase.attach(3);
  servoShoulder.attach(5);
  servoElbow.attach(6);
  servoWrist.attach(9);

  // Move servos to initial position
  servoBase.write(posBase);
  servoShoulder.write(posShoulder);
  servoElbow.write(posElbow);
  servoWrist.write(posWrist);

  // Start serial (optional for debugging)
  Serial.begin(9600);
}

void loop() {
  // Read analog joystick values
  int xVal = analogRead(xPin); // 0 to 1023
  int yVal = analogRead(yPin); // 0 to 1023

  // Map joystick values to directional movement
  if (xVal < 400) {
    posBase -= sensitivity;
  } else if (xVal > 600) {
    posBase += sensitivity;
  }

  if (yVal < 400) {
    posShoulder -= sensitivity;
    posElbow += sensitivity;
  } else if (yVal > 600) {
    posShoulder += sensitivity;
    posElbow -= sensitivity;
  }

  // Clamp angles to valid range (0–180)
  posBase = constrain(posBase, 0, 180);
  posShoulder = constrain(posShoulder, 0, 180);
  posElbow = constrain(posElbow, 0, 180);
  posWrist = constrain(posWrist, 0, 180);

  // Write positions to servos
  servoBase.write(posBase);
  servoShoulder.write(posShoulder);
  servoElbow.write(posElbow);
  // Wrist could be static or use button (optional)

  delay(50); // Small delay for smooth movement
}
