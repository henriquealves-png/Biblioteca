//! include/botao.cpp

#include "botao.h"

Botao::Botao(uint8_t pino): _pinBotao(pino)
{
    
}

void Botao::iniciar()
{
    pinMode(_pinBotao, INPUT_PULLUP);
}

void Botao::atualizar()
{
    estadoAnteriorBotao = estadoBotao;
    estadoBotao = digitalRead(_pinBotao);
}

bool Botao::pressionou()
{
    _estaPressionado = true;
    return _estaPressionado;
}

bool Botao::soltou()
{
    _estaPressionado = false;
    return _estaPressionado;
}
