#include<stdio.h>
#include<Windows.h>

int main(){


SetConsoleCP(65001);
SetConsoleOutputCP(65001);

int opcao;

printf("--- SISTEMA DE PEDÁGIO ---\n");
printf("1 - Moto\n");
printf("2 - Carro de passeio\n");
printf("3 - caminhão\n ");
printf("4 - ônibus");
scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("Categoria: Moto | Tarifa: R$5,00\n");
            break;
        
        case 2:
            printf("categoria: Carro de passeio | Tarifa; R$10,00\n");
            break;

        case 3:
            printf("categoria: caminhão | tarifa: R$25,00\n");
            break;

        case 4:
            printf("categoria: ônibus | tarifa: R$30,00");
            break;

        default:
            printf(" Erro: categoria nâo encontrada no sistema!\n");
            break;

    }


return 0;


}
