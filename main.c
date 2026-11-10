#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    int quadrado(int n){
        return n * n;
    }

    int cubo(int nn){
        return nn * nn * nn;
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numQuadrado;
    

        printf("digite um valor para quadrado: ");
        scanf("%d", &numQuadrado);

            printf("quadrado: %d\n Cubo: %d\n", quadrado(numQuadrado), cubo(numQuadrado));  

        

            return 0;
    }