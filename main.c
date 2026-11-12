#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

    

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

        int total = 0;

            for(int ano = 2000; ano <=2030; ano++){
                if(ano % 4 == 0){
                    printf("%d é bissexto\n", ano);
                }
            }

       

        return 0;
    }