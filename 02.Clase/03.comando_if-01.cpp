//====================================
//===        PROGRAMA EN C++       ===
//====================================
/* if   condición   operador lógico     ==, !=, >, <, ||(OR), &&(AND), XOR, ~(NEGACIÓN) */

///--- Library
#include <iostream>
#include <stdio.h>

/* Espacio */
using namespace std;

///--- Global Variable

//================================
//=====         MAIN         =====
//================================
int main()
{
    ///--- Local Variable
    int x = 15;
    int y = 3;

    ///--- Main Code
    if ((x > 5) || (y < 0)) // OR
    {
        printf("%i", x);
    }

    else
    {
        printf("%i", y);
    }

    ///--- comentario1
    ///--- comentario2

    return 0;
}

/// NOTA:
//========================================================
//================       MÉTODOS       ===================
//========================================================