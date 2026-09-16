#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int n1, n2, n3;
float media;
float freq;

printf("digite a nota n1: ");
scanf("%d", &n1);

printf("\nDigite a nota n2: ");
scanf("%d", &n2);

printf("\nDigite a nota n3: ");
scanf("%d", &n3);

media = (n1 + n2 + n3) / 3;

printf("digite a frequência ( em números apenas): ");
scanf("%f", &freq);

if(media >= 7 && freq >= 75){
    printf("\n Aprovado com sucesso!");
}else{
    printf("\nReprovado!");
}


return 0;


}
