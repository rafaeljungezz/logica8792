#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int diaDaSemana;

printf("Digite um número de ( 1 a 7): ");
scanf("%d", &diaDaSemana);

if(diaDaSemana == 1){
    printf("Domingo!");
}else if(diaDaSemana == 2){
    printf("Segunda-feira");
}else if(diaDaSemana == 3){
    printf("Terça-feira");
}else if(diaDaSemana == 4){
    printf("Quarta-feira");
}else if(diaDaSemana == 5){
    printf("Quinta-feira");
}else if(diaDaSemana == 6){
    printf("Sexta-feira");
}else if( diaDaSemana == 7){
    printf("Sábado");
}else{
    printf("valor inválido");
}

return 0;


}
