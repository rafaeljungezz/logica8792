#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int quadrado(int n){
    return n * n;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int nn;

        printf("digite um numero: ");
        scanf("%d", &nn);

            printf("o quadrado do numero %d é: %d\n",nn, quadrado(nn));

            return 0;
    }