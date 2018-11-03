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
int c = 5;      // variable para posicionar en el eje x

///--- Funciones Método
void PositionX();   // posicionar en x
void anscii_h_superior(int aHS, int bHS, int lHS);      // horizontal superior
void anscii_h_inferior(int aHI, int bHI, int lHI);      // horizontal inferior
void anscii_v(int vAV);     // vertical

    //================================
    //=====         MAIN         =====
    //================================
    int main()
{
    ///--- Local Variable
    int opcion;
    int aux = 0;
    int l = 205;    // igual horizontal anscii
    int v = 186;    // igual vertical anscii
    int a = 201;    // esquina izquierda superior
    int b = 187;    // esquina derecha superior
    int c = 200;    // esquina izquierda  inferior
    int d = 188;    // esquina derecha inferior

    ///--- Main Code
    while (true)
    {
        anscii_h_superior(a, b, l);
        PositionX();
        printf("MENU DE OPCIONES\n");
        anscii_h_inferior(c, d, l);
        anscii_h_superior(a, b, l);
        anscii_v(v);
        printf("****************    %c\n", v);

        anscii_v(v);
        printf("1. Abrir            %c\n", v);
        anscii_v(v);
        printf("2. Cerrar           %c\n", v);
        anscii_v(v);
        printf("3. Guardar          %c\n", v);
        anscii_v(v);
        printf("4. Salir            %c\n", v);
        anscii_v(v);
        printf("                    %c\n", v);
        anscii_h_inferior(c, d, l);

        printf("     Ingrese su opcion ==>   ");
        scanf("%i", &opcion);

        //--- opciones
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

        ///--- clear window
        if (aux == 1)
            break;
        for (int i = 0; i < 1000000000; i++)
            ;
        printf("\n\n\n\n");
        system("cls"); // borrar pantalla.   Necesita la libreria stdlib.h
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
    ///--- code
    for (int i = 0; i < c; i++)
        printf(" ");
}

///--- anscii horizontal
void anscii_h_superior(int aHS, int bHS, int lHS)
{
    ///--- code
    printf("%c", aHS);
    for(int i = 0; i < 24; i++) printf("%c", lHS);
    printf("%c\n", bHS);
}

///--- anscii horizontal
void anscii_h_inferior(int aHI, int bHI, int lHI)
{
    ///--- code
    printf("%c", aHI);
    for (int i = 0; i < 24; i++)
        printf("%c", lHI);
    printf("%c\n", bHI);
}

///--- anscii vertical
void anscii_v(int vAV)
{
    ///--- codes
    printf("%c    ",vAV);
}
