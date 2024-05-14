#include "../personagens-hpp/bianca.hpp"

Bianca::Bianca(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Bianca::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Bianca::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Bianca::pegarDescricao() 
{
    return "É só ir aproximando...";
}