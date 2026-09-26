#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

  int n, numeroInvertido = 0, resto; // n é o nmero digitado pelo usuario. //numeroInvertido é o numero que que começa em 0 e vai virando nosso nuemro invertido.
                                    // resto é para puxar o ultimo numero do nuemro escolhido

    printf("digite um numero: "); //98
    scanf("%d", & n); // o numero é armazenado em n

    while(n != 0){ 
        resto = n % 10;
        numeroInvertido = numeroInvertido * 10 + resto;
        n = n / 10;
    }
    
    printf("seu numero invertido é: %d\n", numeroInvertido); // omde sai o numero invertido no terminal.

    return 0;

   }
