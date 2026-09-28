#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    

        for(int i = 1; i <= 10; i++){
            for(int r = 1; r <= 10; r++){
                printf("%d * %d = %d\n", i, r, i * r);
            }
            printf("\n");
        }

  
        return 0;

    }
