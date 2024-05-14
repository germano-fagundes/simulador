#ifndef REPIQUE
#define REPIQUE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Repique : public ArmaAtaque
{
    public:
     Repique(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif