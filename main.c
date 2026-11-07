#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    int inverter(int n, int resultado){
        if(n == 0){
            return resultado;
        }
        return inverter(n / 10, resultado * 10 + n % 10);
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
        
        printf("invertido: %d\n", inverter(1234, 0));
       
    
       
            return 0;
    }