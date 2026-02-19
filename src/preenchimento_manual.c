#include "../header/preenchimento_manual.h"

void PreenchimentoManual(TADGalpao * galpao, TADDrone * drone)
{
    int PesoMax , NumeroPacotes;
    

    InicializaGalpao(galpao);


    printf("Digite o peso máximo do drone: ");
    scanf("%d",&PesoMax);
    InicializaDrone(drone,PesoMax);

    printf("\nDigite o número de pacotes a serem entregues: ");
    scanf("%d",&NumeroPacotes);

    for(int i = 0; i < NumeroPacotes;i++){
        char Conteudo[15], Destinatario[20];
        int  PesoPacote , Distancia;
        printf("\nPACOTE %d",i+1);
        TADPacote pacote;
        InicializaPacote(&pacote);
        
        printf("\nConteúdo: ");
        scanf("%14s",Conteudo);
        SetConteudo(&pacote,Conteudo);

        printf("\nDestinatário:");
        scanf("%19s",Destinatario);
        SetDestinatario(&pacote,Destinatario);

        printf("\nPeso: ");
        scanf("%d",&PesoPacote);
        if(PesoPacote > drone->PesoMax) {
            printf("PESO MAIOR QUE SUPORTADO PELO DRONE! PACOTE IGNORADO\n");
            continue;
        }
        SetPeso(&pacote,PesoPacote);


        printf("\nDistancia: ");
        scanf("%d",&Distancia);
        SetDistancia(&pacote,Distancia);

        RecebePacotes(galpao,&pacote);

    }
   
}