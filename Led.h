#ifndef LED_H
#define LED_H

#include <Arduino.h>

class Led {
private:
  int pino; 

public:
  Led(int pinoLed) {
    pino = pinoLed;
    pinMode(pino, OUTPUT);
    digitalWrite(pino, LOW); 
  }

  void ligar() {
    digitalWrite(pino, HIGH);
  }

  void desligar() {
    digitalWrite(pino, LOW);
  }
};

#endif