#ifndef DRONE_H
#define DRONE_H
#include "ListaPacotes.h"


typedef struct {
    int PesoMax;
    int PesoDrone;
    int DistanTotal;
    TADFila ListaPacotes;
}TADDrone;

// OPERACOES

void InicializaDrone(TADDrone * drone, int peso);
void CarregamentoDePacotes(TADDrone * drone, TADPacote * pacote);
int RealizaEntregas(TADDrone * drone);
void ImprimeComponentes(TADDrone * drone);

#endif