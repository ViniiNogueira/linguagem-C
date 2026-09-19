#include <stdio.h>
#define qt 10 // forma mais facil de definir a quantidade e nao aparece nenhum erro no codigo


int main() {

    // const int qt = 10; // constante do tipo inteiro
    // usar a const pode dar erro de compilacao em algumas versoes
    float num[qt]; // array -> 0, 1, 2; 
    float media = 0 ;

    for (int i = 0; i < qt ; i++) { 
        printf("Digite um numero na posicao %d: \n" , i);
        scanf("%f" , &num[i]);

        //media = media + num[i]; uma das formas de fazer a soma dos numeros
        media += num[i];
    }    

    media = media / qt;

    printf("\n A media: %.2f\n", media);

    return 0;
}