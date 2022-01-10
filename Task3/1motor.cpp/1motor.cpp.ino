void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  //motor 1
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  
  //motor 2
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
}