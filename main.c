#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int numerosInteiros[6] = {1, 5, 10, 15, 20, 25};
float numerosFloats[5] = {10.5, 20.8, 30.2, 40.9, 50.1};
char celulares[5][50] = {"motorola", "samsung", "apple", "xiaome", "huawei"};


printf("\nNúmeros inteiros:\n ");

    printf("%d\n", numerosInteiros[0]);
    printf("%d\n", numerosInteiros[1]);
    printf("%d\n", numerosInteiros[2]);
    printf("%d\n", numerosInteiros[3]);
    printf("%d\n", numerosInteiros[4]);
    printf("%d\n", numerosInteiros[5]);

printf("\nNúmeros decimais:\n ");

    printf("%f\n", numerosFloats[0]);
    printf("%f\n", numerosFloats[1]);
    printf("%f\n", numerosFloats[2]);
    printf("%f\n", numerosFloats[3]);
    printf("%f\n", numerosFloats[4]);

printf("\nCelulares:\n\n ");

    printf("%s\n", celulares[0]);
    printf("%s\n", celulares[1]);
    printf("%s\n", celulares[2]);
    printf("%s\n", celulares[3]);
    printf("%s\n", celulares[4]);

    

return 0;


}
