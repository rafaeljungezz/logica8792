#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int idade;
    int temIngresso;

        printf("digite sua idade:\n");
        scanf("%d", &idade);

        printf("possui ingresso?( 1 - sim / 0 - não)\n");
        scanf("%d", &temIngresso);

        if(idade >= 18 && temIngresso){
            printf("entrada permitida!\n");
        }else{
            printf("entrada não permitida!\n");
        }

               return 0;
    }
