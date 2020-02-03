#include <Arduino.h>

class Button
{
  int pin =0;
   int cpt;
   int lastval=0;
   unsigned long int j;
public :
  Button(int);
  //static void inc();
  int getNumber();
  void check();

};
