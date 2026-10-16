#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 struct pessoa{
        char nome[50];
        int idade;
        float altura;
        float peso;
    };
   

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    printf("--- Bem-vindo a academia PWR ---");
    printf("\n");

    struct pessoa r1;

    printf("\nqual seu nome?\n ");
    scanf("%s", &r1.nome );

    printf("\nqual é a sua idade?\n");
    scanf("%d", &r1.idade);

    printf("\nqual a sua altura?\n ");
    scanf("%f", &r1.altura);

    printf("\nqual seu peso?\n ");
    scanf("%f", &r1.peso);

    printf("--- Seus dados: ---\n");
    printf("nome: %s | idade: %d | altura: %.2f | peso: %.2f\n", r1.nome, r1.idade, r1.altura, r1.peso);
    
               return 0;
    }
