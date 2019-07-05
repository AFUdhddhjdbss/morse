#include "arduino.h"
void setup()
{
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(11600);
}

/////
int income=0;
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read();
    switch(income)
    {
      case 'f':
        forward();
        break;
      case 'b':
        backward();
        break;
      case 'r':
        right();
        break;
      case 'l':
        left();
        break;
      case 's':
        stopped();
        break;
      default:
        break;
    }
  }
}
//////////////////////////////////////////

void forward()
{
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(11,LOW);
}
  
void backward()
{
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
}
  
void left()
{
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(13,LOW);
  digitalWrite(1,HIGH);
  digitalWrite(3,LOW);
}
  
void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(11,LOW);
}
  
void stopped()
{
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(13,HIGH);
  digitalWrite(11,LOW);
}
