#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/bone.hpp"

Bone::Bone(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Bone::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Bone::gerarRuidoAtaque()
{
    return "...";
}
