#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/ShoulderBag.hpp"

ShoulderBag::ShoulderBag(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string ShoulderBag::getDescricaoArma() 
{
    return this->descricaoArma;
}

int ShoulderBag::getResistencia() 
{
    return this->resistencia;
}