#include <iostream>
#include "sapo.h"
#include <random>

using namespace std;

int Sapo::distanciaFinal = 50;

Sapo::Sapo(string identificador, int maximo_salto): m_identificador(identificador), m_maximo_salto(maximo_salto), rd(), gen(rd()), dis(1, maximo_salto)
{
    m_distancia_percorrida = 0;
    m_pulos = 0;
}

void Sapo::pular(){
    int salto = std::round(dis(gen));
    m_pulos++;
    m_distancia_percorrida += salto;
}

string Sapo::getDescription(){
    return m_identificador + " (" + to_string(m_distancia_percorrida) + "m)";
}

void Sapo::print(){
    cout << getDescription() << endl;
}

int Sapo::getDistanciaPercorrida(){
    return m_distancia_percorrida;
}

int Sapo::getPulos(){
    return m_pulos;
}

void Sapo::printTrilha(){
    //Inteiro que vai guardar o número de pontos
    int numPontos = (50 * m_distancia_percorrida) / distanciaFinal;
    string pontos = "";
    for(int i = 0; i < numPontos; i++){
        pontos += ".";
    }
    cout << pontos << getDescription() << endl;
}

ostream& operator<< (ostream &os, Sapo * sp)
{
    //Inteiro que vai guardar o número de pontos
    int numPontos = (50 * sp->m_distancia_percorrida) / Sapo::distanciaFinal;
    string pontos = "";
    for(int i = 0; i < numPontos; i++){
        pontos += ".";
    }
    cout << pontos << sp->getDescription() << endl;
    return os;
}
