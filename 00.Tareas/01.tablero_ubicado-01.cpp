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

///--- Funciones Método
void PositionX();
void PositionY();
//================================
//=====         MAIN         =====
//================================
int main()
{
	///--- Posicionar x,y
	PositionY();
	PositionX();

	///--- Main Code
	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			x++;
			printf("%03i ", x);
		}
		printf("\n");
		PositionX();	// posicionar eje x 
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
	for (int i = 0; i < 12; i++)
		printf(" ");
}

///--- Posicionar y
void PositionY()
{
	for (int j = 0; j < 5; j++)
		printf("\n");
}