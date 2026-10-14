#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n; 

        printf("digite o tamanho dos vetores: ");
        scanf("%d", &n);

    int a[n], b[n], soma[n];

        printf("digite os valores do Vetor A:\n");

        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        printf("digite os valores do vetor B:\n");

        for(int i = 0; i < n;i++){
            scanf("%d", &b[i]);
        }
        
        for(int i = 0; i < n; i++){
            soma[i] = a[i] + b[i];
        }

        printf("vetor soma: \n");

        for(int i = 0; i < n; i ++){
            printf("%d\n", soma[i]);
        }
        printf("\n");

               return 0;
    }
