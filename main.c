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

    int n;

        printf("quantas pessoas deseja cadastrar? ");
        scanf("%d", &n);

        getchar(); // consome o '\n' deixado pelo scanf

    struct pessoa r1[n];

        for(int i = 0; i < n; i++){
            printf("\nPessoa %d\n, ", i + 1);
            printf("Nome Completo: ");
            fgets(r1[i].nome, sizeof(r1[i].nome), stdin);

            printf("idade: ");
            scanf("%d", &r1[i].idade);

            printf("altura: ");
            scanf("%f", &r1[i].altura);

            printf("peso: ");
            scanf("%f", &r1[i].peso);
            
            getchar();
        }
        printf("\n --- lista de pessoas ---\n");

            for(int i = 0; i < n; i++){
                printf("\n nome: %s | idade: %d | altura: %.2f | peso: %.2f\n", r1[i].nome, r1[i].idade, r1[i].altura, r1[i].peso);
            }

               return 0;
    }
