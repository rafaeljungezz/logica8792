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

    for(int i = 1; i <= 10; i++){

        printf(" %d * %d = %d\n", n, i, n * i);

    }
    
    


    return 0;

   }
