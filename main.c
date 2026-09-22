#include<stdio.h>
#include<Windows.h>

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int resultado = somar(45, 45);
printf("o resultado da soma é: %d\n", resultado);

int resultadosubtraçao = subtrair(30, 12);
printf("o resultado da subtração é: %d\n", resultadosubtraçao);


return 0;


}
