#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int v[10]; //declara a variavel v[10], é como se fossem gavetas, armazenam o numero digitado pelo usuario

        for(int i = 0; i < 10;i++){ // para: inteiro i igual a 0; enquanto i for menor que zero; i aumenta.
            printf("digite o valor %d:", i + 1); //pede para o usuario para digitar um valor, até "chegar na ultma gaveta"( o maximo é 10 )
            scanf("%d", &v[i]); // lê os dados e armazena em v[i]
        }
        printf("Vetor invertido: \n"); // mensagem que mostra o numero invertido
        for(int i = 9; i >= 0; i--){ // para: inteiro i igual a 9; enquanto i for maior ou igual a zero; i diminuirá.
            printf("%d", v[i]); // imprime o valor, colocando os numeros em v[i]
        }
        printf("\n"); // quebra de limha
        
       
        return 0;

    }
