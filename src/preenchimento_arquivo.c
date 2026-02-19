#include "../header/preenchimento_arquivo.h"

int LerArquivo(char * arquivo_teste,TADGalpao * galpao  , TADDrone * drone)
{
    FILE * fp;
    int PesoMax, TotalPacotes;

    fp = fopen(arquivo_teste,"r");

    if(fp == NULL){
        printf("ERRO AO ABRIR ARQUIVO!");
        return 0;
    }

    fscanf(fp, "%d",&PesoMax);
    InicializaDrone(drone,PesoMax);
    InicializaGalpao(galpao);

    fscanf(fp,"%d",&TotalPacotes);
    
    for(int i = 0; i < TotalPacotes; i++){
        char Conteudo[15], Destinatario[20];
        int Peso, Distancia;

        TADPacote pacote;
        InicializaPacote(&pacote);

        fscanf(fp,"%s %s %d %d",Conteudo , Destinatario , &Peso , &Distancia);
        SetConteudo(&pacote,Conteudo);
        SetDestinatario(&pacote,Destinatario);
        SetPeso(&pacote,Peso);
        SetDistancia(&pacote,Distancia);
        RecebePacotes(galpao,&pacote);

    }

    fclose(fp);
    return 1;
}

