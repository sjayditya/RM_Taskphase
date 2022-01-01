#include <Servo.h>

Servo ser_val;
int pos=0;

void setup()
{
  ser_val.attach(13);
  Serial.begin(9600);
}

void loop()
{
//  pos = Serial.read();
  Serial.println(pos);
  pos= Serial.parseInt();
  Serial.println(pos);
  ser_val.write(pos);
  delay(5000);
}

