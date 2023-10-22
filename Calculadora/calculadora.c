#include <stdio.h>

int main(){

    int qntNotas, contador;
    float somaMedia = 0, media = 0, nota;

    printf("Digite a quantidade de notas à ser digitadas: ");
    scanf("%i", &qntNotas);

    for(contador=1; contador <= qntNotas; contador++){
        printf("Digite a nota %i: ", contador);
        scanf("%f", &nota);
        

        somaMedia = somaMedia + nota;

        
    }

    media = somaMedia / qntNotas;

    printf("Sua média é %.2f\n", media);
}