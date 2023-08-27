#include <stdio.h>

int main() {
    // Tipos de Datos Enteros
    int entero = 12345;
    printf("Entero: %d\n", entero);

    unsigned int enteroSinSigno = 4294967295;
    printf("Entero sin signo: %u\n", enteroSinSigno);

    short corto = -32000;
    printf("Corto: %hd\n", corto);

    unsigned short cortoSinSigno = 65535;
    printf("Corto sin signo: %hu\n", cortoSinSigno);

    long largo = 123456789012345;
    printf("Largo: %ld\n", largo);

    unsigned long largoSinSigno = 18446744073709551615;
    printf("Largo sin signo: %lu\n", largoSinSigno);

    // Tipos de Datos de Punto Flotante
    float flotante = 3.14159;
    printf("Flotante: %f\n", flotante);

    double doble = 12345.6789;
    printf("Doble: %lf\n", doble);

    long double largoDoble = 0.0000123456789;
    printf("Largo doble: %Lf\n", largoDoble);

    return 0;
}
