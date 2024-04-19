// Escreva um algoritmo em C para resolver a f�rmula de Bhaskara

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float a, b, c;
    float resultado, resultado2;

    printf("Para ter a resolu��o da f�rmula de Bhaskara, fa�a o que pede:\n");
    printf("Digite o valor de 'a'\n");
    scanf("%f", &a);
    while (getchar() != '\n' && getchar() != EOF);
    printf("Digite o valor de 'b'\n");
    scanf("%f", &b);
    while (getchar() != '\n' && getchar() != EOF);
    printf("Digite o valor de 'c'\n");
    scanf("%f", &c);
    while (getchar() != '\n' && getchar() != EOF);

    float delta = (b * b) - 4 * a * c;
    if (delta < 0) {
        printf("\nA equa��o n�o possui resultados reais.\n");
        return 0;
    } else if (delta == 0) {
        resultado = (b * -1) / 2 * a;

        printf("\nA equa��o possui um resultado distinto real:\n");
        printf("x =~ %.2f\n", resultado);
    } else {
        resultado = ((b * -1) + sqrt(delta)) / 2 * a;
        resultado2 = ((b * -1) - sqrt(delta)) / 2 * a;
        
        printf("\nA equa��o possui dois resultados distintos reais:\n");
        printf("x1 (+) =~ %.2f\n", resultado);
        printf("x2 (-) =~ %.2f\n", resultado2);
    }

    return 0;
}