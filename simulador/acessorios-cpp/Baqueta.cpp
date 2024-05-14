#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Baqueta.hpp"

Baqueta::Baqueta(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Baqueta::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Baqueta::getResistencia() 
{
    return this->resistencia;
}