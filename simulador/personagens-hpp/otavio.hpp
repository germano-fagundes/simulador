#ifndef OTAVIO
#define OTAVIO
#include "../core-simulador-hpp/Personagem.hpp"
class Otavio : public Personagem
{
    public:
        Otavio(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif