#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7 ,8, 9}
   };

    printf("elemento da matriz: %d\n");
    for(int i = 0; i <= 2; i++){
        for(int j = 0; j <= 2; j++){
            printf("%d\n", matriz[i][j]);
        }
    }
        
       
        return 0;

    }
