/*
    Escreva um programa que receba 6 notas (em um vetor) e calcule a m�dia delas.
*/

#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    float notas[6];
    float media = 0;

    for (int i = 0; i < 6; i++) {
        printf("Informe uma nota: ");
        scanf("%f", &notas[i]);

        media += notas[i];
    }

    media = media/6;

    printf("A m�dia �: %.2f", media);

    return 0;
}