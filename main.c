#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int idade;
int ehEstudante;

printf("Qual sua idade?");
scanf("%d", &idade);
printf("\nVocê é estudante (0 - não | 1 - sim);");
scanf("%d", &ehEstudante);

if((idade >= 60) && (ehEstudante == 1)){
    printf("parabéns, você tem direito à desconto!");
}else{
    printf("infelizmente você nâo terá desconto!");
}

return 0;


}
