#include <stdio.h>

int main () {

int numero;
int fatorial;

printf("Numero: ");
scanf("%i", numero);

printf("Fatorial: ");
scanf("%f", numero);

for(int i=numero; i>0; i--) {
    fatorial = fatorial * i;
}


    return 0;
}