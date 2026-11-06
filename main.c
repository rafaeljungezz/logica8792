#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    int somar(int n){
        if( n == 0){ // 
            return 0;
        }
        return n + somar(n - 1); // retrun 5 + somar(5 - 1) -- N se torna $
        //return 5 + somar(4);
        //return 4 + somar(3) O N È O PARAMETRO DO SOMAR
    }
    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int resultado = somar(5);

        printf("resultado: %d\n", resultado);
    
       
            return 0;
    }