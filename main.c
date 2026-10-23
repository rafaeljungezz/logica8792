#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao;

        do{

            printf("\b--- MENU ---\n");
            printf("1 - dizer olá\n");
            printf("2 - dizer tchau\n");
            printf("0 - sair\n");
            printf("escolha: ");
            scanf("%d", &opcao);

                if(opcao == 1){
                    printf("\nolá\n");
                }else if(opcao == 2){
                    printf("\ntchau!\n");
                }else if(opcao == 0){
                    printf("\nopcao inválida!\n");
                }

        }while(opcao != 0);
            printf("até mais!\n");
            


               return 0;
    }
