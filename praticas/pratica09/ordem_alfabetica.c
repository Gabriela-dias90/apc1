#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[11];
    char palavra2[11];

    printf("Digite a primeira palavra: ");
    scanf("%10s", palavra1);

    printf("Digite a segunda palavra: ");
    scanf("%10s", palavra2);  

    if (strcmp(palavra1, palavra2) >= 0) {
        printf("%s %s\n", palavra2, palavra1);
    } else {
        printf("%s %s\n", palavra1, palavra2);
    }

    return 0;
}
