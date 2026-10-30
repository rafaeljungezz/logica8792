#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int maior(int a, int b){
    if(a > b) return a;
    return b;
}

int maior1(int a, int b, int c){
    return maior(maior(a, b), c);
}


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int x, y, z;

        printf("tres numeros: ");
        scanf("%d %d %d", &x, &y, &z);
        printf("maior: %d\n", maior1(x, y, z));

            return 0;
    }