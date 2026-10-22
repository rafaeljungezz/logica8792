#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int r;

        do{

            printf("Executando o programa..\n");
            printf("deseja continuar? ( 1 - Sim / 0 - Não):");
            scanf("%d", &r);

        }while(r == 1);

            printf("Programa Encerrado!!\n"); 

            
               return 0;
    }
