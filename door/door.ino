#include<Servo.h>
Servo myservo;
char d;
int pos;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(5,OUTPUT);
myservo.attach(9); 
  myservo.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    d=Serial.read();
  }
  if(d=='a')
  {
    pos = 90;
    myservo.write(pos);
    delay(5000);
    
  }
  else if(d=='b')
  {
    pos = 0;
    myservo.write(pos);
  }
  d="";

}
