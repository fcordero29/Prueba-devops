#include "constantes.h"
#include "solucion.h"
#include "logica.h"
#include <iostream>
using namespace std;

int GetEstado()
{
    char** tablero = GetTablero();
    
    
    for (int i = 0; i < 3; i++) {
      
        if (tablero[i][0] == tablero[i][1] && tablero[i][1] == tablero[i][2]) {
            if (tablero[i][0] == 'X') return GANO_X;
            if (tablero[i][0] == 'O') return GANO_O;
        }
   
        if (tablero[0][i] == tablero[1][i] && tablero[1][i] == tablero[2][i]) {
            if (tablero[0][i] == 'X') return GANO_X;
            if (tablero[0][i] == 'O') return GANO_O;
        }
    }
    
    
    if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]) {
        if (tablero[0][0] == 'X') return GANO_X;
        if (tablero[0][0] == 'O') return GANO_O;
    }
    if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]) {
        if (tablero[0][2] == 'X') return GANO_X;
        if (tablero[0][2] == 'O') return GANO_O;
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tablero[i][j] == ' ') {
                return JUEGO_EN_CURSO;
            }
        }
    }

    
    return EMPATE;
}
