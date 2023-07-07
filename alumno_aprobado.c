//Comprobar si un alumno aprobo o no
//(aprueba si su nota es mayor 5.5)

#include <stdio.h>

int main(){

    float calificacionex;

    printf("Escribe la calificacion" );
    scanf("%f",&calificacionex);

    if (calificacionex >= 5.5) printf("Esta aprobado" );

    else{
        printf("Reprobado" );

    } 



    return 0;
}