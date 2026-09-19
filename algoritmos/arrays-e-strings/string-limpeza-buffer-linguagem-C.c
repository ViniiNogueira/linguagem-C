#include <stdio.h>

int main() {

    char str[5];
    printf("digite umaa string:");
    
    // fflush(stdin); // windows
    // __fpurge(stdin); //linux

    // setbuf(stdin,NULL); //funciona nos 2 OS
    // scanf(" %s", &str); nao armazena espacos nem quebras de linhas
    // setbuf(stdin,NULL);

    // gets(str); //armazena tudo menos o enter -> enter funciona como o \0
    fgets(str, 50, stdin); // exemplo: palavra \n  \0 -> indica o final da str

    printf("A string digitada foi: %s \n" , str);
    return 0;
}