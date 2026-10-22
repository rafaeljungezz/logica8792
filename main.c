#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n; 
    int soma = 0;

        do{

            printf("digite um numero ( 0 para parar ):");
            scanf("%d", &n);
            soma += n;

        }while(n != 0);

            printf("soma: %d\n", soma);


               return 0;
    }
