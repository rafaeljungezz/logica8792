#include<stdio.h>
#include<Windows.h>
#include<math.h>
    
void fibonacci(int rafael){
    int a = 0, b = 1, c;
    printf("sequência de fibonacci (%d rafael): \n", rafael);
    for(int i = 1; i <= rafael; i++){
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
    }
   
    
}




int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

fibonacci(10);


}
