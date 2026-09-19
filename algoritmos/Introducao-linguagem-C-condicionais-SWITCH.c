#include <stdio.h>

int main()
{

    float n1;
    float n2;
    int opcao;

    printf("Digite o numero 1:");
    scanf("%f", &n1);

    printf("entre com a opcao desejada:"
           "\n 1 -> soma"
           "\n 2 -> subtração"
           "\n 3 -> multiplicação"
           "\n 4 -> divisão \n");

    scanf("%d", &opcao);

    printf("Digite o numero 2:");
    scanf("%f", &n2);

    switch (opcao)
    {
    case 1:
        // assim que coloca valores no print em C -> primeiro o texto e a formatacao e dps as variaveis
        printf("A soma de %.2f e %.2f é de = %.2f", n1, n2, (n1 + n2));
        break;
    case 2:
        printf("A subtracao de %.2f e %.2f é de = %.2f", n1, n2, (n1 - n2));
        break;
    case 3:
        printf("A multiplicacao de %.2f e %.2f é de = %.2f", n1, n2, (n1 * n2));
        break;
    case 4:
        if (n2 == 0)
        {
            printf("nenhum numero é divisivel por zero");
        }
        else
        {
            printf("A divisao de %.2f e %.2f é de = %.2f", n1, n2, (n1 / n2));
        }
        break;
    }

    fflush(stdin);
    return 0;
}