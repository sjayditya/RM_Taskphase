int potval=0;

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
}

void loop()
{
  potval=analogRead(A0);
  digitalWrite(11, HIGH);
  delay(potval);
  digitalWrite(11, LOW);
  delay(potval);
}