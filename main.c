#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

     int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
     };

        for(int i = 0; i < 3; i++){
            for(int r = 0; r < 3; r++){
                    printf("%d\n", a[i][r]);
                }
            }

            return 0;
    }