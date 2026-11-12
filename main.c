#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int total = 0;

        for(int i = 1; i <= 200; i++){
            if(i % 10 == 3){
                printf("%d\n", i);
                total++;
            }
        }
        printf("Quantidade de numeros terminados em 3: %d", total);
       

        return 0;
    }