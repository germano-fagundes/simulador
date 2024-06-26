#ifndef BONE
#define BONE

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Bone : public ArmaAtaque
{
    public:
        Bone(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif