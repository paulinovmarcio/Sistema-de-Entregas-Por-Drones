#include "../header/drone.h"

void InicializaDrone(TADDrone * drone, int peso)
{
    drone->PesoMax = peso;
    drone->DistanTotal = 0;
    drone->PesoDrone = 0;
    FFilaVazia(&drone->ListaPacotes);
}

void CarregamentoDePacotes(TADDrone * drone, TADPacote *pacote)
{
    FEnfileira(&drone->ListaPacotes, pacote);
}


int RealizaEntregas(TADDrone * drone)
{
    for(int i = drone->ListaPacotes.Frente; i != drone->ListaPacotes.Tras;  i = (i + 1) % (MaxTam + 1)){
        printf("Entrega: %s para %s \n", GetConteudo(&drone->ListaPacotes.Pacotes[i]),GetDestinatario(&drone->ListaPacotes.Pacotes[i]));
    }

    int DistParcial , PosInicial , PosFinal;
    PosInicial = 0;
    DistParcial = 0;

    while(!FEhVazia(&drone->ListaPacotes)){
        PosFinal = drone->ListaPacotes.Pacotes[drone->ListaPacotes.Frente].Distancia;

        if((drone->ListaPacotes.Frente + 1) % (MaxTam + 1) == drone->ListaPacotes.Tras){
            if (PosFinal > PosInicial){
                DistParcial += PosFinal - PosInicial;
            }else{
                 DistParcial += PosInicial - PosFinal;
            }
            DistParcial += PosFinal;
            PosInicial = PosFinal;
            FDesenfileira(&drone->ListaPacotes);
        }else{
            if (PosFinal > PosInicial){
                DistParcial +=  PosFinal - PosInicial;
                PosInicial = PosFinal;
                FDesenfileira(&drone->ListaPacotes);
            }else if (PosFinal < PosInicial){
                DistParcial += PosInicial - PosFinal;
                PosInicial = PosFinal;
                FDesenfileira(&drone->ListaPacotes);
            }
        }
    }
    drone->DistanTotal += DistParcial;
    printf("Distancia Total: %dkm\n",DistParcial);
}   


void ImprimeComponentes(TADDrone * drone) 
{
    printf("\nPeso Máximo: %d",drone->PesoMax);
    printf("\nPeso Carregado: %d",drone->PesoDrone);
    printf("\nDistancia Percorrida: %d",drone->DistanTotal);
    printf("\n");
    FImprime(&drone->ListaPacotes);
}