#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int a, b;

printf("digite dois números: ");
scanf("%d %d", &a, &b);

if( a == b){
    printf("os números são iguais!\n");
}else{
    printf("os números sãó diferentes!\n");
}


return 0;


}
