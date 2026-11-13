#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char palavra[50];
    int tamanho;
    int palindromo = 1;

        printf("digite uma palavra: ");
        scanf("%49s", &palavra);

            tamanho = strlen(palavra);

                for(int i = 0; i < tamanho / 2; i++){
                    if(palavra[i] != palavra[tamanho - 1 - i]){
                        palindromo = 0;
                    }
                }
                if(palindromo == 1){
                    printf("A palavra é um palindromo\n");
                }else{
                    printf("a palavra não é um palindromo\n");
                }

        return 0;
    }