#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int voto;

        printf("digite um numero para votar: ");
        scanf("%d", &voto);

        if(voto == 10){
            printf("Manoel ganhou a votação!");
        }else if(voto == 20){
            printf("Carla ganhou a votação!");
        }else if(voto == 30){
            printf("Bianca ganhou a votação!");
        }else if(voto == 40){
            printf("Henrique ganhou a votação!");
        }else if( voto == 50){
            printf("Bruno ganhou a votação! ");
        }else{
            printf("inválido!");
        }
        
        

               return 0;
    }
