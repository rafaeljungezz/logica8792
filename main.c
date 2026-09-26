#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;
    float nota, soma = 0;

        printf("quantos alunos tem a turma: ");
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            printf("digite a nota do aluno %d: \n", i + 1);
            scanf("%f", &nota);
            soma += nota;
        }
        printf("média da turma: %.2f\n", soma / n);

    return 0;

   }
