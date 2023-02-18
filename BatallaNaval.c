/*
Crear una versión pequeña y programada de la batalla naval:
1. Crear una matriz de 10x10 para representar el tablero. Completar con ceros
todos los casilleros.
2. Cargar dentro de la matriz marcando con “1” cada casillero (por código):
• 2 portaaviones (largo 5)
• 2 buques (largo 4)
• 2 submarinos (largo 3)
• 2 cruceros (largo 2)
• 1 lancha (largo 1)
3. Tener en cuenta que no pueden estar pegados, mínimo una distancia de un
casillero entre ellos.
4. Solicitar el ingreso de 10 disparos (de cada uno fila, columna) y mostrar cada
disparo si es Agua o Tocado.
5. Informar cuantos de los 10 disparos fueron Tocado.
6. Repetir los pasos 4 y 5 hasta que el usuario ingrese un valor fuera de los
limites al leer fila y columna.

*/

#include <stdio.h>
#include <string.h>

int main()
{

    int mat [10][10], i, j;
    int disparo = 10;
    int fila, columna;
    int tocado = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mat[i][j]=0;
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%3d",mat[i][j]);
        }
        printf("\n");
    }

    // Colocar los barcos en la matriz
    // Portaaviones 1
    mat[2][4] = 1;
    mat[3][4] = 1;
    mat[4][4] = 1;
    mat[5][4] = 1;
    mat[1][4] = 1;

    // Portaaviones 2
    mat[8][2] = 1;
    mat[8][3] = 1;
    mat[8][4] = 1;
    mat[8][5] = 1;
    mat[8][6] = 1;

    // Buque 1
    mat[0][0] = 1;
    mat[1][0] = 1;
    mat[2][0] = 1;
    mat[3][0] = 1;

    // Buque 2
    mat[6][8] = 1;
    mat[7][8] = 1;
    mat[8][8] = 1;
    mat[9][8] = 1;

    // Submarino 1
    mat[1][2] = 1;
    mat[2][2] = 1;
    mat[3][2] = 1;

    // Submarino 2
    mat[3][6] = 1;
    mat[4][6] = 1;
    mat[5][6] = 1;

    // Crucero 1
    mat[2][8] = 1;
    mat[2][9] = 1;

    // Crucero 2
    mat[6][0] = 1;
    mat[6][1] = 1;

    // Lancha
    mat[9][0] = 1;




    for (disparo = 10; disparo > 0; disparo--)
    {
        printf("Ingrese en que fila quiere disparar: \n");
        scanf("%d", &fila);
        printf("Ingrese en que columna quiere disparar: \n");
        scanf("%d", &columna);
        {
            if (fila < 0 || fila >=10 || columna < 0 || columna >= 10)
            {
                printf("Ingrese nuevamente un numero entre 0 y 9\n");
            }
            if (mat[fila][columna] == 1)
            {
                printf("tocado!\n");
                tocado++;
            }
            if (mat[fila][columna] == 0)
            {
                printf("agua\n");
            }
        }
    }

    printf("Veces que fue acertado %i", tocado);
    return 0;
}
