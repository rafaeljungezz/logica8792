#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int soma = 0;

        for(int i = 1; i <= 50; i++){
            if(i % 2 == 1){
                soma += i;
            }
        }
        printf("\n Soma: %d\n", soma);
    
        return 0;
    }