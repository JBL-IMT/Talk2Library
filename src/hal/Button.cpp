#include "./Button.h"

Button::Button(int myPin){
  pin = myPin;
  pinMode(pin, INPUT);
}

void Button::check()
{
    int val = digitalRead(pin);
    if ((val==0)&&(lastval==1)) {cpt++;j=millis();}
    lastval=val;
}

int Button::getNumber(){
  check();
  unsigned long int i = millis();
  while ((i-j)<500) {i=millis();check();}
  int tmp=cpt;cpt=0;return tmp;}
