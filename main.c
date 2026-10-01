#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int n; // declarando a variavel

    printf("digite o tamanho do vetor: "); //pedindo para o usuario digitar o tamanho do vetor
    scanf("%d", &n); // le a resposta e guarda na variavel n

        int v[n]; // declara o vetor com o inteiro para armazenar as respostas dos usuarios
        int soma = 0; //  declara a variavel soma começando em zero

        for(int i = 0; i < n; i++){ //para: inteiro i igual a zero; enquanto i for menor que n; i aumenta
            printf("digite o valor %d:", i + 1); // pede para o usuario digitar um valor
            scanf("%d", &v[i]); // lê a resposta e armazena nas variaveis v[i]
            soma += v[i]; // soma é igual a soma mais v[i] ( numero adicionado ao vetor )
        }
        printf("soma: %d\n", soma); // imprime a reposta da soma
        printf("Média: %.2f\n", (float)soma/n); // imprime a  resposta da média, com um float dizendo para ter apenas duas casas decimais ( soma divido por n )



        return 0;

    }
