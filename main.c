#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float valor, cotação;

printf("Digite um valor em reais: ");
scanf("%f", &valor);
printf("Digite a cotação em dolar: ");
scanf("%f", &cotação);

printf("Valor em dólares: %.5f\n", valor / cotação);


return 0;

}

