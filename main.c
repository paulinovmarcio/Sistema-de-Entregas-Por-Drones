#include "header/galpao.h"
#include "header/preenchimento_arquivo.h"
#include "header/preenchimento_manual.h"
#include "locale.h"

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    TADGalpao galpao;
    TADDrone drone;
    int escolha;
    char caminho[20] , arquivo[50];
    int viagem = 1;

    do{

    printf("Leitura por arquivo ou leitura manual (1/2): ");
    scanf("%d",&escolha);
    
    if(escolha != 1 && escolha != 2){
        printf("VALOR INVALIDO! Tente novamente.\n\n");
    }

    } while(escolha != 1 && escolha != 2);

    if(escolha == 1){
        printf("Escolha o teste no modelo testeX.txt: ");
        scanf("%19s",arquivo);
        sprintf(caminho,"./testes/%s",arquivo);
        LerArquivo(caminho,&galpao,&drone);
        ExecutaEntregas(&galpao,&drone);
    }else if (escolha == 2) {
        PreenchimentoManual(&galpao,&drone);
        ExecutaEntregas(&galpao,&drone);
    }else {
        printf("VALOR INVALIDO!");
    }
    return 0;
}