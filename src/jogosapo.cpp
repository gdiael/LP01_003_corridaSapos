#include "sapo.h"
#include "jogosapo.h"

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