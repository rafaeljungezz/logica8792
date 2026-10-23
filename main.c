#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        printf("digite um numero de 1 a 3: ");
        scanf("%d", &n);

        switch (n){


        case 1:

            printf("você digitou o numero %d", n);
            break;

        case 2:

            printf("você digitou o numero %d", n);
            break;

        case 3:

            printf("você digitou o numero %d", n);
            break;

        default:

            printf("numero invalido!!\n");
            break;


        }
            


               return 0;
    }
