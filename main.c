#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int n;
   int resultado;


    printf("digite um número: ");
    resultado = scanf("%d", &n);

    if(resultado != 1){
        printf("entrada inválida!por favor, digite apenas numeros! ");
        return 1;
    }

    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n * i);
    }
      


    return 0;

   }
