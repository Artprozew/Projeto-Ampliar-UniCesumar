/*
    Escreva um algoritmo que leia duas notas de matem�tica de um aluno. 
    Ent�o, escreva na tela a m�dia como sa�da.
*/

//standard IO (input/output) . header
#include <stdio.h>

int main() {

    //Declara��o de vari�veis
    float nota1, nota2;
    float media;

    //Entrada de dados
    printf("Escreva a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Escreva a segunda nota: \n");
    scanf("%f", &nota2);

    //Processamento
    media = (nota1 + nota2) / 2;

    //Sa�da de dados
    printf("A media eh %.2f", media);

    return 0;
}