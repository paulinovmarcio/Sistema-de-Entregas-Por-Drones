#include "../header/galpao.h"

void InicializaGalpao(TADGalpao * galpao)
{
    FFilaVazia(&galpao->ListaDePacotes);
}

void RecebePacotes(TADGalpao * galpao, TADPacote * pacote)
{
    FEnfileira(&galpao->ListaDePacotes, pacote);
}

void CarregamentoPacotesGalpao(TADGalpao * galpao, TADDrone * drone)
{
    while(!FEhVazia(&galpao->ListaDePacotes)){

        int idx = galpao->ListaDePacotes.Frente;

        if(galpao->ListaDePacotes.Pacotes[idx].Peso + drone->PesoDrone <= drone->PesoMax){
            CarregamentoDePacotes(drone,
                &galpao->ListaDePacotes.Pacotes[idx]);

            drone->PesoDrone += galpao->ListaDePacotes.Pacotes[idx].Peso;
            FDesenfileira(&galpao->ListaDePacotes);
        }else{
            break;
        }
    }
}


void ImprimePacotesGalpao(TADGalpao * galpao)
{
    FImprime(&galpao->ListaDePacotes);
}

void ExecutaEntregas(TADGalpao * galpao, TADDrone * drone)
{
    int viagem = 1;

    while(!FEhVazia(&galpao->ListaDePacotes)){
        FFilaVazia(&drone->ListaPacotes); 
        drone->PesoDrone = 0;

        CarregamentoPacotesGalpao(galpao, drone);

        if(drone->PesoDrone == 0){
            break;   
        }

        printf("Viagem %d\n", viagem);
        RealizaEntregas(drone);
        viagem++;
    }

    printf("\nTotal de Quilômetros Percorridos no Dia: %dkm\n", drone->DistanTotal);
}