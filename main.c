#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    int fatorial(int n){
        if(n == 0 || n == 1){
            return 1;
        }
        return n * fatorial(n - 1);
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int resultado = fatorial(5);

        printf("fatorial: %d\n", resultado);
    
            return 0;
    }