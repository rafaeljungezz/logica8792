#include<stdio.h>
#include<Windows.h>

    
int main(){

SetConsoleCP(65001);
SetConsoleOutputCP(65001);

char nomes[3][30] ={
    "Rafael",
    "Matheus",
    "Otávio"
};

for(int i = 0; i < 3; i++){
    printf("%s\n", nomes[i]);
}

return 0;


}
