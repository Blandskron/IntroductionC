#include <stdio.h>

// Declaración de constantes con #define
#define PI 3.14159
#define MAX_VALUE 100
#define MESSAGE "Hola, mundo!"

int main() {
    // Uso de constantes
    float radio = 5.0;
    float circunferencia = 2 * PI * radio;
    
    int numero = 75;
    if (numero > MAX_VALUE) {
        printf("El número es mayor que %d.\n", MAX_VALUE);
    }
    
    printf("%s\n", MESSAGE);
    
    return 0;
}
