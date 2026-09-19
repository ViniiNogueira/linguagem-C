#include <stdio.h>
#include <stdlib.h>



void media(float n1, float n2) {

    float resultado = (n1 + n2) /2;

    printf("A media e: %f " , resultado);
}

int main() {

    float n1;
    float n2; 


    printf("Entre com a 1 nota \n");
    scanf("%f" , &n1);
    printf("Entre com a 2 nota \n");
    scanf("%f" , &n2);

    media(n1 , n2);

    return 0;
}