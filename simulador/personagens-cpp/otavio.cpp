#include "../personagens-hpp/otavio.hpp"

Otavio::Otavio(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Otavio::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Otavio::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Otavio::pegarDescricao() 
{
    return "Cole, rock?";
}