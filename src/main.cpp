#include <Arduino.h>
#include "led.h"
#include "botao.h"

led ledVermelhoA(5);
led ledVermelhoB(6);
led ledVermelhoC(7);
led ledVermelhoD(18);

Botao botao1(2);
Botao botao2(3);
Botao botao3(4);

void setup()
{
    
    botao1.iniciar();
    botao2.iniciar();
    botao3.iniciar();
    
    ledVermelhoA.iniciar();
    ledVermelhoA.ativarPiscar();

    ledVermelhoB.iniciar();
    ledVermelhoB.ativarPiscar(1000);


    ledVermelhoC.iniciar();
    ledVermelhoC.ativarPiscar(2000);

    
    ledVermelhoD.iniciar();
    ledVermelhoD.ativarPiscar(4000);
}

void loop()
{
    ledVermelhoA.atualizar();
    ledVermelhoB.atualizar();
    ledVermelhoC.atualizar();
    ledVermelhoD.atualizar();
}