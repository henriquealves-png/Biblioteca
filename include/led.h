//! include/led.h

#ifndef LED_H
#define LED_H

#include <Arduino.h>

class led
{
public:
    uint8_t _pinoLed;//uint8_t = 8 bits ou seja 255 leds disponiveis
    bool _estadoLed = 0;
    uint32_t _tempoAcaoAnterior_ms = 0;
    bool _estaPiscando = false;
    uint32_t _tempoEsperaAlternar_ms = 0;

    led(uint8_t pino);

    void ligar();
    void iniciar();
    void desligar();
    void ativarPiscar(uint32_t tempoEspera = 500);
    void desativarPiscar();
    void atualizar();
    void alternar();

    uint8_t getPinoLed();

    void setEstadoLed(bool estado)
    {
        _estadoLed = estado;
    }
};
#endif