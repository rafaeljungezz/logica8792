#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

char mostrarnome(char nome[]){
    printf("nome: %s\n", nome);
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    mostrarnome("Rafael");
            return 0;
    }