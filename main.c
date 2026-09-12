#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float celsius, fahrenheit;

printf("digite a temperatura em celsius: ");
scanf("%f", &celsius);

fahrenheit = (celsius * 9.0 / 5.0) + 32;
printf("fahrenheit: %.2f\n", fahrenheit);

return 0;

}

