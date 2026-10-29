#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

char* tipoVeiculo(char placa[]){
    char primeiro = placa[0];

    if(primeiro >= 'A' && primeiro <= '2'){
        return "veiculo particular";
    }else if(primeiro >= '0' && primeiro <= '9'){
        return "placa irregular";
    }else{
        return "formato desconhecido";
    }
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao;
    char placa[8];

        printf("\n ----- SISTEMA DE TRANSITO -----\n");
        printf("\ndigite os caracteres da placa do veículo: ");
        scanf("%s", &placa);

    do{
        printf("\n1 - Ver placa | 2 - Tipo de veículo | 0 - sair: ");
        scanf("%d", &opcao);

            switch(opcao){

                case 1: 

                    printf("PLACA DO VEICULO: %s\n", placa);
                    break;

                case 2:

                    printf("tipo: %s\n", tipoVeiculo(placa));
                    break;

                case 0:

                    printf("saindo...\n");
                    break;

                default: 

                    printf("numero invalido!\n");
                    break;
            }
    }while(opcao != 0);

        printf("fim do Programa!\n");


            return 0;
    }