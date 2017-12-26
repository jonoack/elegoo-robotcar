//www.elegoo.com
//    Left motor truth table
//  ENA         IN1               IN2         Description
//  LOW   Not Applicable    Not Applicable    Motor is off
//  HIGH        LOW               LOW         Motor is stopped (brakes)
//  HIGH        HIGH              LOW         Motor is on and turning forwards
//  HIGH        LOW               HIGH        Motor is on and turning backwards
//  HIGH        HIGH              HIGH        Motor is stopped (brakes)

//    Right motor truth table
//  ENB         IN3             IN4         Description
//  LOW   Not Applicable   Not Applicable   Motor is off
//  HIGH        LOW             LOW         Motor is stopped (brakes)
//  HIGH        LOW             HIGH        Motor is on and turning forwards
//  HIGH        HIGH            LOW         Motor is on and turning backwards
//  HIGH        HIGH            HIGH        Motor is stopped (brakes)

//    The direction of the car's movement
//  Left motor    Right motor     Description
//  stop(off)     stop(off)       Car is stopped
//  forward       forward         Car is running forwards
//  forward       backward        Car is turning right
//  backward      forward         Car is turning left
//  backward      backward        Car is running backwards

// ENA right weehl motor
#define ENA 5
// ENA left weehl motor
#define ENB 6
// right motor
#define IN1 7
#define IN2 8
// left Motor
#define IN3 9
#define IN4 11

//
int carSpeedDefault = 90;
int carSpeed;

void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
}

void loop() {
  //go forward
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  carSpeed = carSpeedDefault;
  analogWrite(ENA,carSpeed);
  carSpeed = carSpeedDefault * 2.5;
  analogWrite(ENB,carSpeed);
  // stop
  delay(2000);
  digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);

  //runing back
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  //
  carSpeed = carSpeedDefault;
  analogWrite(ENA,carSpeed);
  carSpeed = carSpeedDefault * 2.5;
  analogWrite(ENB,carSpeed);
  // Stop
  delay(2000);
  digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);
}
