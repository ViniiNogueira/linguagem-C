#include <stdio.h>


//array -> sequencia de variaveis (tamanho definido)
//string em C -> sequencia de CHAR (tamanho definido)
// vetor sequencia de variaveis (tamanho indefinido)
int main() {

    // diferentes formas de inicializar uma string

    // forma - 1
    char string[10];
    string[0] = 'O'; // ...
    string[1] = 'i';
    string[2] = '!';
    string[3] = '\0';

    // forma - 2
    // nao precisa definir um tamanho | ao inicializar ja com os valores o compilador ja sabe o tamanho
    char nome[] = {'V', 'I', 'N', 'I', 'C', 'I', 'U', 'S' };

    //forma - 3
    char str[] = "vinicius";

    char stringNova[50];
    char stringNova2[50];
    printf("digite uma string: \n"); 
    // para string nao é obrigatorio usar o &
    // scanf nao consegue armazenar espacos " ", pois ele usa " " para separa as entradas por espaco " "
    scanf("%s %s" , &stringNova , stringNova2); // <- a quantidade de %s define quantas palavras vao ser guardadas "%s%s%s%s%s"
    printf("as strings digitadas foram \n%s \n%s \n" , stringNova , stringNova2);



    //Limpeza do buffer de memoria 

    return 0;
}