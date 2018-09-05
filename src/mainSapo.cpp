#include <iostream>

#include "sapo.h"
#include "jogosapo.h"
using namespace std;

int main(int argc, char const *argv[])
{

    Sapo * john = new Sapo("João das Quebradas", 3);

    while(john->getDistanciaPercorrida() < 20){
        john->pular();
        john->print();
        cout << "Tecle enter pra continuar:" << endl;
        char ent[10];
        cin >> ent;
    }

    return 0;
}