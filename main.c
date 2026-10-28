#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char placa[10] = "";
    int opcao; 


    do{
        printf("\n--- MENU ---\n");
        printf("1 - cadastrar placa\n");
        printf("2 - mostrar placa cadastrada\n");
        printf("0 - sair\n");
        printf("\nescolha: ");
        scanf("%d", &opcao);

            switch(opcao){

            case 1:

                printf("digite a placa de um carro:");
                scanf("%s", &placa);
                break;

            case 2: 

                if(strlen(placa) == 0){
                    printf("nenhuma placa registrada\n");
                }else{
                    printf("Sua placa é : %s\n", placa);
                }
                break;
            
            case 3:

                printf("saindo..\n");
                break;

            default:

                printf("numero inválido!\n");
                break;
                
        }
        
            }while(opcao != 3);

            return 0;
    }