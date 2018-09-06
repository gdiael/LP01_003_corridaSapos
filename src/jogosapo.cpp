#include <iostream>
#include "sapo.h"
#include "jogosapo.h"

using namespace std;

JogoSapo::JogoSapo(int distancia_): m_distancia(distancia_)
{
    m_total_jogadores = 0;
    m_rodada = 0;
}

void JogoSapo::addSapo(Sapo * jogador_){
    if(m_total_jogadores < MAX_JOGADORES){
        m_jogadores[m_total_jogadores++] = jogador_;
    };
}

Sapo * JogoSapo::getVencedor(){
    return m_vencedor;
}

void JogoSapo::run(){
    int i = 0;
    while(i < m_total_jogadores){
        m_jogadores[i]->pular();
        if( m_jogadores[i]->getDistanciaPercorrida() >= m_distancia){
            m_vencedor = m_jogadores[i];
            i = m_total_jogadores;
        };
        i = i+1;
    };
    m_rodada++;
}

int JogoSapo::getDistancia(){
    return m_distancia;
}

int JogoSapo::getRodada(){
    return m_rodada;
}

void JogoSapo::printVencedor(){
    cout << "O vencedor da corrida foi: " << m_vencedor->getDescription() << endl;
}

void JogoSapo::printRodada(){
    string rod = to_string(m_rodada);
    if(m_rodada < 10){
        rod = "0" + rod;
    }
    cout << "------------------- Rodada " << rod << " --------------------" << endl;
    for(int i= 0;i<m_total_jogadores;i++){
        m_jogadores[i]->printTrilha(m_distancia);
    }
}

void JogoSapo::partida(){
    printRodada();
    cout << "Tecle [enter] para iniciar!" << endl;
    char ent[2];
    cin.getline(ent, 2);
    // Mecânica da corrida
    while(m_vencedor == nullptr){
        // O método run, irá atualizar os pulos, a rodada e selecionar o vencedor
        run();
        // O método imprime todas as informações da rodada
        printRodada();
        if(m_vencedor == nullptr){
            // Caso não tenha vencedor, espere enter para a proxima rodada
            cout << "Tecle [enter] para a próxima rodada!" << endl;
            cin.getline(ent, 2);
        }else{
            // Case tenha, imprima
            printVencedor();
        };
    };
}

