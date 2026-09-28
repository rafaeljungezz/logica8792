#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int contador = 0;
    for(int i = 0; i <= 9; i++){
        for(int r = 0; r <= 9; r++){
            for(int h = 0; h <= 9; h++){
                for(int n = 0; n <= 9; n++){
                    contador++;
                    printf("os possiveis resultados do cadeado: %d %d %d %d\n", i, r, h, n);
            
                }
            }
        }
    }
  
    printf("o numero total de interaçoes: %d\n", contador);
        return 0;

    }
