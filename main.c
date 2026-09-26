#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int opcao;
    float a, b;

    do{
        printf("\n---MENU---\n");
        printf("1 - soma\n");
        printf("2 - subtração\n");
        printf("3- divisao\n");
        printf("4 - multiplicaçao\n");
        printf("0 - sair\n");
        printf("escolha uma opçao: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("digite dois numeros: ");
                scanf("%f %f", &a, &b);
                printf("resultado: %.2f\n", a + b);
                break;

            case 2:
                printf("digite dois numeros: ");
                scanf("%f %f", &a, &b);
                printf("resultado: %.2f\n", a - b);
                break;

            case 3:
                printf("digite dois numeros: ");
                scanf("%f %f", &a, &b);
                printf("resultado: %.2f\n", a / b);
                break;

            case 4:
                printf("digite dois numeros: ");
                scanf("%f %f", &a, &b);
            if(b != 0)
                printf("resultado: %.2f\n", a * b);
            else
                printf("erro: divisão por zero!\n");
                break;

            case 0:
                printf("saino...");
                break;
            default:
                printf("Opcao inválida!\n");
    }

   }while(opcao != 0);

        return 0;

    }
