#include "../header/pacote.h"
#include <string.h>

//SETs

void SetConteudo(TADPacote * pacote, char * conteudo)
{
    strcpy(pacote->Conteudo, conteudo);
}

void SetDestinatario(TADPacote * pacote , char * destinatario)
{
    strcpy(pacote->Destinatario,destinatario);
}

void SetPeso(TADPacote * pacote , const int peso)
{
    pacote->Peso = peso;
}

void SetDistancia(TADPacote * pacote ,const int distancia)
{
    pacote->Distancia = distancia;
}

//GETs
char * GetConteudo(TADPacote * pacote)
{
    return pacote->Conteudo;
}

char * GetDestinatario(TADPacote * pacote)
{
    return pacote->Destinatario;
}

int    GetPeso(TADPacote * pacote)
{
    return pacote->Peso;
}

int    GetDistancia(TADPacote * pacote)
{
    return pacote->Distancia;
}

//OPERACOES

void InicializaPacote(TADPacote * pacote)
{
    SetConteudo(pacote," ");
    SetDestinatario(pacote," ");
    SetDistancia(pacote,0);
    SetPeso(pacote,0);

}