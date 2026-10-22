#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float nota;

        do{

            printf("digite uma nota ( 0 a 10 ):");
            scanf("%f", &nota);

        }while(nota < 0 || nota > 10);

        printf("nota válida: %.1f\n", nota);
    
               return 0;
    }
