#ifndef BIANCA
#define BIANCA
#include "../core-simulador-hpp/Personagem.hpp"
class Bianca : public Personagem
{
    public:
        Bianca(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif