#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/oitao.hpp"

Oitao::Oitao(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Oitao::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Oitao::gerarRuidoAtaque()
{
    return "TAAA";
}
