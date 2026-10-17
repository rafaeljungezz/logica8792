#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        printf("digite o tamanho do vetor: ");
        scanf("%d", &n);

    int v[n];

        for(int i = 0; i < n; i++){
            printf("digite o valor %d: ", i + 1);
            scanf("%d", &v[i]);

        }
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1;j++){
                if(v[j] > v[j + 1]){
                    int temp = v[j];
                    v[j] = v[j + 1];
                    v[j + 1] = temp;
                }
            }
        }
        printf("vetor ordenado: \n");

        for(int i = 0; i < n; i++){
            printf("%d\n", v[i]);
        }

        

               return 0;
    }
