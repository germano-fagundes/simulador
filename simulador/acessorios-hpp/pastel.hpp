#ifndef PASTEL
#define PASTEL

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Pastel : public ArmaAtaque
{
    public:
        Pastel(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif