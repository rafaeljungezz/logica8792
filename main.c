#include<stdio.h>
#include<Windows.h>

void dobrar(int *x){
    *x = *x * 2;
}

int main(){

int numero = 10;
dobrar(&numero);
printf("número depois da função: %d\n", numero);


SetConsoleCP(65001);
SetConsoleOutputCP(65001);



return 0;


}
