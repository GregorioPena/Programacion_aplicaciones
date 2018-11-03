namespace Metodos
{
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
} // namespace Metodos_tablero