#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // unidade = dobro da dezena

        int total = 0;

            for(int i = 1; i <= 100; i++){
                int dezena = i / 10;
                int unidade = i % 10;

                    if(i %  4== 0){
                        printf("%d\n", i);
                        total++;
                    }
            }
            printf("o total é: %d", total);

        return 0;
    }