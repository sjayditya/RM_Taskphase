#define dir_1 12
#define pwm_1 A1
const byte analogPin = A0;   // Connect AN output of LSA08 to analog pin 0
const byte junctionPulse = 4;   // Connect JPULSE of LSA08 to pin 4
int readVal,positionVal;
long duration;
int distance;
const int trig=9;
const int echo=10;
const int led=LED_BUILTIN

void setup() 
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(junctionPulse, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Checking for junction crossing, if juction detected, 
  // keep moving forward
  if(digitalRead(junctionPulse))
  {
    while(digitalRead(junctionPulse)) 
    {
      StopMate();
    }
  }
  
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(2);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=duration*.034/2;   
  if(distance<=15 || distance>=50)
  {
    digitalWrite(led, LOW);
  }
  else if(distance>15 || distance<50)
  {
    digitalWrite(led, HIGH);
  }
  
  readVal = analogRead(analogPin);
  positionVal=map(readVal,0,921,0,70);
  if(positionVal <= 18)
  moveLeft();
  else if(positionVal >18 || positionVal <= 52)
  moveForward();
  else if(positionVal>53 || positionVal <= 70)
  moveRight(); 
  else
  StopMate();
  // Put some delay to avoid the robot jig while making a turn
  delay(100);
}

void moveLeft() {
  digitalWrite(dir_1,LOW);
  analogWrite(pwm_1,254); 
}
void moveRight() {
  digitalWrite(dir_1,HIGH);
  analogWrite(pwm_1,254); 
}
void moveForward() {
  digitalWrite(dir_1,HIGH);
  analogWrite(pwm_1,254); 
}
void StopMate() {
  digitalWrite(dir_1,HIGH);
  analogWrite(pwm_1,0); 
}
