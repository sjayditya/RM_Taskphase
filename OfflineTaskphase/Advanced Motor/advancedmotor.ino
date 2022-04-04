#define MotorDirection 8
#define MotorSpeed 9
char letter;
int SpeedVal = 0;


void setup() {
  pinMode(MotorDirection, OUTPUT);
  pinMode(MotorSpeed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
if(Serial.available())  //Declaration for the pins used, both should be outputs.
{
letter=Serial.read();
  //Ramps up the speed in the clockwise direction.
  if(letter=='c'){
  digitalWrite(MotorDirection, LOW);                  //Loop increases the speed slowly until it reaches max speed.
  for(SpeedVal = 0; SpeedVal < 255; SpeedVal++){
      analogWrite(MotorSpeed,SpeedVal);
      delay(40);
  
  }
  analogWrite(MotorSpeed,0);
  }
  //Ramps up the speed in the counter clockwise direction.
  if(letter=='a') {
    Serial.println("yeah"); 
  digitalWrite(MotorDirection, HIGH);                //Loop increases the speed slowly until it reaches max speed.
  for(SpeedVal = 0; SpeedVal < 255; SpeedVal++){
      analogWrite(MotorSpeed,SpeedVal);
      delay(40);
  }

  }
  if(letter=='s')
  analogWrite(MotorSpeed,0);
}}
