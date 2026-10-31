#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

     int a[2][2], b[2][2], soma[2][2];

        printf("Matriz A:\n");

            for(int i = 0; i < 2; i++){
                for(int r = 0; r < 2; r++){
                    printf("A[%d][%d]: ", i,r);
                    scanf("%d", &a[i][r]);
                }
            }

             printf("Matriz B:\n");

             for(int i = 0; i < 2; i++){
                for(int r = 0; r < 2; r++){
                    printf("B[%d][%d]: ", i,r);
                    scanf("%d", &b[i][r]);
                }
            }
            for(int i = 0; i < 2; i++){
                for(int r = 0; r < 2; r++){
                    soma[i][r] = a[i][r] + b[i][r];
                }
            }

            printf("\nA + B:\n");

                for(int i = 0; i < 2; i++){
                    for(int r = 0; r < 2; r++){
                    printf("%d",  soma[i][r]);
                    }
                    printf("\n");
                }

            return 0;
    }