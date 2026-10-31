#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

     int m[3][3];
     int maior, linhaMaior = 0, colunaMaior = 0;

        for(int i = 0; i < 3; i++){
            for(int r = 0; r < 3; r++){
                printf("elemento [%d][%d]: ", i + 1, r + 1);
                scanf("%d", &m[i][r]);
            }
        }
        
        for(int i = 0; i < 3; i++){
            for(int r = 0; r < 3; r++){
                if(m[i][r] > maior){
                    maior = m[i][r];
                    linhaMaior = i;
                    colunaMaior = r;
                    }
            }
        }
        printf("maior elemento: %d\n", maior);
        printf("posiçao: linha %d, coluna %d\n", linhaMaior, colunaMaior);

            return 0;
    }