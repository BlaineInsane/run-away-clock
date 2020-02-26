// Motor 1 connections
  int in0 = 0;
  int in1 = 1;
// Motor 2 connections
  int in2 = 2;
  int in3 = 3;
// Motor 3 connections
  int in4 = 4;
  int in5 = 5;
// Motor 4 connections
  int in6 = 6;
  int in7 = 7;
  

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
  testMovement();
  stopWheels();
  delay(1000);
}

void stopWheels()
{
  // Turn off motors
  digitalWrite(in0, LOW);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(in5, LOW);
  digitalWrite(in6, LOW);
  digitalWrite(in7, LOW);
}

// Function for testing the motors using both directions
void testMovement() 
{
  digitalWrite(in0, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(in5, LOW);
  digitalWrite(in6, HIGH);
  digitalWrite(in7, LOW);
  delay(2000);
  
  digitalWrite(in0, LOW);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);
  digitalWrite(in7, HIGH);
  delay(2000);
}
