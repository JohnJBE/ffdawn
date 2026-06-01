#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_CARTAS 52
#define CARTAS_POR_JOGADOR 5

typedef struct {
    char valor[6];
    char naipe[10];
} Carta;

int main() {
    Carta baralho[TOTAL_CARTAS];

    char valores[13][6] = {
        "A", "2", "3", "4", "5", "6", "7",
        "8", "9", "10", "J", "Q", "K"
    };

    char naipes[4][10] = {
        "Copas",
        "Ouros",
        "Espadas",
        "Paus"
    };

    int indice = 0;

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            sprintf(baralho[indice].valor, "%s", valores[j]);
            sprintf(baralho[indice].naipe, "%s", naipes[i]);
            indice++;
        }
    }

    // Embaralhar
    srand(time(NULL));

    for (int i = 0; i < TOTAL_CARTAS; i++) {
        int r = rand() % TOTAL_CARTAS;

        Carta temp = baralho[i];
        baralho[i] = baralho[r];
        baralho[r] = temp;
    }

    // Distribuir cartas
    printf("=== Jogador 1 ===\n");
    for (int i = 0; i < CARTAS_POR_JOGADOR; i++) {
        printf("%s de %s\n",
               baralho[i].valor,
               baralho[i].naipe);
    }

    printf("\n=== Jogador 2 ===\n");
    for (int i = CARTAS_POR_JOGADOR;
         i < CARTAS_POR_JOGADOR * 2;
         i++) {

        printf("%s de %s\n",
               baralho[i].valor,
               baralho[i].naipe);
    }

    return 0;
}