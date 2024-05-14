#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/rock.hpp"

Rock::Rock(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Rock::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Rock::gerarRuidoAtaque()
{
    return "tuc";
}
