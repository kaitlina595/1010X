#include "ledfunctions.h"


void ledinit(){
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);}

void joystick_connected(int LED_port){

  if(isJoystickConnected(1))
  {digitalWrite(LED_port, LOW);}
  else if(!isJoystickConnected(1)){
    digitalWrite(LED_port, HIGH);}
}
