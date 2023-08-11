#ifndef LABIRINTO_H
#define LABIRINTO_H

#define SIZE 10

void imprimir_labirinto(int labirinto[SIZE][SIZE]);
int encontrar_caminho(int labirinto[SIZE][SIZE], int x, int y);
int ler_labirinto(const char *arquivo, int labirinto[SIZE][SIZE]);

#endif
