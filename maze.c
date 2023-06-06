#include "maze.h"
#include <stdio.h>

void imprimirLaberinto(int laberinto[ROWS][COLS], int fila, int columna) {
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      if (i == fila && j == columna) {
        printf("X ");
      } else {
        printf("%d ", laberinto[i][j]);
      }
    }
    printf("\n");
  }
}

int esMovimientoValido(int laberinto[ROWS][COLS], int fila, int columna) {
  if (fila >= 0 && fila < ROWS && columna >= 0 && columna < COLS &&
      laberinto[fila][columna] == 0) {
    return 1;
  }
  return 0;
}
