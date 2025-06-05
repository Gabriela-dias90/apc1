#include <stdio.h>
#include <string.h>

int main() {
    char frase[31];    
    char letra;          
    int quantidade = 0;  

    printf("Informe uma frase com ate 30 caracteres: ");
    scanf("%30s", frase);  

    printf("Qual letra voce quer contar: ");
    scanf(" %c", &letra);  

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra) {              
            quantidade++;
        }
    }

    if (quantidade > 0) {                     
        printf("A letra '%c' aparece %d vezes na frase.\n", letra, quantidade);
    } else {
        printf("A frase nao contem a letra!\n");
    }

    return 0;
}