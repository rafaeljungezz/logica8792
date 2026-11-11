#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    for(int i = 0; i <= 10; i++){
        if(i % 2== 0){
            printf("%d\n", i);
        }
    }
    printf("\nterminou!");
    
        return 0;
    }