float duration, distance;

void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, INPUT);
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
  
  if(distance<=10)
  {
    digitalWrite(10, LOW);
  	digitalWrite(11, LOW);
  	delay(1000);
  }
  if(distance>10)
  {	
    analogWrite(9, distance);
    digitalWrite(11, HIGH);
  	digitalWrite(10, LOW);
  	delay(1000);
  }
  
}