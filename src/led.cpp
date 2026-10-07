//! scr/led.cpp

#include <led.h>

led::led(uint8_t pino) : _pinoLed(pino)
{
    //_pinoLed = pino;
}

void led::iniciar()
{
    pinMode(_pinoLed, OUTPUT);
    digitalWrite(_pinoLed, _estadoLed);
    _tempoAcaoAnterior_ms = millis();
}

void led::atualizar()
{
    if(_estaPiscando)
    {
        const uint32_t tempoDecorrido = millis() - _tempoAcaoAnterior_ms;

        if( tempoDecorrido >= _tempoEsperaAlternar_ms)
        {
            _tempoAcaoAnterior_ms = millis();
            alternar();
        }

    }

    digitalWrite(_pinoLed, _estadoLed);
}

void led::ligar()
{
    _estadoLed = HIGH;
}

void led::desligar()
{
    _estadoLed = LOW;
}

void led::ativarPiscar(uint32_t tempoEspera)
{
    _estaPiscando = true;
    _tempoEsperaAlternar_ms = tempoEspera;
}

void led::desativarPiscar()
{
    _estaPiscando = false;
    _estadoLed = LOW;
}

void led::alternar()
{
    _estadoLed = !_estadoLed;
}

uint8_t led::getPinoLed()
{
    return _pinoLed;
}
