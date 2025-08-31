#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define MAX_TERRITORIOS 5

struct tropas {
    char nome[30];
    char cor [10];
    int exercito;
};
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main() {
    struct tropas war[MAX_TERRITORIOS];
    int tottropas = 0;

    printf("======JOGO WAR======\n");
    for(int i = 0; i < MAX_TERRITORIOS; i++){
        printf("\nCadastrar Territorio %d\n", i + 1);
        printf("Nome do Territorio: ");
        fgets(war[tottropas].nome, sizeof(war[tottropas].nome), stdin);
        printf("Cor do Exercito: ");
        fgets(war[tottropas].cor, sizeof(war[tottropas].cor), stdin);
        printf("Numero de Tropas: ");
        scanf(" %d", &war[tottropas].exercito);
        limparBufferEntrada();

        war[tottropas].nome[strcspn(war[tottropas].nome, "\n")] = '\0';
        war[tottropas].cor[strcspn(war[tottropas].cor, "\n")] = '\0';

        tottropas++;
    }
    printf("=====Territorios cadastrados======\n");
    for(int i = 0; i < tottropas; i++){
    printf("\n======Territorio====== %d\n", i + 1);
    printf("Nome: %s\n", war[i].nome);
    printf("Dominado por: %s\n", war[i].cor);
    printf("Tropas %d\n", war[i].exercito);
    
    };
    return 0;    
}
