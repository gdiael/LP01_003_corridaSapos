#include <iostream>

#include "sapo.h"
#include "jogosapo.h"
using namespace std;

int main(int argc, char const *argv[])
{

    Sapo * john = new Sapo("João das Quebradas", 6);

    while(john->getDistanciaPercorrida() < 20){
        cout << "Rodada Número " << john->getPulos()+1 << endl;
        john->pular();
        cout << john->getDescription();
        cout << " : Tecle enter pra continuar:";
        char ent[10];
        cin.getline(ent, 10);
    }

    return 0;
}