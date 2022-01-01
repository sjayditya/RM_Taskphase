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
  delay(2);    
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(3,LOW);
  
  duration=pulseIn(2,HIGH);
  Serial.println(duration);
  distance=duration*.034/2;
  
  if(distance<=15)
  {
    digitalWrite(13, LOW);
  	delay(3000);
  }
  else if(distance>15 || distance<50)
  {
  	digitalWrite(13, HIGH);
  	delay(3000);
  }
  else
  {
    digitalWrite(13, LOW);
  	delay(3000);
  }
}