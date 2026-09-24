#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n;

printf("digite um número: ");
scanf("%d", &n);

if(n % 2 == 0){
    printf("\nPar");
}else{
    printf("\nímpar");
}

    return 0;
}
