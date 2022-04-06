void setup() {
  // Setting pin 1 - 8 as digital input pin
  for(byte i=1;i<=8;i++) {
    pinMode(i,INPUT);
  }
 
  Serial.begin(9600);
}

void loop() {
  // Checking for junction crossing, if juction detected, 
  // keep moving forward
  if (digitalRead(1)==false && digitalRead(8)==false)
  Serial.println("JUnctionMate");
  
  // Checking for sensor number 1 and 2, if line detected, move left
  else if (digitalRead(1)==false || digitalRead(2)==false)
  Serial.println("moveLeft");

  // Checking for sensor number 5 and 6, if line detected, move right
  else if (digitalRead(7)==false || digitalRead(8)==false)
  Serial.println("moveRight");

  else if (digitalRead(6)==false || digitalRead(3)==false || digitalRead(4)==false || digitalRead(5)==false)
  Serial.println("moveForwardddddddddd");

  // If no line is detected, stay at the position
  else
  Serial.println("BRUHHH_WhereLine");


  // Put some delay to avoid the robot jig while making a turn
  delay(100);

}

/*
// The values work good in my case, you could use other values set
// to archieve a performance that satisfy you
void moveLeft() {
  Serial.println("Move Left");
}

void moveRight() {
  Serial.println("Move Right");
}

void moveForward() {
  Serial.println("Move Forward");
}

void wait() {
  Serial.println("Wait");
}void setup() {
  // put your setup code here, to run once:

}
*/
