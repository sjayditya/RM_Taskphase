#define dir_1 9
#define pwm_1 6
char cmd;
void setup()
{
pinMode(pwm_1,OUTPUT);
pinMode(dir_1,OUTPUT);
Serial.begin(9600);
Serial.println("yes"); 
if (Serial.available()>0) {
    Serial.println("yeahh");
  }
}
void loop()
{

  if (Serial.available()) 
  { //Wait for user input   
    cmd = Serial.read();
  }
    
  if(cmd=='f')
    {
    digitalWrite(dir_1,HIGH); 
    analogWrite(pwm_1,254);
    Serial.println("Forward");
  }
  if(cmd=='b')
  {
    digitalWrite(dir_1,LOW); 
    analogWrite(pwm_1,254);
    Serial.println("Backward");
  }

  if(cmd=='s')
  {
    digitalWrite(dir_1,HIGH); 
    analogWrite(pwm_1,0);
    Serial.println("Wait");
  }
  delay(100);
}
