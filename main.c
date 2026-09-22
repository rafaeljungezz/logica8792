#include<stdio.h>
#include<Windows.h>

void saudar(const char *nome){
    printf("olá %s\n", nome);
}

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

saudar("Rafael");
saudar("Junges");
saudar("Trisch");



return 0;


}
