#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n = 1;
    int soma = 0;

        while(n < 100){
            n++;
            soma++;
            printf("%d + 1 = %d\n", soma, n);
        }
    
               return 0;
    }
