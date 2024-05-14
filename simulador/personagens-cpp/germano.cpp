#include "../personagens-hpp/germano.hpp"

Germano::Germano(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Germano::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Germano::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Germano::pegarDescricao() 
{
    return "Ahh cara, eu sou muito burro!";
}