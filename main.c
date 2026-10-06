#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero;
    int sucesso;

        do{
            printf("digite um numero amior que 0: ");
            sucesso = scanf("%d", &numero);

            if(sucesso != 1){
                printf("entrada inválida! digite apenas numeros inteiros!\n");
                while(getchar() != '\n');
                numero = 0;
            }
        }while(numero <= 0 );

            printf("voc~e digitou %d, que é válido!\n", numero);
        
        

               return 0;
    }
