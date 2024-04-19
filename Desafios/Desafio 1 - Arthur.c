/* 
    Fa�a um algoritmo em C que apresente um menu de op��es para o usu�rio.
    Dentre as op��es, ter�: soma, subtra��o, multiplica��o, divis�o e raiz quadrada.
    Ao escolher o tipo de opera��o aritm�tica, o usu�rio dever� entrar com um ou mais valores para realizar os c�lculos.
    Este programa s� poder� ser encerrado se o usu�rio escolher a op��o 0 no menu.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

void entradaValores(int opcao, float *valor1, float *valor2);

int main() {
    setlocale(LC_ALL, "portuguese");

    int opc = 0, erro;
    float resultado, valor1, valor2;
    
    do {
        system("cls");
        erro = 0;

        printf("Escolha uma op��o:\n");
        printf("0. Sair\n");
        printf("1. Soma\n");
        printf("2. Subtra��o\n");
        printf("3. Multiplica��o\n");
        printf("4. Divis�o\n");
        printf("5. Raiz quadrada\n");

        scanf("%d", &opc);
        while (getchar() != '\n' && getchar() != EOF);
        system("cls");

        switch (opc) {
            case 0:
                printf("\n\nEncerrando...\n");
                system("pause");
                return 0;
                break;
            case 1:
                printf("Opera��o: soma\n");
                entradaValores(opc, &valor1, &valor2);
                resultado = valor1 + valor2;
                break;
            case 2:
                printf("Opera��o: subtra��o\n");
                entradaValores(opc, &valor1, &valor2);
                resultado = valor1 - valor2;
                break;
            case 3:
                printf("Opera��o: multiplica��o\n");
                entradaValores(opc, &valor1, &valor2);
                resultado = valor1 * valor2;
                break;
            case 4:
                printf("Opera��o: divis�o\n");
                entradaValores(opc, &valor1, &valor2);
                if (valor2 == 0) {
                    printf("N�o � poss�vel dividir por 0! (Indefinido)\n");
                    erro = 1;
                    break;
                }
                resultado = valor1 / valor2;
                break;
            case 5:
                printf("Opera��o: raiz quadrada\n");
                entradaValores(opc, &valor1, &valor2);
                if (valor1 < 0) {
                    printf("N�o � poss�vel calcular a raiz quadrada de um n�mero negativo!\n");
                    erro = 1;
                    break;
                }
                resultado = sqrt(valor1);
                break;
            default:
                printf("Op��o inv�lida!\n");
                break;
        }

        if (!erro) {
            printf("\nResultado: %.2f\n", resultado);
        }
        system("pause");

    } while(1);
}

void entradaValores(int opcao, float *valor1, float *valor2) {
    if (opcao != 5) {
        printf("Digite o primeiro valor:\n");
        scanf("%f", valor1);
        while (getchar() != '\n' && getchar() != EOF);
        printf("Digite o segundo valor:\n");
        scanf("%f", valor2);
        while (getchar() != '\n' && getchar() != EOF);
    } else {
        printf("Digite o valor:\n");
        scanf("%f", valor1);
        while (getchar() != '\n' && getchar() != EOF);
    }
}