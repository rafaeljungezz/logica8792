#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int senha = 2011;
    int tentativas;

        printf("digite a senha: ");
        scanf("%d", &tentativas);

    while( tentativas != senha){

            printf("senha inválida!! tente novamente:");
            scanf("%d", &tentativas);
        }
        printf("acesso aceito!");


    
               return 0;
    }
