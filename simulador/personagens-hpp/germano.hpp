#ifndef GERMANO
#define GERMANO
#include "../core-simulador-hpp/Personagem.hpp"
class Germano : public Personagem
{
    public:
        Germano(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif