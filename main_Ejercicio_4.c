/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Ejercicio 4

#include <stdio.h>
#include "add.h"

int main()
{
    int a, b;
    printf("Ingrese dos números separados por un espacio: ");
    scanf("%d %d", &a, &b);
    printf("La suma de %d y %d es %d\n", a, b, add(a,b));
    printf("La resta de %d y %d es %d\n", a, b, sub(a,b));
    printf("La multiplicación de %d y %d es %d\n", a, b, mult(a,b));
    printf("La división de %d y %d es %.2f\n", a, b, divd(a,b));
    printf("El valor de PI con 5 decimales es: %.5f ", PI);
    return 0;
}
