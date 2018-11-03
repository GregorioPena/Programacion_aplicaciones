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
int x;  // variable de entorno, o global
//================================
//=====         MAIN         =====
//================================
int main()
{
    ///--- Variable Local
    int x, y, z;
    
    x = 5, y = 7, z = -4;

    x = (--x) + (++y) + (z++);
    y = x - (--y) - (z++);
    z++;

    printf("%i  %i %i", x, y, z);
    
    ///--- comentario1
    ///--- comentario2

    return 0;
}

/// NOTA:
//========================================================
//================       MÉTODOS       ===================
//========================================================