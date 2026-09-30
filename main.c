#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   
       int n = 8; //declara a variavel n = 8

        for(int i = 0; i < n; i++){  //para: i vale 0, enquanto i for menor que n(8), i aumenta em 1
            for(int j = 0; j < n; j++){ //para: j vale 0, enquanto j for menor que n(8), j aumenta em 1
                if((i + j) % 2 == 0 ){ // Se: (i mais j) dividido por 2 der resto zero:
                    printf("[ ]"); // imprima [ ]
                }else{ // se não:
                    printf("[#]"); // imprima [#]
                }
            }
            printf("\n"); // quebra de linha
        }

        return 0;

    }
