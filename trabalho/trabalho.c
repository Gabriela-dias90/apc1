#include <stdio.h>
#include <stdlib.h>


int main() {
    int opcao = 0;

    while (opcao != 4) {
    
        system("clear");

    
        printf("                            ,--.   ,--.                                 \n");
        printf(",--,--,--. ,---. ,--.,--.   |  |-. `--',--.  ,--.,--,--.,--,---, ,---.  \n");
        printf("|        || .-. :|  ||  |   | .-. ',--. \\  `'  /' ,-. ||  \\  || .-. | \n");
        printf("|  |  |  |\\   --'  ''  '   | `-' ||  | /  /.  \\ '-'  ||  ||  || '-' | \n");
        printf("`--`--`--' `----' `----'     `---' `--''--'  '--'`--`--'`--''--' `---'  \n");
       

        printf("\n===== MENU =====\n");
        printf("1. Opcao 1\n");
        printf("2. Opcao 2\n");
        printf("3. Opcao 3\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao > ");
        scanf("%d", &opcao);

        while (getchar() != '\n'); 


        switch (opcao) {
            case 1:
                printf("Você escolheu a Opção 1!\n");
                break;
            case 2:
                printf("Você escolheu a Opção 2!\n");
                break;
            case 3:
                printf("Você escolheu a Opção 3!\n");
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

        if (opcao != 4) {
            printf("Pressione ENTER para continuar...\n");
            getchar(); 
        }
    }

    return 0;
}