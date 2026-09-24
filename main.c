#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


void maxMin(int v[], int tamanho){
    int max = v[0], min =v[0];
    for(int i = 1; i< tamanho; i++){
        if(v[i] > max) max = v[i];
        if(v[i] < min) min = v[i];
    }
    printf("máximo: %d, mínimo: %d\n", max, min);

}


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int numeros[] = {42, 38, 25, 155, 56};

    maxMin(numeros, 5);

    return 0;
}
