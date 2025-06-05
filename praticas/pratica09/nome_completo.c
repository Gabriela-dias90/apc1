#include <stdio.h>
#include <string.h>


int main() {
    char primeiro_nome[11];   
    char ultimo_nome[11];     

    printf("Digite o primeiro nome: ");
    scanf("%10s", primeiro_nome);  

    printf("Digite o ultimo nome: ");
    scanf("%10s", ultimo_nome);    

    char nome[31];            

    strcpy(nome, primeiro_nome);  
    strcat(nome, " ");            
    strcat(nome, ultimo_nome);    

    printf("Nome completo: %s\n", nome);  

    return 0;
}