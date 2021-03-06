const byte analogPin = 0;   // Connect AN output of LSA08 to analog pin 0
const byte junctionPulse = 4;   // Connect JPULSE of LSA08 to pin 4
int readVal,positionVal;    // Variables to store analog and line position value
unsigned int junctionCount = 0;   // Variable to store junction count value

void setup() {
  Serial.begin(9600);
  pinMode(junctionPulse,INPUT);

  // Setting pin 10 - 13 as digital output pin
  for(byte i=10;i<=13;i++) {
    pinMode(i,OUTPUT);
  }

  // Setting the initial condition of motors
  // make sure both PWM pins are LOW
  digitalWrite(pwm1,LOW);
  digitalWrite(pwm2,LOW);

  // State of DIR pins are depending on your physical connection
  // if your robot behaves strangely, try changing thses two values
  digitalWrite(dir1,LOW);
  digitalWrite(dir2,LOW);

}

void loop() {
  // Checking for junction crossing, if juction detected, 
  // keep moving forward
  if(digitalRead(junctionPulse)) {
    while(digitalRead(junctionPulse)) {
      Serial.println("Move Forward ");
    }
    // Increment junction count by 1 after the junction
    // You can do whatever you want with the junction count
    junctionCount++;
  }

  readVal = analogRead(analogPin);    // Read value from analog pin

  // Convert voltage level into line position value
  positionVal = ((float)readVal/921)*70;

  // Line at left when 0 - 18, move left
  if(positionVal <= 18)
  Serial.println("move Left ");

  // Line at middle when 19 - 52, move forward
  else if(positionVal <= 52)
  Serial.println("move Forward ");

  // Line at right when 53 - 70, move right
  else if(positionVal <= 70)
  Serial.println("move Right ");

  // If no line is detected, stay at the position
  else
  Serial.println("No Line Detected ");

  // Put some delay to avoid the robot jig while making a turn

}
