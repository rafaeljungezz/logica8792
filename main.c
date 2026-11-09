#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    long long fatorial(int n){
        long long resultado = 1;

            for(int i = 2; i <= n; i++){
                resultado *= i;
            }
            return resultado;
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    int num;

        printf("digite um valor: ");
        scanf("%d", &num);

            printf("fatorial de %d: %lld\n", num, fatorial(num));  

    
            return 0;
    }