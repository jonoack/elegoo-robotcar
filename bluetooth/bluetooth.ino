//www.elegoo.com
//
// Motor defintions
//
#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11
#define LED 13

int carSpeedDefault = 120;
int curveFactor = 2.1;
int carSpeedRotate = 160;
//
int carSpeed = carSpeedDefault * curveFactor;
//
bool state = LOW;
char getstr;

// Forward
void forward(){
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  Serial.println("Forward");
}

// Forward left
void forwardLeft(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENA,carSpeedDefault);
  analogWrite(ENB,carSpeed);
  Serial.println("Forward Left");
}
// Forward right
void forwardRight(){
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  analogWrite(ENA,carSpeed);
  analogWrite(ENB,carSpeedDefault);
  Serial.println("Forward Right");
}

// backward
void back(){
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  Serial.println("Back");
}

// backward left
void backLeft(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENA,carSpeedDefault);
  analogWrite(ENB,carSpeed);
  Serial.println("Back Left");
}

// backward Right
void backRight(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  analogWrite(ENA,carSpeed);
  analogWrite(ENB,carSpeedDefault);
  Serial.println("Back right");
}


// Left
void left(){
  analogWrite(ENA,carSpeedRotate);
  analogWrite(ENB,carSpeedRotate);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  Serial.println("Left");
}

// right
void right(){
  analogWrite(ENA,carSpeedRotate);
  analogWrite(ENB,carSpeedRotate);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  Serial.println("Right");
}

// Stop
void stop(){
  digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);
  Serial.println("Stop!");
}

// Light
void stateChange(){
  state = !state;
  digitalWrite(LED, state);
  Serial.println("Light");
}

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  stop();
}

void loop() {
  getstr = Serial.read();
  switch(getstr){
    case 'f': forward(); break;
    case 'd': forwardLeft(); break;
    case 'g': forwardRight(); break;
    case 'b': back();   break;
    case 'v': backLeft();   break;
    case 'n': backRight();   break;
    case 'l': left();   break;
    case 'r': right();  break;
    case 's': stop();   break;
    case 'a': stateChange(); break;
    default:  break;
  }
}
