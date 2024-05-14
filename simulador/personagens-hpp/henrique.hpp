#ifndef HENRIQUE
#define HENRIQUE
#include "../core-simulador-hpp/Personagem.hpp"
class Henrique : public Personagem
{
    public:
        Henrique(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif