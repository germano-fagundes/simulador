#ifndef ROCK
#define ROCK

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Rock : public ArmaAtaque
{
    public:
        Rock(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif