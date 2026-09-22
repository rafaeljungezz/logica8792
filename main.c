#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int idades[3] = {15, 45, 67};

printf("%s %d %s", "Rafael tem, ", idades[0], "anos!\n");
printf("%s %d %s", "Flavio tem, ", idades[2], "anos!\n");
printf("%s %d %s", "jose tem, ", idades[1], "anos!\n");

return 0;


}
