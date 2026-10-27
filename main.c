#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void matriz(int m[2][2]){
    for(int i = 0; i < 2;i++){
            for(int r = 0; r < 2; r++){
                printf("%d\n", m[i][r]);
            }
            printf("\n");
        }
    }

    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int m[2][2] = {
        {1, 2},
        {3, 4}
    };

        matriz(m);
        
               return 0;
    }