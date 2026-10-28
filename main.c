#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void somar(int a, int b){
    printf("soma: %d\n", a + b);
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   somar(70, 14);

            return 0;
    }