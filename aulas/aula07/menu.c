#include <stdio.h>
#include <stdlib.h>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"
#define reset "\e[0m"

int main() {
    int opcao = 0;

    while(opcao != 4) {
        system("clear");
        printf(CYN);
        printf(" __  __  ____  __  __     ____  _____  ___  _____ \n");
        printf(" (  \\/  )( ___)(  )(  )  (_  _) (  _  )/ __)(  _  ) \n");
        printf("  )    (  )__)  )(__)(    ___)(  )(_)(( (_-. )(_)(  \n");
        printf(" (_/\\/\\_)(____)(______)   \\____)(_____)\\___/(_____) \n");
        printf("------------------------\n");
        printf("|        MEU JOGO      |\n");
        printf("------------------------\n");
        printf("|                      |\n");
        printf("|    1 - Novo Jogo     |\n");
        printf("|    2 - Ver Score     |\n");
        printf("|    3 - Sobre         |\n");
        printf("|    4 - Sair          |\n");
        printf("|                      |\n");
        printf("------------------------\n");
        printf(reset);
        printf("Escolha uma opcao > ");
        scanf("%i", &opcao);
        while(getchar() != '\n');

        switch(opcao) {
            case 1: {
                int nivel = 0;
                printf("Novo Jogo\n\n");
                printf("Escolha um nivel\n");
                printf("1 - Facil\n");
                printf("2 - Medio\n");
                printf("3 - Dificil\n");
                printf("> ");
                scanf("%i", &nivel);
                break;
            }
            case 2:{
                printf("Score do Jogo\n\n");
                printf("1 - Jogador A - 10000 pontos\n");
                printf("2 - Jogador B - 7000 pontos\n");
                printf("3 - Jogador C - 5000 pontos\n");
                printf("4 - Jogador D - 3000 pontos\n");
                printf("5 - Jogador E - 1000 pontos\n");
                printf("Pressione ENTER para continuar...");
                while(getchar() != '\n');
                break;

            }
            case 3:{
                printf("Sobre o Jogo\n\n");
                printf("Desenvolvido em C\n");
                printf("Por um programador raiz\n");
                printf("Copyright (C) 2025\n\n");
                printf("Pressione ENTER para continuar...");
                while(getchar() != '\n');
                break;
            }
            case 4:{
                printf("Ate logo!\n");
                break;
            }
            default: printf("opcao invalida! Tente de novo.\n");
        }
    }



    return 0;
}