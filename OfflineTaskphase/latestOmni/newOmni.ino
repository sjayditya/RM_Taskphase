#define dir_1 1 //left
#define pwm_1 2
#define dir_2 3 //back
#define pwm_2 4
#define dir_3 5 //right
#define pwm_3 6
#define dir_4 7 //front wheel
#define pwm_4 8

int botspeed=255;
int angle;
int rad;
int dir[4]={1,3,5,7};
int sped[4]={2,4,6,8};
int vertical;
int horizontal();
void setup()
{
pinMode(pwm_1,OUTPUT);
pinMode(dir_1,OUTPUT);
pinMode(pwm_2,OUTPUT);
pinMode(dir_2,OUTPUT);
pinMode(pwm_3,OUTPUT);
pinMode(dir_3,OUTPUT);
pinMode(pwm_4,OUTPUT);
pinMode(dir_4,OUTPUT);
Serial.begin(9600);
}

void loop()
{
  if (Serial.available()) 
  {
    angle=Serial.read();
  }
  digitalWrite(dir[0],LOW);
  digitalWrite(dir[1],HIGH);
  digitalWrite(dir[2],HIGH);
  digitalWrite(dir[3],LOW);
  int vertical=botspeed*cos(rad);
  int horizontal=botspeed*sin(rad);

  if (vertical<0)
  { 
    vertical*=-1;
    digitalWrite(dir[0],HIGH);
    digitalWrite(dir[2],LOW);
  }
  if (horizontal<0)
  {
    horizontal*=-1;
    digitalWrite(dir[3],LOW);
    digitalWrite(dir[1],HIGH);
  }
  analogWrite(sped[0],vertical);
  analogWrite(sped[2],vertical);
  analogWrite(sped[1],horizontal);
  analogWrite(sped[3],horizontal);
  delay(100);
}
