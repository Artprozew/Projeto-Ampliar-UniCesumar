/*
    Escreva um programa que fa�a o cadastro de uma pessoa contendo nome e idade.
    O programa dever� informar se a pessoa � maior ou menor de idade.
    O programa s� poder� ser encerrado quando o usu�rio informar como nome a palavra "FIM".
*/

#include <stdio.h>
#include <string.h>

int main () {

    char nome[40];
    int idade;

    do {

        printf("Informe o nome: ");
        scanf("%s", nome);

        //Retorna 1 = quando n�o consegue comparar (erro na compara��o)
        //Retorna 0 = quando consegue comparar (comparou com sucesso)

        //valor 1 em condi��o = true/verdadeiro
        //valor 0 em condi��o = false/falso
                
        if (!strcmp(nome, "fim")) {
            return 0;
        }

        printf("Informe a idade: ");
        scanf("%d", &idade);

        if (idade >= 18) {
            printf("%s e maior de idade", nome);
        } else {
            printf("%s e menor de idade", nome);
        }

    } while(1);    

}