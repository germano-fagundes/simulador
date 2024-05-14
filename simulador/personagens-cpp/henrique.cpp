#include "../personagens-hpp/henrique.hpp"

Henrique::Henrique(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Henrique::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Henrique::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Henrique::pegarDescricao() 
{
    return "Olha meus bíceps!!!";
}