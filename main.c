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

        //terminam em 7 e sao multiplos de 3;

        for(int i = 1; i <= 500; i++){
            int unidade = i % 10;

                if(i % 10 == 7 && i % 3 == 0 ){
                    printf("%d\n", i);
                    total++;
                }
        }
        printf("total: %d", total);

        return 0;
    }