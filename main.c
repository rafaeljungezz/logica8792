#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int buscar(float vetor[], int tamanho, float chave){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == chave){
            return i;
        }
    }
    return -1;
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float numeros[] = {10.5, 20.5, 30.5, 40.5, 50.5};
    int tamanho = 5;
    float procurado;

        printf("digite o numero que deseja procurar: ");
        scanf("%f", &procurado);

    int resultado = buscar(numeros, tamanho, procurado);

        if(resultado != -1){
            printf("numero encontrado!\n");
            printf("valor: %.2f\n", numeros[resultado]);
            printf("posição no vetor: %d\n", resultado);
        }else{
            printf("Número não encontrado!\n");
        }      



            return 0;
    }