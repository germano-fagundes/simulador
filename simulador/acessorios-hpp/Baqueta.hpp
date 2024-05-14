#ifndef BAQUETA
#define BAQUETA

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Baqueta : public ArmaDefesa
{
    public:
        Baqueta(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif