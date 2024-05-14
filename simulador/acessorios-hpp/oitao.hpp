#ifndef OITAO
#define OITAO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Oitao : public ArmaAtaque
{
    public:
        Oitao(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif