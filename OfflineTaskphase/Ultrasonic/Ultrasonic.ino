long duration;
int distance;

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(3,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(3,LOW);
  
  duration=pulseIn(2,HIGH);
  distance=duration*.034/2;
  Serial.println(distance);

  
  if(distance<=15 || distance>=50)
  {
    digitalWrite(13, LOW);
  }
  else if(distance>15 || distance<50)
  {
    digitalWrite(13, HIGH);
  }
 
}
