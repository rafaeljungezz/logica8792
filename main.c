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

    int pares = 0, impares = 0;

            for(int i = 0; i < n; i++){
                printf("digite o valor %d: ", i + 1);
                scanf("%d", &v[i]);

                if(v[i] % 2 == 0){
                    pares++;
                }else{
                    impares++;
                }
            }
            printf("pares: %d\n", pares);
            printf("impares: %d\n", impares);


            return 0;
    }
