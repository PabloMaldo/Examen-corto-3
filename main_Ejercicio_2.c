/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Ejercicio 2

#include <stdio.h>

int main()
{
    float F, C;
    printf("Hola, este es un programa que convierte los grados Fahrenheit (° F) a Celsius (°C)\n");
    printf("Ingrese el valor de la temperatura en la escala de Fahrenheit: ");
    scanf("%f", &F);
    C = (F - 32) * ((float) 5/9);
    printf("%.2f°F equivale a %.2f°C", F, C);
    return 0;
}
