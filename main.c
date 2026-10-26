#include<stdio.h>
#include<Windows.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    const int MAX_TENTATIVAS = 7;
    int tentativas[MAX_TENTATIVAS];
    int secreto, palpite; //secreto é o numero aleatorio e palpite são os nuemros que digitamos
    int usadas = 0, acertou = 0; // usadas = numero de tentativas, e acertou

        srand(time(NULL));

            secreto = rand() % 100 + 1; // adiciona a aleatoriedade de um numero entre 1 e 100

                printf("adivinhe o numero entre 1 e 100\n");
                printf("você tem %d tentativas!\n", MAX_TENTATIVAS); // mostra as tentativas ( 7 )

        do{
            printf("\nTentativa %d: ", usadas + 1); // mostra a mensagem "tentativa (numero):", fazendo a variavel usadas aumenatr em 1 a cada ciclo
            scanf("%d", &palpite); //armazena o nuemro digitado em palpite

                if(palpite < 1 || palpite > 100){
                    printf("digite um numero ebtre 1 e 100!\n"); // mostra o numero digitado ( PALPITE ), e diz se ele é MAIOR ou MENOR que secreto
                }else{
                    tentativas[usadas] = palpite; // SE numero de tentativas do usuario = numero digitado
                    usadas++; // a variavel USADAS intera 
                    
                        if(palpite == secreto){ // se o numero digitado pelo usuario for o secreto
                            acertou = 1; // acertou se torna verdadero ( acertou o secreto )
                        }else if(palpite < secreto){
                            printf("o numero secreto é MAIOR!\n"); // se palipte for maior que secreto sera avisado
                        }else{
                            printf("o numero secreto é MENOR!\n"); // mesma coisa do de cima
                        }
                }
        }while(!acertou && usadas < MAX_TENTATIVAS); // enquanto o usuario não acertar o resultado, e usadas for menor quw tentativas maximas, O JOGO ACABA
            printf("\n --- FIM DO JOGO ---\n");

            if(acertou){ //se acertar:
                printf("parabens!voce acertou em %d tentativas!\n", usadas);
            }else{// se não acertar
                printf("suas tentativas acabaram, o numero era %d.\n", secreto);
            }

                printf("historico de palpites:\n"); // mostra o historico de tentativas

                    for(int i = 0; i < usadas; i++){ 
                        printf("(%d) %d\n", i + 1, tentativas[i]);
                    }

               return 0;
    }