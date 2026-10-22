#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        do{

             printf("Digite um numero ( não negativo ):");
            scanf("%d", &n);

        }while(n < 0);
                
        printf("você digitou: %d\n", n);
        


    
               return 0;
    }
