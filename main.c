#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, soma = 0;
    
        printf("digite N: ");
        scanf("%d", &n);

        for(int i = 1; i <= n; i++){
            soma += i;
            soma -= 1;
            int result = soma;
                printf("\nresultado da soma: %d + %d = %d\n", soma, i, soma + i);
        }
        

               return 0;
    }
