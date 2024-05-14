#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/repique.hpp"

Repique::Repique(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Repique::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Repique::gerarRuidoAtaque()
{
    return "tugalacatum";
}
