#include "../personagens-hpp/carioca.hpp"

Carioca::Carioca(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Carioca::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Carioca::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Carioca::pegarDescricao() 
{
    return "Coe meno, nem peguei!! Ta metendo o loko ai!";
}