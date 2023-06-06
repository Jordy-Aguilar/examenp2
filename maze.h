#ifndef MAZE_H
#define MAZE_H

#define ROWS 5
#define COLS 5

void imprimirLaberinto(int laberinto[ROWS][COLS], int fila, int columna);
int esMovimientoValido(int laberinto[ROWS][COLS], int fila, int columna);

#endif
