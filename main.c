#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int dobro(int n){
    return n * 2;
}



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int valor = 7;

        printf("dobro = %d\n", dobro(valor));

            return 0;
    }