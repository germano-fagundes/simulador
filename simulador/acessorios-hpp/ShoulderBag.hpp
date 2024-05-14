#ifndef SHOULDERBAG
#define SHOULDERBAG

#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../core-simulador-hpp/ArmaDefesa.hpp"
class ShoulderBag : public ArmaDefesa
{
    public:
        ShoulderBag(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif