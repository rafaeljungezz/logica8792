#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


        for(int i = 1; i <= 3; i++){
            for(int r = 1; r <= 3; r++){
                printf("for externo e for interno: %d %d\n", i, r);
            }
        }
                

  
        return 0;

    }
