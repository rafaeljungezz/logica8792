#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int limite; // declara a variavel limite

        printf("digite o limite: "); //pede para o usuario digitar um numero
        scanf("%d", &limite); // lê a resposta e armazena na variavel limite

            for(int n = 1; n <= limite; n++){ //para: numero inteiro igual a um; enquanto numero(1) for menor ou igual limite; numero(1) aumenta.
                int soma = 0; // declara a variavel soma começando em zero
                for(int i = 1; i < n; i++){// oara: inteiro i igual a 1; enquanto i(1) for menor que n, i aumenta.
                    if(n % i == 0){ // se (n divido por i) der resto zero:
                        soma += i; //soma = soma mais i
                    }
                }
                if(soma == n & n != 0){ // se (soma for igual a n for diferente de zero):
                    printf("%d é um número perfeito\n", n); // imprima a resposta.
                }
            }
       
        return 0;

    }
