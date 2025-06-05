#include <stdio.h>
#include <string.h>

int main() {
    char string[11];             // Passo f
    memset(string, '\0', sizeof(string));  // Passo g

    char tecla;                 // Passo h
    printf("Digite um caractere: ");
    scanf(" %c", &tecla);       // Passo i (espaço antes de %c evita problema com enter)

    memset(string, tecla, 10);  // Passo j
    printf("%s\n", string);     // Passo k

    memset(string, '*', 5);     // Passo l
    printf("%s\n", string);     // Passo m

    string[5] = '\0';           // Passo n
    printf("%s\n", string);     // Passo o

    for (int i = 0; i < 10; i++) {  // Passo p
        printf("%c", string[i]);    // Passo q
    }

    printf("\n");               // Passo r

    return 0;
}