#include <Arduino.h>
#include "led.h"
#include "botao.h"

led ledVermelhoA(5);
led ledVermelhoB(6);
led ledVermelhoC(7);
led ledVermelhoD(18);

Botao botaoA(13);
Botao botaoB(11);
Botao botaoC(12);


void setup() {
    
    Serial.begin(9600);
    
    botaoA.iniciar();
    botaoB.iniciar();
    botaoC.iniciar();

    
}

void loop() {
    
        botaoA.atualizar();
        botaoB.atualizar();
        botaoC.atualizar();
    
    if(botaoA.pressionou())
    {
        Serial.print("Botao A pressionado");
    }

    Serial.print("Teste");
 
}