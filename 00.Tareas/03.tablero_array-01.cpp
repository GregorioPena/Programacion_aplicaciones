//====================================
//===        PROGRAMA EN C++       ===
//====================================
/* Comentarios sobre el programa*/

///--- Library
#include <iostream>
#include <stdio.h>
#include "metodos.h"

/* Espacio */
using namespace std;

///--- Global Variable

///--- Funciones Método
void PositionX(int xP);
void PositionY(int yP);
void LLenar(int aLL, int bLL, int zLL, int *pLL);
void Imprimir(int aI, int bI, int xI, int *pI);

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
///--- Posicionar x
void PositionX(int xP)
{
    for (int i = 0; i < xP; i++)
        printf(" ");
}

///--- Posicionar y
void PositionY(int yP)
{
    for (int j = 0; j < yP; j++)
        printf("\n");
}

///--- LLenar datos del arreglo
void LLenar(int aLL, int bLL, int zLL, int *pLL)
{
    for (int i = 0; i < aLL; i++)
    {
        for (int j = 0; j < bLL; j++)
        {
            *(pLL + i * bLL + j) = zLL; // Tabla[i][j] = *(pll + i*bLL + j)
            zLL++;
        }
    }
}

///--- Imprimir datos del arreglo
void Imprimir(int aI, int bI, int xI, int *pI)
{
    for (int i = 0; i < aI; i++)
    {
        PositionX(xI);
        for (int j = 0; j < bI; j++)
        {
            printf("%03i ", *(pI + i * bI + j));
        }
        printf("\n");
    }
}

