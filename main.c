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

    int v[n];    //declaramos a variavel v[o numero digitado pelo usuario]                                 //int numrto [2]  --> significa que vão ter dois numeros

        for(int i = 0; i < n; i++){     // cada vez que o inteiro i for menor que o numero do usuario, i aumenta
            printf("digite o valor %d: ", i + 1);   // pede para o usuario digitar um valor, a mensagem se repete pelo numero de vezes que o usuario escolheu no vetor.
            scanf("%d", &v[i]);     // lê o dado que usuario digitou e armazena na variavel v[i]
        }
    int maior = v[0], menor = v[0];     // declara a variavel maior =v[0] e menor = v[0]

        for(int i = 1; i < n; i++){     //  para: percorre o vetor a partir do segundo elemento (índice 1)
            if(v[i] > maior) maior = v[i];  // se encontrar um valor maior que "maior", atualiza "maior"
            if(v[i] < menor) menor = v[i];  // se encontrar um valor menor que "menor", atualiza "menor"
        }

            printf("maior: %d\n", maior);   //mostra o maior valor encontrado
            printf("Menor: %d\n", menor);   // mostra o menor valor encontrado


        return 0;

    }
