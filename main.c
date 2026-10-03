#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n; // declara a variavel n

        printf("digite o tamanho do vetor: ");   //pede para o usuario digitar o tamanho do vetor 
        scanf("%d", &n);     // lê a resposta e armazena na variavel n

    int v[n];    //declaramos a variavel v[o numero digitado pelo usuario                                 //int numrto [2]  --> significa que vão ter dois numeros

        for(int i = 0; i < n; i++){
            printf("digite o valor %d: ", i + 1);
            scanf("%d", &v[i]);
               }

    int ordenado = 1;

        for(int i = 0; i < n - 1; i++){
            if(v[i] > v[i + 1]){
                ordenado = 0;
                break;
            }
        }

        if(ordenado){
            printf("o vetor está ordenado de forma crescente\n");
        }else{
            printf("o vetor NÃO está ordenado\n");
        }
        



               return 0;
    }
