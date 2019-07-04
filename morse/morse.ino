#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
  _dottime=250;
}

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(_dottime*4);
  digitalWrite(_pin,LOW);
  delay(_dottime);
}

void Morse::c_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*3);
}

void Morse::w_space()
{
  digitalWrite(_pin,LOW);
  delay(_dottime*7);
}

Morse morse(13);
int incomingByte = 0;

void setup()
{
  
}

void loop()
{
  char inByte;
  if (Serial.available()) {
    char inByte = Serial.read();
  }
  
  switch(inByte)
  {
      case 'a':  morse.dot(); morse.dash(); break;
      case 'b':  morse.dash(); morse.dot(); morse.dot(); morse.dot(); break;
      case 'c':  morse.dash(); morse.dot(); morse.dash(); morse.dot(); break;      
      case 'd':  morse.dash(); morse.dot(); morse.dot();break; 
      case 'e':  morse.dot(); break;
      case 'f':  morse.dot(); morse.dot(); morse.dash(); morse.dot(); break;
      case 'g':  morse.dash(); morse.dash(); break;
      case 'h':  morse.dot(); morse.dot(); morse.dot(); morse.dot(); break;
      case 'i':  morse.dot(); morse.dot(); break;
      case 'j':  morse.dot(); morse.dash(); morse.dash(); morse.dash(); break;
      case 'k':  morse.dash(); morse.dot(); morse.dash(); break;
      case 'l':  morse.dot(); morse.dash(); morse.dot(); morse.dot();  break;
      case 'm':  morse.dash(); morse.dash(); break;
      case 'n':  morse.dash(); morse.dot(); break;
      case 'o':  morse.dash(); morse.dash(); morse.dash(); break;
      case 'p':  morse.dot(); morse.dash(); morse.dash(); morse.dot(); break;
      case 'q':  morse.dash(); morse.dash(); morse.dot(); morse.dash(); break;
      case 'r':  morse.dot(); morse.dash(); morse.dot(); break;
      case 's':  morse.dot(); morse.dot(); morse.dot(); break;
      case 't':  morse.dash(); break;
      case 'u':  morse.dot(); morse.dot(); morse.dash(); break;
      case 'v':  morse.dot(); morse.dot(); morse.dot(); morse.dash(); break;
      case 'w':  morse.dot(); morse.dash(); morse.dash(); break;
      case 'x':  morse.dash(); morse.dot(); morse.dot(); morse.dash(); break;
      case 'y':  morse.dash(); morse.dot(); morse.dash(); morse.dash(); break;
      case 'z':  morse.dash(); morse.dash(); morse.dot(); morse.dot(); break;
      case '0':  morse.dash(); morse.dash(); morse.dash(); morse.dash(); morse.dash(); break;
      case '1':  morse.dot(); morse.dash(); morse.dash(); morse.dash(); morse.dash(); break;
      case '2':  morse.dot(); morse.dot(); morse.dash(); morse.dash(); morse.dash(); break;
      case '3':  morse.dot(); morse.dot(); morse.dot(); morse.dash(); morse.dash(); break;
      case '4':  morse.dot(); morse.dot(); morse.dot(); morse.dot(); morse.dash(); break;
      case '5':  morse.dot(); morse.dot(); morse.dot(); morse.dot(); morse.dot(); break;
      case '6':  morse.dash(); morse.dot(); morse.dot(); morse.dot(); morse.dot(); break;
      case '7':  morse.dash(); morse.dash(); morse.dot(); morse.dot(); morse.dot(); break;
      case '8':  morse.dash(); morse.dash(); morse.dash(); morse.dot(); morse.dot(); break;
      case '9':  morse.dash(); morse.dash(); morse.dash(); morse.dash(); morse.dot(); break;
      case ' ':  morse.w_space(); break;
  }
  morse.c_space();

}
      
      
 
