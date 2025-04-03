#include <stdio.h>

int main() {
    int numero;

    printf("Informe um numero inteiro: ");
    scanf("%i", &numero);
    getchar();
    printf("O numero informado foi %i\n", numero);

    float nota;
    printf("Informar uma nota entre 0.0 s 10.0: ");
    scanf("%f", &nota);
    printf("A sua nota foi %.1f\n", nota);

    return 0;
}