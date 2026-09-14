#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);


int n;

    printf("digite um número: ");
    scanf("%d", &n);

//if(....){
//     code..
//}

if(n > 0){
    printf("positivo\n");
}else if(n < 0){
    printf("negativo\n");
}else{
    printf("igual 0");
}


return 0;

}

