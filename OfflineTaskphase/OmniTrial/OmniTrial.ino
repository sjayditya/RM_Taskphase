#define dir_1 1 //front wheel
#define pwm_1 2
#define dir_2 3 //left wheel
#define pwm_2 4
#define dir_3 5 //back wheel
#define pwm_3 6
#define dir_4 7 //right wheel
#define pwm_4 8

int botspeed1=255;
int botspeed2=255;
int angle;
int rad;

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
    
  if(angle>0 && angle<=90) //topleft
  {
    botspeed1*=cos(rad);
    botspeed2*=sin(rad);
    quad1;
  }
  else if(angle>90 && angle<=180) //backleft
  {
    angle-=90;
    rad=angle*3.14/180;
    botspeed1*=cos(rad);
    botspeed2*=sin(rad);
    quad2();
  }
  else if(angle>180 && angle<=270)//backright
  {
    angle-=180;
    rad=angle*3.14/180;
    botspeed1*=cos(rad);
    botspeed2*=sin(rad);
    quad3();
  }
  else if(angle>270 && angle<360) //topright
  {
    angle-=270;
    rad=angle*3.14/180;
    botspeed1*=sin(rad);
    botspeed2*=cos(rad);
    quad4();    
  }
  delay(100);
}
void quad1()
{
  digitalWrite(dir_1,LOW); 
  analogWrite(pwm_1,botspeed1);
  digitalWrite(dir_2,HIGH); 
  analogWrite(pwm_2,botspeed2);
  digitalWrite(dir_3,HIGH); 
  analogWrite(pwm_3,botspeed1);
  digitalWrite(dir_4,LOW); 
  analogWrite(pwm_4,botspeed2);
}
void quad2()
{
  digitalWrite(dir_1,LOW); 
  analogWrite(pwm_1,botspeed1);
  digitalWrite(dir_2,LOW); 
  analogWrite(pwm_2,botspeed2);
  digitalWrite(dir_3,HIGH); 
  analogWrite(pwm_3,botspeed1);
  digitalWrite(dir_4,HIGH); 
  analogWrite(pwm_4,botspeed2);
}
void quad3()
{
  digitalWrite(dir_1,HIGH); 
  analogWrite(pwm_1,botspeed1);
  digitalWrite(dir_2,LOW); 
  analogWrite(pwm_2,botspeed2);
  digitalWrite(dir_3,LOW); 
  analogWrite(pwm_3,botspeed1);
  digitalWrite(dir_4,HIGH); 
  analogWrite(pwm_4,botspeed2);
}
void quad4()
{
  digitalWrite(dir_1,HIGH);
  analogWrite(pwm_1,botspeed1);
  digitalWrite(dir_2,HIGH); 
  analogWrite(pwm_2,botspeed2);
  digitalWrite(dir_3,LOW); 
  analogWrite(pwm_3,botspeed1);
  digitalWrite(dir_4,LOW); 
  analogWrite(pwm_4,botspeed2);
}
