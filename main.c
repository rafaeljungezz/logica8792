#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    void contagem(int n){
        if( n == 0){
            printf("FOGO!\n");
            return;
        }
        printf("%d\n", n);
        contagem(n - 1);
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    contagem(5);
    
            return 0;
    }