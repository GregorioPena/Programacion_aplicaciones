//====================================
//===        PROGRAMA EN C++       ===
//====================================
/* Comentarios sobre el programa*/

///--- Library
#include <iostream>
#include <stdio.h>

/* Espacio */
using namespace std;

///--- Global Variable
int x = 0;
int c = 12; // variable para posicionar en el eje x
int f = 5;  // variable para posicionar en el eje y

///--- Funciones Método
void PositionX();
void PositionY();
//================================
//=====         MAIN         =====
//================================
int main()
{
    ///--- Posicionar eje y
    PositionY();

    ///--- Main Code
    for (int j = 0; j < 10; j++)
    {
        PositionX();    // posicionar eje x
        for (int i = 0; i < 10; i++)
        {
            x++;
            printf("%03i ", x);
        }
        printf("\n");
    }

    ///--- comentario1
    ///--- comentario2
    
    return 0;
}

/// NOTA:
//========================================================
//================       MÉTODOS       ===================
//========================================================
///--- Posicionar x
void PositionX()
{
    for (int i = 0; i < c; i++)
        printf(" ");
}

///--- Posicionar y
void PositionY()
{
    for (int j = 0; j < f; j++)
        printf("\n");
}