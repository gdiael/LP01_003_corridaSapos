#include <iostream>

#include "sapo.h"
#include "jogosapo.h"
using namespace std;

int main(int argc, char const *argv[])
{

    //// Teste da Classe Sapo
    // Sapo * john = new Sapo("João das Quebradas", 6);

    // while(john->getDistanciaPercorrida() < 20){
    //     cout << "Rodada Número " << john->getPulos()+1 << endl;
    //     john->pular();
    //     cout << john->getDescription();
    //     cout << " : Tecle enter pra continuar:";
    //     char ent[10];
    //     cin.getline(ent, 10);
    // }

    // Inicialização de uma nova classe representando o jogo
    JogoSapo * corrida = new JogoSapo(70);
    // Adicionamos 4 jogadores
    corrida->addSapo(new Sapo("Pamonha", 6));
    corrida->addSapo(new Sapo("Januário", 5));
    corrida->addSapo(new Sapo("Rubinho", 3));
    corrida->addSapo(new Sapo("Mariazinha", 7));
    // Realização da corrida
    corrida->partida();

    return 0;
}