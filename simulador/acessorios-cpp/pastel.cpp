#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/pastel.hpp"

Pastel::Pastel(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Pastel::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Pastel::gerarRuidoAtaque()
{
    return "tsss";
}
