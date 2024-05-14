#include <iostream>
#include <string>
#include "../acessorios-hpp/repique.hpp"
#include "../acessorios-hpp/oitao.hpp"
#include "../acessorios-hpp/bone.hpp"
#include "../acessorios-hpp/pastel.hpp"
#include "../acessorios-hpp/rock.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Baqueta.hpp"
#include "../acessorios-hpp/Oculos.hpp"
#include "../acessorios-hpp/ShoulderBag.hpp"
#include "../acessorios-hpp/Tenis.hpp"
#include "../acessorios-hpp/Escumadeira.hpp"
#include "../personagens-hpp/carioca.hpp"
#include "../personagens-hpp/henrique.hpp"
#include "../personagens-hpp/otavio.hpp"
#include "../personagens-hpp/ponto.hpp"
#include "../personagens-hpp/bianca.hpp"
#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* repique = new Repique("Repique da Engrenada",0,20);
    ArmaAtaque* oitao = new Oitao("Oitao Carioca",0,50);
    ArmaAtaque* pastel = new Pastel("Pastel do Ouvidor",0,10);
    ArmaAtaque* rock = new Rock("Pedra",0,20);
    ArmaAtaque* bone = new Bone("Bone do Henrique",0,10);

    ArmaDefesa* baqueta = new Baqueta("Baqueta de Repique", 5);
    ArmaDefesa* oculos = new Oculos("Oculos de nerdola", 1);
    ArmaDefesa* shoulderBag = new ShoulderBag("Shoulder do Otavio", 1);
    ArmaDefesa* tenis = new Tenis("Tenis de corrida", 2);
    ArmaDefesa* escumadeira = new Escumadeira("Escumadeira do Ouvidor", 4);
    
    Personagem* p1 = new Carioca(1, "Carioca", 100, repique, oculos);
    Personagem* p3 = new Henrique(1, "Henrique", 100, pastel, shoulderBag);
    Personagem* p2 = new Ponto(2, "Ponto", 100, rock, tenis);
    Personagem* p4 = new Bianca(2, "Bianca", 100, oitao, baqueta);

    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}