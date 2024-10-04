#include <stdio.h>

int main ()
{
    float I, galprecio;
    float CMIN, CMAX, PRECIO;

    printf ("\nIngrese el valor m�nimo de consumo: ");
    scanf ("%f", &CMIN);
    printf ("Ingrese el valor m�ximo de consumo: ");
    scanf ("%f", &CMAX);
    printf ("\nIngrese el precio de la gasolina por gal�n: ");
    scanf ("%f", &PRECIO);

    if (CMIN > CMAX)
    {
        printf ("\nEl valor ingresado no es v�lido");
    }
    else {

        printf("\n----------------------------------------------\n");
        printf("|  Consumo (L/100km) |  Precio gal/km (Pesos) |\n");
        printf("----------------------------------------------\n");

        for (I = CMIN; I <= CMAX; I++)
        {
            galprecio = 0.0026 * I * PRECIO;
            printf("|   %-15.2f |  %-19.2f|\n", I, galprecio);
        }

        printf("----------------------------------------------\n");
    }

    return 0;
}
