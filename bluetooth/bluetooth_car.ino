//www.elegoo.com
<<<<<<< HEAD
//
=======
>>>>>>> c0ad707ef8d757b94dbce42b94af414cc0dc3d55

#define ENA 5
#define ENB 6
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11
#define LED 13

<<<<<<< HEAD
unsigned char carSpeed = 100;
bool state = LOW;
char getstr;

// Forward
void forward(){
=======
unsigned char carSpeed = 150;
bool state = LOW;
char getstr;

void forward(){ 
>>>>>>> c0ad707ef8d757b94dbce42b94af414cc0dc3d55
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,HIGH);
  Serial.println("Forward");
}

<<<<<<< HEAD
// backward
=======
>>>>>>> c0ad707ef8d757b94dbce42b94af414cc0dc3d55
void back(){
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  Serial.println("Back");
}

<<<<<<< HEAD
// Left
=======
>>>>>>> c0ad707ef8d757b94dbce42b94af414cc0dc3d55
void left(){
  analogWrite(ENA,carSpeed);
  analogWrite(ENB,carSpeed);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,HIGH);
  digitalWrite(IN3,LOW);
<<<<<<< HEAD
  digitalWrite(IN4,HIGH);
  Serial.println("Left");
}

// right
=======
  digitalWrite(IN4,HIGH); 
  Serial.println("Left");
}

>>>>>>> c0ad707ef8d757b94dbce42b94af414cc0dc3d55
void right(){
  analogWrite(ENA,carSpeed);
  analogWrite(ENB,carSpeed);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
  Serial.println("Right");
}

<<<<<<< HEAD
// Stop
=======
>>>>>>> c0ad707ef8d757b94dbce42b94af414cc0dc3d55
void stop(){
  digitalWrite(ENA,LOW);
  digitalWrite(ENB,LOW);
  Serial.println("Stop!");
}

<<<<<<< HEAD
// Light
void stateChange(){
  state = !state;
  digitalWrite(LED, state);
  Serial.println("Light");
}

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
=======
void stateChange(){
  state = !state;
  digitalWrite(LED, state);
  Serial.println("Light");  
}

void setup() { 
  Serial.begin(9600);
  pinMode(LED, OUTPUT); 
>>>>>>> c0ad707ef8d757b94dbce42b94af414cc0dc3d55
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  stop();
}

<<<<<<< HEAD
void loop() {
=======
void loop() { 
>>>>>>> c0ad707ef8d757b94dbce42b94af414cc0dc3d55
  getstr = Serial.read();
  switch(getstr){
    case 'f': forward(); break;
    case 'b': back();   break;
    case 'l': left();   break;
    case 'r': right();  break;
    case 's': stop();   break;
    case 'a': stateChange(); break;
    default:  break;
  }
}
<<<<<<< HEAD
=======

>>>>>>> c0ad707ef8d757b94dbce42b94af414cc0dc3d55
