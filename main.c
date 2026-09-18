#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int mes;

printf("digite um valor de 1 a 12: ");
scanf("%d", &mes);

switch(mes){

    case 12:
    case 1:
    case 2:
        printf("verao");
        break;

    case 3:
    case 4:
    case 5:
        printf("outono");
        break;

    case 6:
    case 7:
    case 8:
        printf("inverno");
        break;

    case 9:
    case 10:
    case 11:
        printf("primavera");

    default:
        printf("valor inválido");

}


return 0;


}
