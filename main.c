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

        for(int i = 1; i <= 1000; i++){
            if(i % 7 == 0 && i % 2 == 1){
                printf("%d\n", i);
                total++;
            }
        }
        printf("divisores por 7 e não por 2: %d\n", total);

        return 0;
    }