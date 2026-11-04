#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void mostrarVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
    }
    printf("\n");
}
void inverterVetor(int v[], int n){
    for(int i = 0; i < n / 2; i++){
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }
}

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numeros[5] = { 1, 2, 3, 4, 5};

        printf("Antes: ");

            mostrarVetor(numeros, 5);

            inverterVetor(numeros, 5);

        printf("depois: ");

            mostrarVetor(numeros, 5);

            


            return 0;
    }