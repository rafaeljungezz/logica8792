#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    int maiorDeTres(int a, int b, int c){
        int maior = a;

            if(b > maior){
                maior = b;

            }if(c > maior){
                maior = c;
            }
            return maior;
    }
    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int aa, bb, cc;

    printf("digite 3 nuemeros: ");
    scanf("%d %d %d", &aa, &bb, &cc);

        printf("Maior: %d\n", maiorDeTres(aa, bb, cc));

            return 0;
    }