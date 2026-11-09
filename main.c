#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    float celciusParaFahrenheit(float c){
        return c * 9 / 5 + 32;
    }

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
        
    float celcius;
    float fahrenheit;

        printf("digite a temperatura em culcius: ");
        scanf("%f", &celcius);

        fahrenheit = celciusParaFahrenheit(celcius);

            printf("%.1f C = %.1f F\n", celcius, fahrenheit);
        

    
            return 0;
    }