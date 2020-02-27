// define wheel pins
// front left wheel
#define in0 2
#define in1 3
// front right wheel
#define in2 4
#define in3 5
// back right wheel
#define in4 6
#define in5 7
// back left wheel
#define in6 8
#define in7 9

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

  delay(3000);
}

void loop()
{
  // CODE FOR DEMO
  demo();
  stopWheels();
  delay(60000);
}
