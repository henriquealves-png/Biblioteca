//! include/botao.cpp

#include "botao.h"

Botao::Botao(uint8_t pino) : _pinBotao(pino)
{
}

void Botao::iniciar()
{
    pinMode(_pinBotao, INPUT_PULLUP);
}

void Botao::atualizar()
{

    _pressionou = false;
    _soltou = false;

    _estadoAtualBotao = digitalRead(_pinBotao);
    if (_estadoAtualBotao != _estadoAnteriorBotao)
    {
        _estadoAnteriorBotao = _estadoAtualBotao;
        _ultimaMudanca_ms = millis();
    }

    else if (millis() - _ultimaMudanca_ms > _tempoDebounce_ms)
    {
        const bool acaoExecutada = (_estadoUltimaAcao == _estadoAtualBotao);
        if (!acaoExecutada)
        {

            _estadoUltimaAcao = _estadoAtualBotao;
            const bool botaoPressionado = !_estadoAtualBotao;

            botaoPressionado
                ? _pressionou = true
                : _soltou = true;
        }
    }
}

bool Botao::pressionou()
{
    return _pressionou;
}

bool Botao::soltou()
{
    return _soltou;
}
