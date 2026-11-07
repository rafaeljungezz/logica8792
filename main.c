#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    void contar(int n){
        for(int i = 1; i <= n; i++){
            printf("%d\n", i);
        }
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
        
    contar(5);
    
            return 0;
    }