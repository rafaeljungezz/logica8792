#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>


int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

   int i = 1;

   while(i <= 50){
    if(i % 2 == 0){
        printf("%d\n", i);
    }
    i++;
   

   ---------------------------------------------------------------

    for(int i = 0; i <= 50; i +=2){
        printf("%dn\n", i);

    }

   }


    return 0;
    
   }
