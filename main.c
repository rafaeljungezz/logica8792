#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char nomes[6][50] = {"\nRafael", "\nOtavio", "\nMatheus", "\nErick", "\nFlavio", "\njose"};

printf("%s", nomes[0]);
printf("%s", nomes[1]);
printf("%s", nomes[2]);
printf("%s", nomes[3]);
printf("%s", nomes[4]);
printf("%s", nomes[5]);

return 0;


}
