#include "../header/ListaPacotes.h"

void FFilaVazia(TADFila * Fila)
{
    Fila->Frente = 0;
    Fila->Tras = Fila->Frente;
}

int  FEhVazia(TADFila * Fila)
{
    return(Fila->Frente == Fila->Tras);
}

int  FEnfileira(TADFila * Fila, TADPacote * pacote)
{
    if((Fila->Tras + 1) % (MaxTam + 1) == Fila->Frente) {
        return 0; //FILA CHEIA
    }
    Fila->Pacotes[Fila->Tras] = *pacote;
    Fila->Tras = (Fila->Tras + 1) % (MaxTam + 1);
    return 1;
}

int  FDesenfileira(TADFila * Fila)
{
    if(FEhVazia(Fila)){
        return 0;
    }

    Fila->Frente = (Fila->Frente + 1) % (MaxTam + 1);
    return 1;
}

void FImprime(TADFila *  Fila)
{
    if(FEhVazia(Fila)){
        printf("Lista  esta vazia!\n");
        return;
    }

    for(int i = Fila->Frente; i < Fila->Tras ; i++) {
        printf("\nConteúdo: %s",Fila->Pacotes[i].Conteudo);
        printf("\nDestinatário: %s",Fila->Pacotes[i].Destinatario);
        printf("\nPeso: %d",Fila->Pacotes[i].Peso);
        printf("\nDistância: %d",Fila->Pacotes[i].Distancia);
        printf("\n");
    }
}