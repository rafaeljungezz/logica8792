#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        printf("digite o tamanho da pirâmide: ");
        scanf("%d", &n);

            for(int i = 1; i <= n; i++){
                for(int r = i; r <= i; r++){
                    printf(" ");

                }
                for(int k = 1; k <= ( 2 * i -1); k++){
                    printf("*");
                }
                printf("\n");
            }

        return 0;

    }
