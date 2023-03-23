/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Ejercicio 3

#include <stdio.h>

int main() {
    int n, i, fib1 = 0, fib2 = 1, nextFib;
    
    printf("Ingrese el número de términos que usted quiera mostrar: ");
    scanf("%d", &n);
    
    printf("Serie de Fibonacci: ");
    
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            nextFib = i;
        } else {
            nextFib = fib1 + fib2;
            fib1 = fib2;
            fib2 = nextFib;
        }
        
        printf("%d ", nextFib);
    }
    
    printf("\n");
    
    return 0;
}

