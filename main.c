#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float a, b, c;

printf("Digite os três lados do triângulo: ");
scanf("%f %f %f", &a, &b, &c);

if( a == b && b == c){
    printf("Equilátero!\n");
}else if(a == b || a == c || b == c){
    printf("Isóceles!\n");
}else{
    printf("Escaleno!\n");
}




return 0;


}
