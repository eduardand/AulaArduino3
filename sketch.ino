#include "Led.h" 

Led vermelho(11); 
Led amarelo(10);  
Led verde(9);     

void setup() {
  Serial.begin(9600);
  Serial.println("Iniciado!");
}

void loop() {
  Serial.println("VERDE: Siga.");
  verde.ligar();
  vermelho.desligar();
  amarelo.desligar();
  delay(6000); 

  Serial.println("AMARELO: Atenção.");
  verde.desligar();
  amarelo.ligar();
  delay(2000); 


  Serial.println("VERMELHO: Pare.");
  amarelo.desligar();
  vermelho.ligar();
  delay(6000); 
}