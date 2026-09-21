#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

for(int i = 0; i < 10000; i++){
    printf("%d\n", i);
    i++;
}

printf("meu for funcionou!\n");



return 0;


}
