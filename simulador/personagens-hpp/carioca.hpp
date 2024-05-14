#ifndef CARIOCA
#define CARIOCA
#include "../core-simulador-hpp/Personagem.hpp"
class Carioca : public Personagem
{
    public:
        Carioca(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif