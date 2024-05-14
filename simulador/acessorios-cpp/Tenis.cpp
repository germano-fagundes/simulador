#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Tenis.hpp"

Tenis::Tenis(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Tenis::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Tenis::getResistencia() 
{
    return this->resistencia;
}