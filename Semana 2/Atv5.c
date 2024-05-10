/*
    Escreva um c�digo que exiba na tela um menu com as op��es:

    1. Somar 2 numeros
    2. Multiplicar 2 numeros
    3. Encerrar

    O programa s� poder� ser finalizado quando o usu�rio escolher a op��o 3
*/

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale (LC_ALL, "Portuguese");

    int opc, n1, n2;

    do {
        printf("Escolha uma op��o: \n");
        printf("1. Somar\n2. Multiplicar\n3. Encerrar\n");
        scanf("%d", &opc);

        switch (opc) {
            case 1:
                printf("Digite o primeiro n�mero inteiro: ");
                scanf("%d", &n1);
                
                printf("Digite o segundo n�mero inteiro: ");
                scanf("%d", &n2);

                printf("%d + %d = %d\n", n1, n2, n1+n2);
                break;
            case 2:
                printf("Digite o primeiro n�mero inteiro: ");
                scanf("%d", &n1);
                
                printf("Digite o segundo n�mero inteiro: ");
                scanf("%d", &n2);

                printf("%d x %d = %d\n", n1, n2, n1*n2);
                break;
            case 3:
                printf("Encerrando o programa.");
                return 0;
                break;
            default:
                printf("Op��o inv�lida.\n");
                break;          
        }

    } while(1);
     
}
