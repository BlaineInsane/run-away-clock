// define wheel pins
// front left wheel
#define in0 0
#define in1 1
// front right wheel
#define in2 2
#define in3 3
// back right wheel
#define in4 4
#define in5 5
// back left wheel
#define in6 6
#define in7 7

const int degree90Turn = 480; // delay timing for a 90 degree turn

// define sensor pins
#define trigPin 13 
#define echoPin 12 
long duration, distance;


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

  // setup for sensor
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
  // CODE FOR DEMO
  doSensorStuff();
//  demo();
//  stopWheels();
//  delay(5000);
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
void demo()
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
