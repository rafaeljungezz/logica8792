#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void linha(int n){
    for(int i = 0; i < n; i++){
        printf("-");
    printf("\n");
    }
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    linha(30);
    printf("Bem-VINDO AO SISTEMA\n");
    linha(30);


            return 0;
    }