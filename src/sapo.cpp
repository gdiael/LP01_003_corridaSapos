#include <iostream>
#include "sapo.h"
#include <random>

using namespace std;

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

