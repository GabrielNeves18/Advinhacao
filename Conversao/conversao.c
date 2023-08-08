#include <stdio.h>
#include <stdlib.h>


char menu(){
    
    int escolha;

    printf("\n\nOla, seja bem vindo ao nosso conversor de unidade!!\n\n");
    printf("1) Converter entre Celsius e Fahrenheit\n2) Converter entre quilômetros e milhas\n3) Converter entre quilogramas e libras\n4) Converter entre Fahrenheit e Celsius\n5) Converter entre milhas e quilometros\n6) Converter entre libras e quilogramas\n0) Sair\n>>> ");
    scanf("%i", &escolha);
    return escolha;

}
int main (){

    int valor = menu();
    switch (valor)
    {
    case 1:
        float fahrenheit, celsius, tempFixo=1.8;
        printf("Digite o valor de celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (tempFixo * celsius) + 32;
        printf("O valor convertido eh %.2f\n", fahrenheit);
    

        menu();
        break;
    
    case 2:
        float quilometros, milhas, milFixo=1.609;
        printf("Digite o valor de quilometros: ");
        scanf("%f", &quilometros);

        milhas = quilometros / milFixo;
        printf("O valor convertido eh %.2f", milhas);

        menu();
        break;
    case 3:

        float kilos, libras, liFixos=2.205;
        printf("Digite o valor de quilos: ");
        scanf("%f", &kilos);

        libras = kilos * liFixos;
        printf("O valor convertido eh %.2f", libras);

        menu();
        break;
    case 4:
        float fahrenheita, fahFixo=32, celsiusa, tempaFixo=1.8;
        printf("Digite o valor de fahrenheit: ");
        scanf("%f", &fahrenheita);


        celsiusa = ((fahrenheita - fahFixo) / tempaFixo);

        printf("O valor convertido eh %.2f\n", celsiusa);

        menu();
        break;
    case 5:
        float quilometrosi, milhasi, miliFixo=1.609;
        printf("Digite o valor de milhas: ");
        scanf("%f", &milhasi);

        quilometrosi = milhasi * miliFixo;
        printf("O valor convertido eh %.2f", quilometrosi);

        menu();
        break;
    case 6:
        float kilosi, librasi, liiFixos=2.205;
        printf("Digite o valor de quilos: ");
        scanf("%f", &kilosi);

       kilosi = librasi / liFixos;
        printf("O valor convertido eh %.2f", libras);

        menu();
        break;
        return 0;
    case 0:
        printf("OBRIGADO POR PARTICIPAR\n\n");
        break;
    default:
        printf("Valor invalido!!\n");
        menu();
    }

}
