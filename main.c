#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int opcao = -1;

   while(opcao != 0){
    printf("\nmenu: \n");
    printf("1 - depositar\n");
    printf("2 - sacar\n");
    printf("3 - consultar\n");
    printf("0 - sair\n");
    printf("escolha: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("voce escolheu depositar\n");
            break;

        case 2:
            printf("voce escolheu sacar\n ");
            break;

        case 3:
            printf("voce escolheu consultar\n ");
            break;

        case 0:
            printf("saino...\n");
            break;

        default:
        printf("POÇAO INVALIDA!\n ");

        }
   }

}
