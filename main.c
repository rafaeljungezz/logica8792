#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int opção;

printf("--- SISTEMA DE PEDÁGIO ---\n");
printf("1 - Moto\n");
printf("2- Carro de passeio\n");
scanf("%d", e &opção);

switch(opção);
{
    case 1:
        printf("Categoria: Moto | Tarifa: R$5,00\n")
        break;
    
    case 2:
        printf("categoria: Carro de passeio | Tarifa; R$10,00\n");
        break;

    default:
        printf(" Erro: categoria nâo encontrada no sistema!\n");
        break;

}




return 0;


}
