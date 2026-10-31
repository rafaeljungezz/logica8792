#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>




int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numeros[5];

    for(int i = 0; i < 5; i++){
            printf("digite o numero: ", i + 1);
            scanf("%d", &numeros[i]);
        }
        printf("\nNumeros digitados: \n");
            for(int i = 0; i < 5; i++){
                printf("%d", numeros[i]);
            }

            return 0;
    }