#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    int potencia(int base, int expoente){
        if(expoente == 0){
            return 1;
        }
        return base * potencia(base, expoente - 1);
    }
    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

        printf("resultado: %d\n", potencia(2,4));
    
       
            return 0;
    }