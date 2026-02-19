#ifndef GALPAO_H
#define GALPAO_H
#include "../header/drone.h"

typedef struct {
    TADFila ListaDePacotes;
}TADGalpao;

// OPERACOES

void InicializaGalpao(TADGalpao * galpao);
void RecebePacotes(TADGalpao * galpao, TADPacote * pacote);
void CarregamentoPacotesGalpao(TADGalpao * galpao,TADDrone * drone);
void ImprimePacotesGalpao(TADGalpao * galpao);
void ExecutaEntregas(TADGalpao * galpao, TADDrone * drone);

#endif