#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int n;
   float valor, soma = 0;

    printf("quantos numeros deseja digitar? ");
    scanf("%d", &n);

    for(int i = 0; i< n; i++){
        printf("digite o numero %d: ", i + 1);
        scanf("%f", &valor);
        soma += valor;
    }
    printf("Média: %.2f\n", soma / n);


    return 0;

   }
