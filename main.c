#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    void contar(int n){
        if(n == 0){
            return; // retorna a propria funçao
            }
            contar(n - 1); // se chamar a funçao dentro da funçao DAI È RECURSAO
            printf("%d\n", n);
        }
    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    contar(5);
    
       
            return 0;
    }