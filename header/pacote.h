#ifndef PACOTE_H
#define PACOTE_H
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char Conteudo[15];
    char Destinatario[20];
    int  Peso;
    int Distancia;
}TADPacote;

//SETs

void SetConteudo(TADPacote * pacote, char * conteudo);
void SetDestinatario(TADPacote * pacote , char * destinatario);
void SetPeso(TADPacote * pacote , const int peso);
void SetDistancia(TADPacote * pacote , const int distancia);

//GETs

char * GetConteudo(TADPacote * pacote);
char * GetDestinatario(TADPacote * pacote);
int    GetPeso(TADPacote * pacote);
int    GetDistancia(TADPacote * pacote);

// OPERACOES

void InicializaPacote(TADPacote * pacote);

#endif