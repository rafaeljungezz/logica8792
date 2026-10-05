#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

char* saudaçao(){
    return "olá, seja bem-vindo(a)!";
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("%s\n", saudaçao());




               return 0;
    }
