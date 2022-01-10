
int enA = 9;
int in1 = 11;
int in2 = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() 
{
  //increasing
  for(int i=0; i<=255; i++)
  {
    analogWrite(9, i);
  	digitalWrite(11, HIGH);
  	digitalWrite(10, LOW);
  	delay(50);
  }
  //decreasing
  for(int i=255; i>=0; i--)
  {
    analogWrite(9, i);
  	digitalWrite(11, HIGH);
  	digitalWrite(10, LOW);
  	delay(50);
  }
}