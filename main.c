#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);


int idade;



printf("digite uma idade: ");
scanf("%d", &idade);

if(idade >= 50){
     printf("você é um sênior!");
}else if(idade >= 18){
    printf("Você é um maior de idade!");
}else if(idade >= 12){
    printf("Você é um adolescente!");
}else if(idade >= 9){
    printf("você é um pré-adolescente");
}else{
    printf("voçê é uma criança");
}


return 0;

}
