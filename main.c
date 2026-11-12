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

            if(dezena + unidade == 10){
                printf("%d\n", i);
                total++;
            }
                
            
        }
        printf("Quantidade de numeros: %d", total);
       

        return 0;
    }