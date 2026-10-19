#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        printf("digite um numero:\n");
        scanf("%d", &n);

        if(n <= 0){
            printf("digite um numero valido!");
        }

        while(n >= 0){
            printf("%d\n", n);
            n--;
        }
        
               return 0;
    }
