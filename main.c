#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);


int idade;

printf("digite uma idade: ");
scanf("%d", &idade);

if(idade >= 18){
    printf("você é maior de idade!");
}else{
    printf("você é menor de idade!");
}


return 0;

}
