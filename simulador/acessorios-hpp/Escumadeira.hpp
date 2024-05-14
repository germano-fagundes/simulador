#ifndef ESCUMADEIRA
#define ESCUMADEIRA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Escumadeira : public ArmaDefesa
{
    public:
        Escumadeira(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif