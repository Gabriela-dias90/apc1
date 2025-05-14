#include <stdio.h>

int main()
{
    int numero;
    printf("Declare uma variavel do tipo inteiro: ");
    scanf("%i", &numero);

    for (int i = 1; i < 101; i++)
    {
        if (i % numero == 0)
        {
            printf("%i, ", i);
        }
    }

    return 0;
}