//====================================
//===        PROGRAMA EN C++       ===
//====================================
/* Incluimos la libreria tablero_array.h, donde están definidos los metodos.
Es necesario incluir la libreria " " y luego usar el namespace donde están
definidos los metodos
No es necesario declarar las funciones al principio ///--- Funciones Método */

///--- Library
#include <iostream>
#include <stdio.h>
#include "tablero_array.h"
//#include "./path/tablero_array.h"     // también se puede incluir a través de un path

/* Espacio */
using namespace std;
using namespace Metodos;

///--- Global Variable

///--- Funciones Método

//================================
//=====         MAIN         =====
//================================
int main()
{
    ///--- Variable local
    int a = 10;
    int b = 10;
    int z = 1;  // valor inicial del array2D
    int x = 12; // variable para posicionar en el eje x
    int y = 5;  // variable para posicionar en el eje y
    int T[a][b];
    int *pT;
    pT = &T[0][0];

    ///--- Posicionar eje y
    PositionY(y);

    ///--- Main Code
    LLenar(a, b, z, pT);
    Imprimir(a, b, x, pT);

    ///--- comentario1
    ///--- comentario2
    return 0;
}

/// NOTA:
//========================================================
//================       MÉTODOS       ===================
//========================================================
