#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int numero, soma = 0;
    
        printf("digite um numero para somar (0 encerra): ");
        scanf("%d", &numero);

    while(numero != 0){
        soma += numero;
        scanf("%d", &numero);
    }
printf("soma total = %d\n", soma);

    return 0;
}
