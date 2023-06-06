#include "player.h"
#include "maze.h"
#include <stdio.h>

void moverJugador(int laberinto[ROWS][COLS], int *filaJugador,
                  int *columnaJugador, int *movimientos) {
  char movimiento;
  int nuevaFila = *filaJugador;
  int nuevaColumna = *columnaJugador;

  printf("Ingresa tu movimiento (WASD): ");
  scanf(" %c", &movimiento);

  switch (movimiento) {
  case 'W':
  case 'w':
    nuevaFila--;
    break;
  case 'S':
  case 's':
    nuevaFila++;
    break;
  case 'A':
  case 'a':
    nuevaColumna--;
    break;
  case 'D':
  case 'd':
    nuevaColumna++;
    break;
  default:
    printf("Movimiento invalido.\n");
    return;
  }

  if (esMovimientoValido(laberinto, nuevaFila, nuevaColumna)) {
    *filaJugador = nuevaFila;
    *columnaJugador = nuevaColumna;
    (*movimientos)++;
  } else {
    printf("Movimiento invalido.\n");
  }
}

int haGanado(int filaJugador, int columnaJugador) {
  if (filaJugador == ROWS - 1 && columnaJugador == COLS - 1) {
    return 1;
  }
  return 0;
}
