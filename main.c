#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int dias = 7;
    float temp[dias];
    float soma = 0, media;
    float maior, menor;
    int diaMaior = 1, diaMenor = 1;
    int acimaMedia = 0;

        for(int i = 0; i < dias; i++){
            printf("temperatura do dia %d:", i + 1);
            scanf("%f", &temp[i]);
            soma += temp[i];
        }

        media = soma / dias;

        menor = temp[0];

        menor = temp[0];

            for(int i = 1; i < dias; i++){
                if(temp[i] > maior){
                    maior = temp[i];
                    diaMaior = i + 1;
                }
                if(temp[i] < menor){
                    menor = temp[i];
                    diaMenor = i = 1;
                }
            }
            for(int i = 0; i < dias; i++){
                if(temp[i] > media){
                    acimaMedia++;
                }
            }

            printf("\n --- TEMPERATURA ---\n");

            for(int i = 0; i < dias; i++){
                printf("dia %d; %.1f\n", i + 1, temp[i]);
            }

            printf("\n media da semana: %.1f\n", media);
            printf("maior: %.1f (dia %d)\n", maior, diaMaior);
            printf("menor: %.1f (dia %d)\n", menor, diaMenor);
            printf("dias acima da media: %d\n", acimaMedia);


   
               return 0;
    }
