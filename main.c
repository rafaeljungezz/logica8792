#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        printf("de que tamanho vai ser o quadrado: ");
        scanf("%d", &n);


    for(int i = 1; i <= n; i++){
        for(int r = 1; r <=n; r++){
            printf("* ");
        }
        printf("\n");
    }



        return 0;

    }
