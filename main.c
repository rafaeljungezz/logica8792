#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        printf("digite o tamanho do trialngulo: ");
        scanf("%d", &n);

            for(int i = 1; i <= n; i++){
                for(int r = 1; r <= i; r++){
                    printf("r ");
                }
                printf("\n");
            }

        return 0;

    }
