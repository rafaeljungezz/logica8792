#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   
       int n, contador = 0;

        printf("digite o limite N: ");
        scanf("%d", &n);

        for(int r = 2; r <= n; r++){
            int primo = 1;
            for(int i = 2; i < r; i++){
                if(r % i == 0){
                    primo = 0;
                    break;
                }
            }
            if(primo){
                contador++;
            }
        }
        printf("quantidades de primos entre 1 e %d: %d\n", n, contador);

        return 0;

    }
