/*
    Escreva um programa que receba um n�mero inteiro. Enquanto este n�mero for menor que
    1000, o programa n�o poder� ser encerrado, devendo solicitar um novo n�mero.
*/

#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Insira um numero inteiro");
        scanf("%d", &numero);
    } while(numero < 1000);

    return 0;    
}