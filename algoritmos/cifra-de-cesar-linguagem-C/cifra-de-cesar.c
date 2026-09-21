#include <stdio.h>
#include <string.h> // para strings funcionar

int main() {
    // ** cifra de cesar **
    // array do beto
    // percorre ele
    // cria o contador (comeca em 0)
    // faz a posica I + contador
    //  I tem que ser igual a letra da palavra
/*
    banana
    b = 1   -> index + contador
    a = 0   -> index + contador
    n =     -> index + contador
    a = 0   -> index + contador
    n =     -> index + contador
    a = 0   -> index + contador
*/

    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz"; // alfabeto em minusculo
    int tamanhoAlfabeto = strlen(alfabeto);

    char palavra[50]; // string com tamanho 50
    int contador; // contador pra ver quantas letras vai pular

    printf("Escreva uma palavra para ser criptografada:");
    scanf("%s" , palavra);

    printf("Digite o numero de vezes que vai pular:");
    scanf("%d" , &contador );
        
    int tamanho = strlen(palavra); // pega o tamanho da string 
    char resultado[50]; // pega a palavra e +1 pra dar o espaco correto

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanhoAlfabeto ; j++) {
            if (palavra[i] == alfabeto[j]) {
                int novaPosicao = (j + contador) % 26; 
                resultado[i] = alfabeto[novaPosicao];
                break;
            }
        }
    }

    // Finaliza a string para o printf n imprimir bugado
    resultado[tamanho] = '\0';

    printf("Resultado: %s \n",resultado);

    return 0;
}