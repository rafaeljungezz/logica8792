#include<stdio.h>
#include<Windows.h>

int somar(int a, int b){
    return a + b;
}

int subtrair(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    if(b <=0){
        printf("Ele precisa ser maior que 0!");
    }else{
        return a / b;
    }
}
    

int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int resultado = somar(45, 45);
printf("o resultado da soma é: %d\n", resultado);

int resultadosubtraçao = subtrair(30, 12);
printf("o resultado da subtração é: %d\n", resultadosubtraçao);

int resultadomultiplicar= multiplicar(2, 20);
printf("o resultado da multiplicação é: %d\n", resultadomultiplicar);

int resultadodivisao = dividir(3, 0);
printf("o resultado da divisão é: %d\n", resultadodivisao);

return 0;


}
