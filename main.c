#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>

 struct pessoa{
        char nome[50];
        int idade;
        float altura;
    };
   

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   struct pessoa r1 = {"rafael", 15, 1.88};
   struct pessoa r2 = {"pedro", 14, 1.80};
   struct pessoa r3 = {"julia", 16, 1.65};

    printf("Nome: %s | idade: %d | altura: %.2f\n", r1.nome, r1.idade, r1.altura);
    printf("Nome: %s | idade: %d | altura: %.2f\n", r2.nome, r2.idade, r2.altura);
    printf("Nome: %s | idade: %d | altura: %.2f\n", r3.nome, r3.idade, r3.altura);
   
   
               return 0;
    }
