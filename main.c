#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    void tabuada(int n, int contador){
        if(contador > 10){
            return;
        }
        printf("%d x %d = %d\n", n, contador, n * contador );

        tabuada(n, contador + 1);
    }
    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
        
        printf("digite um numero: ");
        scanf("%d", n);

            tabuada(8,1); 
    
       
            return 0;
    }