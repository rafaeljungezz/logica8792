#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    int pares = 0;

        printf("digite o numero:\n");
            scanf("%d", &n);
        

        while(n != 0){

            if(n % 2 == 0){
                    pares++;
            }

            printf("digite um numero ( e 0 para encerrar ):");
            scanf("%d", &n);

        }
        printf("a soma dos pares é: %d", pares);
    
               return 0;
    }
