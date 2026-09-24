#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int numero;

        printf("digite um numero positivo: ");
        scanf("%d", &numero);

    while(numero <= 0){
        printf("numero invalido! digite novamente: ");
        scanf("%d", &numero);
    }
        printf("numero valido: %d\n", numero);

}
