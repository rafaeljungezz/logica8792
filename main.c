#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

float altura, peso, imc;

printf("digite o peso (kg): ");
scanf("%f", &peso);

printf("digite a altura (m): ");
scanf("%f", &altura);

imc = peso / (altura * altura);

if(imc < 18.5){
    printf("classificaçao: abaixo do peso\n");
}else if(imc < 25){
    printf("classificaçao: peso normal\n");
}else if(imc < 30){
    printf("classificaçao: acima do peso\n");
}else{
    printf("classificaçao: obesidade\n");
}



return 0;


}
