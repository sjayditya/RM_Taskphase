const byte analogPin = A0;   // Connect AN output of LSA08 to analog pin 0
const byte junctionPulse = 4;   // Connect JPULSE of LSA08 to pin 4
int readVal,positionVal;    
unsigned int junctionCount = 0;  

void setup() {
  pinMode(junctionPulse,INPUT);
  Serial.begin(9600);
}


void loop() {
/*  // Checking for junction crossing, if juction detected, 
  // keep moving forward
  if(digitalRead(junctionPulse))
  {
    while(digitalRead(junctionPulse)) 
    {
      moveForward();
    }
    // Increment junction count by 1 after the junction
    // You can do whatever you want with the junction count
    junctionCount++;
  }
*/
  float m;
 readVal = analogRead(analogPin);    // Read value from analog pin

  // Convert voltage level into line position value
 // positionVal = ((float)readVal/921)*70;
  positionVal=map(readVal,0,921,0,70);

  // Line at left when 0 - 18, move left
  if(positionVal <= 18)
  moveLeft();

  // Line at middle when 19 - 52, move forward
  else if(positionVal >18 || positionVal <= 52)
  moveForward();

  // Line at right when 53 - 70, move right
  else if(positionVal>53 || positionVal <= 70)
  moveRight();

  // If no line is detected, stay at the position
  else
  wait();


  // Put some delay to avoid the robot jig while making a turn
  delay(100);

}

// The values work good in my case, you could use other values set
// to archieve a performance that satisfy you
void moveLeft() {
  Serial.println("LEFT");
}

void moveRight() {
  Serial.println("RIGHT");
}

void moveForward() {
  Serial.println("FORWARD");
}

void wait() {
  Serial.println("WAIT");
}
