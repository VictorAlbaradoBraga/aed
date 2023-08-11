#include "labirinto.h"
#include <stdio.h>

int main() {
    int labirinto[SIZE][SIZE];

    // Ler o labirinto do arquivo
    if (!ler_labirinto("labirinto.txt", labirinto)) {
        return 1;
    }

    // Imprimir labirinto inicial
    printf("Labirinto inicial:\n");
    imprimir_labirinto(labirinto);

    // Tentar encontrar o caminho
    if (encontrar_caminho(labirinto, 0, 0)) {
        printf("\nLabirinto solucionado:\n");
        imprimir_labirinto(labirinto);
    } else {
        printf("\nLabirinto nao possui solucao.\n");
    }

    return 0;
}
