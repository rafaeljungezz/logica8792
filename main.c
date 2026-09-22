#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

for(int i = 100; i >=0; i = i -10){
    printf("%d\n", i);
}



return 0;


}
