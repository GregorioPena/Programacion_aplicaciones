//====================================
//===        PROGRAMA EN C++       ===
//====================================
/* Menu 
scanf(), usa la dirección de la variable, no el nombre de la variable*/

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
    int opcion;
    int aux = 0;

    ///--- Main Code
    while (true)
    {
        printf("MENU DE OPCIONES\n\n");
        printf("****************\n");

        printf("1. Abrir\n");
        printf("2. Cerrar\n");
        printf("3. Guardar\n");
        printf("4. Salir\n\n");

        printf("Ingrese su opción ==>   ");
        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
        {
            printf("Presionaste Abrir");
            break;
        }
        case 2:
        {
            printf("Presionaste Cerrar");
            break;
        }
        case 3:
        {
            printf("Presionaste Guardar");
            break;
        }
        case 4:
        {
            aux = 1;
            break;
        }
        default:
        {
            printf("Vuelva a Intentarlo");
            break;
        }
        }

        if (aux == 1) break;
        for (int i = 0; i < 1000000000; i++);
        printf("\n\n\n\n");
        system("clear");    // borrar pantalla.   Necesita la libreria stdlib.h
    }

    ///--- comentario1
    ///--- comentario2

    return 0;
}

/// NOTA:
//========================================================
//================       MÉTODOS       ===================
//========================================================