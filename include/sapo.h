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
    std::uniform_int_distribution<int> dis;
public:
    //Construtor e destrutor padrão do Sapo
    Sapo(std::string identificador, int maximo_salto);
    ~Sapo();
    // método para incrementar randomicamente a distância percorrida pelo sapo.
    void pular();
    // Retorna uma descrição sobre o Sapo {[Nome][Distância]m}
    std::string getDescription();
    // Método para imprimir as informações sobre o Sapo
    void print();
    // Retorna a distância percorrida
    int getDistanciaPercorrida();
    
};

#endif