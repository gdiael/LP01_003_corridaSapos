#include "sapo.h"

#ifndef JOGOSAPO_H
#define JOGOSAPO_H
#define MAX_JOGADORES 10

class JogoSapo
{
private:
    //distância total a ser percorrida pelos sapos
    int m_distancia;
    //Vetor [lista] onde serão guardado todos os jogadores
    Sapo * m_jogadores[MAX_JOGADORES];
    //número total de jogadores que estão concorrendo
    int m_total_jogadores;
    //apontador para o sapo vencedor
    Sapo * m_vencedor = nullptr;
    //guarda o número da rodada atual
    int m_rodada;
public:
    //Construtor e destrutor principal
    JogoSapo(int distancia_);
    ~JogoSapo();
    //método para adicionar novos sapos ao jogo
    void addSapo(Sapo * jogador_);
    //método para retornar o vencedor
    Sapo * getVencedor();
    //implementação da corrida
    void run();
    //retorna a distância final da corrida
    int getDistancia();
    //retorna o número da rodada atual
    int getRodada();
    //imprime o vencedor da corrida
    void printVencedor();
    //imprime a rodada atual
    void printRodada(); 

};

#endif
