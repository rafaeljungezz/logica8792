#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);


int n;

    printf("digite um número: ");
    scanf("%d", &n);

printf("%s", n > 0 ? "positivo" : (n < 0 ? "negativo" : "zero"));

return 0;

}

