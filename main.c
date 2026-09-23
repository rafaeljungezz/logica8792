#include<stdio.h>
#include<Windows.h>
#include<math.h>
    
void tabuada(int n){
    printf("tabuada do %\n", n);
    for(int i = 1; i <= 10; i++){
        printf(" %d * %d = %d\n", n, i, n * i);
    }
}




int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

tabuada(12);


}
