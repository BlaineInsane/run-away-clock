#include <LiquidCrystal.h>

// Wheel front left
const int in0 = 0;
const int in1 = 1;
// Wheel front right
const int in2 = 2;
const int in3 = 3;
// Wheel back right
const int in4 = 4;
const int in5 = 5;
// Wheel back left 
const int in6 = 6;
const int in7 = 7;

const int degree90Turn = 480; // delay timing for a 90 degree turn


void setup()
{
  // Initialize all of the motor control pins to outputs
  pinMode(in0, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT);

  // Set initial state of motors to off
  // 'LOW' is off
  // 'HIGH' is on
  digitalWrite(in0, LOW);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in5, LOW);
  digitalWrite(in6, LOW);
  digitalWrite(in7, LOW);
}

void loop()
{
  driveInSquare();
  stopWheels();
  delay(1000);
}


void driveInSquare()
{
  goForward();
  delay(1000);
  turnRight();
  delay(degree90Turn);
  goForward();
  delay(1000);
  turnRight();
  delay(degree90Turn);
  goForward();
  delay(1000);
  turnRight();
  delay(degree90Turn);
  goForward();
  delay(1000);
  turnRight();
  delay(degree90Turn);
}

// Function for testing the motors using both directions
void testMovement()
{
  driveInSquare();
  
  goForward();
  delay(1000);
  goBackward();
  delay(1000);
  turnRight();
  delay(degree90Turn);
  turnLeft();
  delay(degree90Turn);
  slideLeft();
  delay(1000);
  slideRight();
  delay(1000);
  slideLeft();
  delay(1000);
  slideRight();
  delay(1000);
}
