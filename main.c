#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    int fibonacci(int n){
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
     
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
        
    int i;

        for(i = 0; i < 10; i++){
            printf("%d", fibonacci(i));
        }
       
    
       
            return 0;
    }