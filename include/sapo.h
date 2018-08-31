#ifndef SAPO_H
#define SAPO_H

#include <random>

class Sapo
{
private:
    std::string m_identificador;
    int         m_distancia_percorrida;
    int         m_pulos;
    int         m_maximo_salto;
    // atributos para geração de números randômicos
    std::random_device rd;
    std::default_random_engine gen;
    std::uniform_int_distribution<> dis;
public:
    Sapo(std::string identificador, int maximo_salto);
    ~Sapo();
    void pular();
    void print();
};

#endif