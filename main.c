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

        for(int i = 10; i <= 99; i++){
            int dezena = i / 10;
            int unidade = i % 10;

                if(unidade > dezena){
                    total++;
                }
        }
        printf("total é: %d\n", total);
       

        return 0;
    }