#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

int votosA = 0; //variavel votos A
int votosB = 0; // variavel votos B
int votosNulos = 0; // variavel para os votos Nulos

// todas começam em zero e vão aumentando.

void votar(int numero){
    if(numero == 1){
        votosA++;
            printf("você votou no candidato A.\n");
    }else if(numero == 2){
        votosB++;
            printf("você votou no candidato B.\n");
    }else{
        votosNulos++;
        printf("voto nulo.\n");
    }
}


void resultado(){
    printf("\n ==== Resultado da votação ====\n");
    printf("candidatos A: %d votos\n", votosA);
    printf("candidatos B: %d votos\n", votosB);
    printf("Nulos: %d votos\n", votosNulos);

    if(votosA > votosB){
        printf(">>> candidato A venceu\n");
    }else if( votosB > votosA ){
        printf(">>> candidato B veceu!");
    }else{
        printf("Empate!\n");
    }
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int voto;
    int totalEleitores = 5;

        for(int i = 0; i < totalEleitores; i++){
            printf(" Eleitor %d - Digite 1 para A, 2 para B:", i + 1);
            scanf("%d", &voto);
            votar(voto);
        }

        resultado();
        

               return 0;
    }
