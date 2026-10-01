#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int cubo[2][3][4] = {    //4 sao as colunas //3 sao as linhas //2 são os conjuntos
        {

            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}

        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}

        }
};

    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 2; j++){
            for(int r = 0; r <= 3; r++){
                printf("%d\n", cubo[i][j][r]);
            }
        }
    }


   
       
        return 0;

    }
