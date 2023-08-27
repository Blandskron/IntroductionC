#include <stdio.h>

// Declaración de enum para días de la semana
enum DiasSemana {
    Lunes,    // 0
    Martes,   // 1
    Miercoles,// 2
    Jueves,   // 3
    Viernes,  // 4
    Sabado,   // 5
    Domingo   // 6
};

int main() {
    // Declaración de una variable del tipo enum DiasSemana
    enum DiasSemana dia = Miercoles;

    // Uso del enum para imprimir el día correspondiente
    switch (dia) {
        case Lunes:
            printf("Hoy es Lunes.\n");
            break;
        case Martes:
            printf("Hoy es Martes.\n");
            break;
        case Miercoles:
            printf("Hoy es Miércoles.\n");
            break;
        case Jueves:
            printf("Hoy es Jueves.\n");
            break;
        case Viernes:
            printf("Hoy es Viernes.\n");
            break;
        case Sabado:
            printf("Hoy es Sábado.\n");
            break;
        case Domingo:
            printf("Hoy es Domingo.\n");
            break;
    }

    return 0;
}
