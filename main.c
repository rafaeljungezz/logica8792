#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    float lerPositivo(char mensagem[]){
        float valor;
            do{
                printf("%s", mensagem);
                scanf("%f", &valor);

                    if(valor <= 0){
                        printf("valor inválido! digite um numero maior que 0. \n");
                    }
            }while(valor <= 0);
            return valor;
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float idade = lerPositivo("digite a idade: ");
    float peso = lerPositivo("digite o peso (kg): ");
    float altura = lerPositivo("digite a altura (m): ");

        printf("\nIdade: %.0f anos\n", idade);
        printf("IMC: %f\n", peso / (altura * altura));



            return 0;
    }