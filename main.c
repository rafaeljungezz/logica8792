#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char frutas[3][20] = {"\nmaçã", "\nbanana", "\nlaranja"};

printf("%s", frutas[0]);
printf("%s", frutas[1]);
printf("%s", frutas[2]);



return 0;


}
