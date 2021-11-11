void setup() 
{
  // put your setup code here, to run once:
  pinMode(11, OUTPUT); // Fault Output
  pinMode(15, INPUT);  // SDC Sense
  pinMode(10, INPUT);  // V-Sense
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if (digitalRead(15) == HIGH)
  {
    // HIGH Not exactly sure what to do for the wait parts
  }
  else if (digitalRead(15) == LOW)
  {
    // LOW Not exactly sure what to do for the wait parts
  }

  if (digitalRead(10) == LOW)
  {
    digitalWrite(11, HIGH);
  }
  else
  {
    delay(1000);  // Waiting Period
    if (digitalRead(10) == LOW)
    {
      digitalWrite(11, HIGH);
      delay(5000);
      digitalWrite(11, LOW);
    }
  }
  

  
}
