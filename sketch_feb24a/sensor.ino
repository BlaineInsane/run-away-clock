void doSensorStuff()
{ 

  // next three lines are to setup the sensor
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(50); 
  digitalWrite(trigPin, LOW); 

  // measure the time it takes the signal to hit an object and return with 
  // pulseIn when the echoPin receives a signal set it to high
  duration = pulseIn(echoPin, HIGH);

  // distance is the duration devided by 2 becasue the signal traveled from the 
  // trigpin then back to the echo pin, then divide by 29.1 to convert to centimeters
  distance = (duration / 2) / 29.1; 

  if (distance < 45) 
  {
    stopWheels();
    delay(500);
   // stopWheels();
    //turnRight();
    //delay(degree90Turn);
  }
  else
  {
    goForward();
  }

//  delay(500); //delay half a second
}
