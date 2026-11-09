#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    int soma(int n){
       int total = 0;

        for( int i = 1; i <= n; i++){
           total += i;
        }
        return total;
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
   
    printf("soma de 1 a 5: %d\n", soma(5));  

    
            return 0;
    }