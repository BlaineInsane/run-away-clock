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

void goForward()
{
  digitalWrite(in0, LOW);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);

  digitalWrite(in4, HIGH);
  digitalWrite(in5, LOW);
  digitalWrite(in6, LOW);
  digitalWrite(in7, HIGH);
}

void goBackward()
{
  digitalWrite(in0, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);

  digitalWrite(in4, LOW);
  digitalWrite(in5, HIGH);
  digitalWrite(in6, HIGH);
  digitalWrite(in7, LOW);
}

void turnRight()
{
  digitalWrite(in0, LOW);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);

  digitalWrite(in4, LOW);
  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);
  digitalWrite(in7, HIGH);
  delay(degree90Turn);
}

void turnLeft()
{
  digitalWrite(in0, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);

  digitalWrite(in4, HIGH);
  digitalWrite(in5, LOW);
  digitalWrite(in6, HIGH);
  digitalWrite(in7, LOW);
  delay(degree90Turn);
}

void slideRight()
{
  digitalWrite(in0, LOW);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);

  digitalWrite(in4, HIGH);
  digitalWrite(in5, LOW);
  digitalWrite(in6, HIGH);
  digitalWrite(in7, LOW);
}

void slideLeft()
{
  digitalWrite(in0, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);

  digitalWrite(in4, LOW);
  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);
  digitalWrite(in7, HIGH);
}

// DEMO FUNCTIONS
void driveInSquare()
{
  goForward();
  delay(1000);
  turnRight();
  delay(degree90Turn);
  goForward();
  delay(1000);
  turnRight();
  goForward();
  delay(1000);
  turnRight();
  goForward();
  delay(1000);
  turnRight();
}

void demo()
{
  driveInSquare();

  slideLeft();
  delay(1000);
  slideRight();
  delay(1000);
  slideLeft();
  delay(1000);
  slideRight();
  delay(1000);
}
