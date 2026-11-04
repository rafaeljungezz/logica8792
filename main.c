#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char texto[100];

    int tamanho = 0;

        printf("digite uma frase: ");
        fgets(texto, 100, stdin); //"std" é da biblioteca, "in" é de entrada

            texto[strcspn(texto, "\n")] = '\0';

                while(texto[tamanho] != '\0'){
                    tamanho++;
                }
                printf("quantidade de caracteres: %d\n", tamanho);




            return 0;
    }