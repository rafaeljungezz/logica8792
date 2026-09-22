#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numeros[] = {10, 20, 30};

printf("%zu", sizeof(numeros));
int lenght = sizeof(numeros) / sizeof(numeros)[0];

printf("%d", lenght);


return 0;


}
