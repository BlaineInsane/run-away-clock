void autoDrive()
{
  NewPing sensor(trigPin, echoPin, sensorMaxDistance);

  while (true)
  {
    distance = sensor.ping_cm();
    if (distance < 20)
    {
      stopWheels();
      delay(500);
    }
    else
    {
      goForward();
    }
  }
}
