#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include "funcoes.h"


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        do{
            printf(" digite um numero maior que 0: ");
            scanf("%d", &n);
        }while(n <= 0);

            printf("você digitou %d, que é válido!\n", n);

        
        

               return 0;
    }
