#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    int n;

        printf(" digite um valor: ");
        scanf("%d", &n);

        if(n <= 0){
            printf("digite um numero valido!\n");
        }else{
   
        for(int i = 1; i <= 10; i++){
            printf("%d x %d = %d\n", i, n, i * n);
        }

        }
    

               return 0;
    }
