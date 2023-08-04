#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));

    int tentativas=1, numeroAleatorio, numEscolhido;
    printf("Seja bem vindo ao nosso jogo de advinhacao!!");
    printf("\n");

    numeroAleatorio = 1 + rand() % 100;

    while (1){
        printf("Digite um numero entre 1 e 100: ");
        scanf("%i", &numEscolhido);
        
        if (numEscolhido >= 1 && numEscolhido <= 100){
        
            if (numEscolhido != numeroAleatorio && numEscolhido > numeroAleatorio){
                printf("Numero muito alto!\n");

                tentativas += 1; 
                
            }
        
            else if (numEscolhido != numeroAleatorio && numEscolhido < numeroAleatorio){
                printf("Numero muito baixo!\n");

                tentativas += 1;
            }

        
            else{
                printf("Você encontrou o valor!!\n");
                printf("Valor aleatorio %i\n", numeroAleatorio);
                printf("Valor escolhido %i\n", numEscolhido);
                printf("Voce tentou %i\n", tentativas);

                break;
            }

        }
        
        else{
            printf("Valor incorreto!\n");
            continue;
        }    
    }
}