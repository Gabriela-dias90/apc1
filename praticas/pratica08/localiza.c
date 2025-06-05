#include <stdio.h>

int main()
{
    int numero;
    int matriz[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor da matriz [%i]:", i);
        scanf("%i", &matriz[i]);
    }

    printf("Digite um numero para achar:");
    scanf("%i", &numero);

    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf("O numero %i foi encontrado na matriz\n", numero);
        }
        if (matriz[i] == numero)
        {
            printf("O numero %i foi encontrado na matriz [%i]\n", numero, i);
        }
        return 0;
    }
}    