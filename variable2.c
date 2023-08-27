#include <stdio.h> // Se incluye la biblioteca estándar de entrada y salida

// Declaración de variables globales
int a, b, c;
float f, g, h;

int main() {
    // Inicialización de las variables globales
    a = 10;
    b = 34;
    g = -10.5; // Usar punto decimal en lugar de coma decimal
    f = 4.5;   // Usar punto decimal en lugar de coma decimal

    // Definición de la variable local c
    int c;
    c = a + b;

    // Definición de la variable local h
    float h;
    h = g + f;

    // Impresión de los resultados
    printf("Value of sum c is: %d.\n", c); // Usar "%d" para enteros
    printf("Value of sum h is: %.2f", h);  // Usar "%.2f" para punto flotante con dos decimales

    return 0;
}