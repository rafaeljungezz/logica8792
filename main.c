#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int alunos = 5;
    float notas [alunos];
    float soma = 0;

        for(int i = 0; i < alunos; i++){
            printf("nota do aluno %d: ", i + 1);
            scanf("%f", &notas[i]);
            soma += notas[i];
        }
            printf("\n --- NOTAS ---\n");

        for(int i = 0; i < alunos; i++){
            printf("aluno %d: %.1f\n", i + 1, notas[i]);
        }
        printf("\nmedia da turma: %.1f\n", soma / alunos);
   
               return 0;
    }