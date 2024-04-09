/*
    Escreva um c�digo que cadastre at� 100 veiculos e permita:

    - O usu�rio informar pela placa do ve�culo que este est� alugado;
    - Informar que um ve�culo foi devolvido
    - O usu�rio informar pela placa do ve�culo que este est� em oficina;
    - Informar que um ve�culo retornou da oficina;

    - O ve�culo possui: Marca, modelo, cor, ano e placa;
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char marca[30], modelo[30], cor[20], placa[8];
    int ano, status;
} cadastroVeiculo;

cadastroVeiculo carros[100];

void cadastrarVeiculo ();
int buscaPlaca();

int main () {
    setlocale(LC_ALL, "Portuguese");

    int opc, indice = 0, indiceBusca;

    do {
        printf("Escolha uma op��o:\n1. Cadastrar ve�culo\n2. Alugar Ve�culo\n");
        printf("3. Devolver ve�culo\n4. Oficina\n5. Retornar da oficina\n6. Sair\n");
        scanf("%d", &opc);
        while (getchar() != '\n' && getchar() != EOF);;
        system("cls");

        switch(opc) {
            case 1:
                if (indice < 100) {
                    cadastrarVeiculo(indice);
                    indice++;
                } else
                {
                    printf("Excedeu a quantidade de cadastros.");
                }
                break;
            case 2:
                indiceBusca = buscaPlaca(indice);
                if (indiceBusca != -1) {
                    carros[indiceBusca].status = 1;
                    printf("Carro alugado.\n");  
                }               
                system("pause");
                system("cls");
                break;
            case 3:
                indiceBusca = buscaPlaca(indice);
                
                if (indiceBusca != -1) {
                    carros[indiceBusca].status = 0;
                    printf("Carro devolvido.\n");
                }                    
                system("pause");
                system("cls");
                break;
            case 4:
                indiceBusca = buscaPlaca(indice);
                
                if (indiceBusca != -1) {
                    carros[indiceBusca].status = 2;
                    printf("Carro em oficina.\n");                
                }
                system("pause");
                system("cls");
                break;
            case 5:
                indiceBusca = buscaPlaca(indice);
                
                if (indiceBusca != -1) {
                    carros[indiceBusca].status = 0;
                    printf("Carro devolvido.\n");                
                }
                system("pause");
                system("cls");
                break;
            case 6:
                printf("Encerrando..");
                return 0;
                break;
            default:
                printf("Op��o inv�lida\n");
                system("pause");
                system("cls");
                break;                    
        }

    } while(1);
}

void cadastrarVeiculo (int index) {
    printf("Infome a marca: ");
    fgets(carros[index].marca, sizeof(carros[index].marca), stdin);
    carros[index].marca[strcspn(carros[index].marca, "\n")] = '\0';
    while (getchar() != '\n' && getchar() != EOF);;
    system("cls");

    printf("Infome o modelo: ");
    fgets(carros[index].modelo, sizeof(carros[index].modelo), stdin);
    carros[index].modelo[strcspn(carros[index].modelo, "\n")] = '\0';
    while (getchar() != '\n' && getchar() != EOF);;
    system("cls");

    printf("Infome a cor: ");
    fgets(carros[index].cor, sizeof(carros[index].cor), stdin);
    carros[index].cor[strcspn(carros[index].cor, "\n")] = '\0';
    while (getchar() != '\n' && getchar() != EOF);;
    system("cls");

    printf("Infome a placa: ");
    fgets(carros[index].placa, sizeof(carros[index].placa), stdin);
    carros[index].placa[strcspn(carros[index].placa, "\n")] = '\0';
    while (getchar() != '\n' && getchar() != EOF);;
    system("cls");

    printf("Infome o ano: ");
    scanf("%d", &carros[index].ano);
    while (getchar() != '\n' && getchar() != EOF);;
    system("cls");

    carros[index].status = 0;
}

int buscaPlaca (int ind) {
    char placa[8];
    int index, valid = 0;

    printf("Informe a praca que deseja buscar: ");
    fgets(placa, sizeof(placa), stdin);
    placa[strcspn(placa, "\n")] = '\0';
    while (getchar() != '\n' && getchar() != EOF);;
    system("cls");

    for (int i = 0; i <= ind; i++) {
        if (strcmp(carros[i].placa, placa)) {
            index = i;
            valid = 1;
        }
    }
    if (valid != 1) {
        printf("Placa n�o encontrada.\n");
        return -1;
    }

    valid = 0;

    return index;
}