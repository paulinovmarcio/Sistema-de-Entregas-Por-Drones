#ifndef LISTA_PACOTES_H
#define LISTA_PACOTES_H
#define MaxTam 1000
#include "pacote.h"

typedef struct {
    TADPacote Pacotes[MaxTam + 1];
    int Frente , Tras;
}TADFila;

//OPERACOES

void FFilaVazia(TADFila * Fila);
int  FEhVazia(TADFila * Fila);
int  FEnfileira(TADFila * Fila, TADPacote * pacote);
int  FDesenfileira(TADFila * Fila);
void FImprime(TADFila *  Fila);

#endif