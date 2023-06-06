#ifndef PLAYER_H
#define PLAYER_H
#include "maze.h"

void moverJugador(int laberinto[ROWS][COLS], int *filaJugador,
                  int *columnaJugador, int *movimientos);
int haGanado(int filaJugador, int columnaJugador);

#endif
