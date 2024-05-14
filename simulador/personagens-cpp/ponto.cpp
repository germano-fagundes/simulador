#include "../personagens-hpp/ponto.hpp"

Ponto::Ponto(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Ponto::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Ponto::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Ponto::pegarDescricao() 
{
    return "Em Python é facin isso aí.";
}