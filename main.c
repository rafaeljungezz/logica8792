#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    void contar(int n){
        if(n == 0){
            return;
        }
        printf("%d\n", n);
        contar(n - 1);
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    contar(5);
    
            return 0;
    }