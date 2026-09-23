#include<stdio.h>
#include<Windows.h>
#include<math.h>
    
int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numero;
printf("digite um numero: ");
scanf("%d", &numero);

int quadrado = (int)pow(numero, 2);
int cubo = (int)pow(numero, 3);
printf("quadrado de %d = %d\n", numero, quadrado);
printf("cubo de %d = %d", numero, cubo);


return 0;


}
