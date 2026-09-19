#include <stdio.h>
#include <stdlib.h>

int main() {
    

    int meninos, meninas;

    printf("Digite o numero de meninas: \n");
    scanf("%d" , &meninas);

    printf("Digite o numero de meninos: \n");
    scanf("%d" , &meninos);

    int soma = meninas + meninos;

    printf(" O numero de alunos no total é de: %d", soma);

    if (soma > 40) {
        printf("\n Existe mais alunos do que deveria ter na sala \n");
    } else {
        printf("\n ainda ha espaço na sala para mais alunos");
    }
    
    
    return 0;
}   