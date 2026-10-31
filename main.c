#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

     int m[2][3] = {
        {1,2,3},
        {4,5,6}
     };

        int t[3][2];

            for(int i = 0; i < 2; i++){
                for(int r = 0; r < 3; r++){
                     t[r][i] = m[i][r];
                }
            }

            printf("original ( 2 x 3)\n");

                for(int i = 0; i < 2; i++){
                    for(int r = 0; r < 3; r++){
                        printf("%d", m[i][r]);
                    }
                    printf("\n");
                }

            printf("\ntransposta ( 3 x 2): \n");

                for(int i = 0; i < 3; i++){
                    for(int r = 0; r < 2; r++){
                        printf("%d", t[i][r]);
                    }
                    printf("\n");
                }

            return 0;
    }