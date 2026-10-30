#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define PI 3.14159

    float area_circulo( float raio){
        return PI * raio * raio;
    }



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float r;

        printf("raio: ");
        scanf("%f", &r);
        printf("area: %.2f\n", area_circulo(r));

            return 0;
    }