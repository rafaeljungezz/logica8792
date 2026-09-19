#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int ano;
printf("digite o ano: ");
scanf("%d", &ano);

if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
    printf("ano: %d\n", ano);
    printf("ano bissexto\n");
}else{
    printf("ano: %d", ano);
    printf(" ano NÃO bissexto");
}

// != significa "diferente"
//&& significa "e"
// "||" significa "ou"

return 0;


}
