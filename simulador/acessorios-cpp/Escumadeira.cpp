#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Escumadeira.hpp"

Escumadeira::Escumadeira(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Escumadeira::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Escumadeira::getResistencia() 
{
    return this->resistencia;
}