#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

        printf("quantos nomes deseja digitar? ");
        scanf("%d", &n);

    char nomes[n][50];

        for(int i = 0; i < n; i++){
            printf("digite o nome %d: ", i + 1);
            scanf("%s", nomes[i]);
        }
        for(int i = 0; i < n - 1; i++){
            for(int r = 0; r < n - 1; r++){
                if(strcmp(nomes[r], nomes[r + 1]) > 0){
                    char temp[50];
                    strcpy(temp, nomes[r]);
                    strcpy(nomes[r], nomes[r + 1]);
                    strcpy(nomes[r + 1], temp);
                }
            }
        }
        printf("nomes em ordem alfabética: \n");
        for(int i = 0; i < n; i++){
            printf("%s\n", nomes[i]);
        }

   
               return 0;
    }
