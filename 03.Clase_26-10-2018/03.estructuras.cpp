//====================================
//===        PROGRAMA EN C++       ===
//====================================
/*  Arreglo estático, su tamaño y dimensión no varía cuando se ejecuta el programa
    Arreglo dinámico, si se puede cambiar mientras se ejecuta el programa
    (estos usan punteros)
    Existen Arreglos 1, 2, 3 Dimensionales */

///--- Library
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* Espacio */
using namespace std;

///--- Global Variable

//================================
//=====         MAIN         =====
//================================
int main()
{
    ///--- Local Variable
    int Clase[5][4];

    ///--- Main Code
    Clase[0][0] = 4, Clase[0][1] = 4, Clase[0][2] = 4, Clase[0][3] = 4;
    Clase[1][0] = 4, Clase[1][1] = 4, Clase[1][2] = 4, Clase[1][3] = 4;
    Clase[2][0] = 4, Clase[2][1] = 4, Clase[2][2] = 4, Clase[2][3] = 4;
    Clase[3][0] = 4, Clase[3][1] = 4, Clase[3][2] = 4, Clase[3][3] = 4;
    Clase[4][0] = 4, Clase[4][1] = 4, Clase[4][2] = 4, Clase[4][3] = 4;

    printf("%i ", Clase[0][0]);
    
    ///--- Salto
    printf("\n\n\n");

    for (int j = 0; j < 4; j++)
        printf("%3i ", Clase[0][j]);
    printf("\n");
    for (int j = 0; j < 4; j++)
        printf("%3i ", Clase[1][j]);
    printf("\n");
    for (int j = 0; j < 4; j++)
        printf("%3i ", Clase[2][j]);
    printf("\n");
    for (int j = 0; j < 4; j++)
        printf("%3i ", Clase[3][j]);
    printf("\n");
    for (int j = 0; j < 4; j++)
        printf("%3i ", Clase[4][j]);
    printf("\n");

    ///--- Salto
    printf("\n\n\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%3i ", Clase[i][j]);
        printf("\n");
    }

    ///--- Salto
    printf("\n\n\n");

    int Clase1[5];
    Clase1[0] = 4;
    Clase1[1] = -2;
    Clase1[2] = 14;
    Clase1[3] = 12;
    Clase1[4] = 5;

    for (int i = 0; i < 4; i++)
        printf("%3i ", Clase1[i]);


        ///--- comentario1
        ///--- comentario2

        return 0;
}

/// NOTA:
//========================================================
//================       MÉTODOS       ===================
//========================================================