#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    
    setlocale(LC_ALL, "portuguese");
    
    int idade;
    char nome[50];

    do{
        printf("Informe o nome ou a palavra FIM para encerrar: ");
        scanf("%s", nome);

        if (!strcmp(nome, "fim")) {
            return 0;
        }
    
        printf("Informe a idade: ");
        scanf("%d", &idade); 
        
        if(idade < 18 && idade > 0){  
            printf("Indiv�duo menor de idade\n");
         }
    
        else if (idade >= 18){    
            printf("Indiv�duo maior de idade\n");
       
        }
        
        else{
            printf("Idade inv�lida\n");
        }      
        
        
    } while (1);
    
}
