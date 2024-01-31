/*Dada una calificacion de un examen mediante un codigo escribir el 
literal que le corresponde a la nota

A - Excelente
B - Notable
C - Aprobado
F/D - Reprobado

*/
#include <stdio.h>

int main() {
    char calificacion;

    printf("Ingrese la calificacion: ");
    scanf("%c", &calificacion);

    switch (calificacion) {
        case 'A':
            printf("Excelente\n");
            break;
        case 'B':
            printf("Notable\n");
            break;
        case 'C':
            printf("Aprobado\n");
            break;
        case 'F':
        case 'D':
            printf("Reprobado\n");
            break;
        default:
            printf("Calificacion invalida\n");
            break;
    }

    return 0;
}
