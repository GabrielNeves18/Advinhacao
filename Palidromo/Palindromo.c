#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (){

    char palavra[100], palavra_inversa[100];
    int contador;

    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    int tamanho_string = strlen(palavra);

    palavra_inversa[0] = '\0';

    for (contador = tamanho_string - 1; contador >= 0; contador--){
       
       strncat(palavra_inversa, &palavra[contador], 1);

    }

    if (strcmp(palavra, palavra_inversa) == 0){

        printf("é um palindromo\n");

    } else{

        printf("Não é um palindromo\n");
    }

    


}