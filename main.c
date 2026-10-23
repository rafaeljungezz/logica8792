#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        printf("digite um numero de 1 a 12:");
        scanf("%d", &n);

        switch (n){


        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

            printf("o mes %d tem 31 dias!\n", n);
            break;

        case 2:

            printf("o mes %d tem 28 dias\n", n);
            break;

        case 4:
        case 6:
        case 9:
        case 11:

            printf("o mes %d tem 30 dias:\n", n);
            break;

        default:

            printf("numero invalido!!\n");
            break;


        }
            

    //um switch digitar de 1 a 12 
               return 0;
    }
