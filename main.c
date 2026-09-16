#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int a, b, c;

printf("digite três números: ");
scanf("%d %d %d", &a, &b, &c);

if( a != b) && (b != c){
    printf("os números são diferentes!\n");
}else if(b != c){
    printf("os números sãó igauis!\n");
}else{
    printf("todos os números são iguais!");
}


return 0;


}
