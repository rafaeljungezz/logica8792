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

    float v[n], soma = 0, media, somaDesvios = 0;

        for(int i = 0; i < n; i++){
            printf("digite o valor %d:", i + 1);
            scanf("%f", &v[i]);
            soma += v[i];
        }
        media = soma / n;

        for(int i = 0; i < n; i++){
            somaDesvios += (v[i] - media) * (v[i] - media);
        }
    
    float desvioPadrao = sqrt(somaDesvios / n);// desvio padrao é uma raiz quadrada da soma dos desvios 
    

        printf("Média: %.2f\n", media);
        printf("desvio padrao: %.2f\n", desvioPadrao);

               return 0;
    }
