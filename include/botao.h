//! include/botao.h

#ifndef BOTAO_H
#define BOTAO_H

#include <Arduino.h>

class Botao
{
private:
    uint8_t _pinBotao;
    bool estadoBotao = 0;
    bool estadoAnteriorBotao = 0;
    bool _estaPressionado = false;
public:
    Botao(uint8_t pino);

    void iniciar();
    void atualizar();
    bool pressionou();
    bool soltou();
    

};
#endif  