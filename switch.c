/*switch(selecciona){ 
case 1: opcion1; break;
default: ninguna; break;
}
*/

#include <stdio.h>

int main(){

    int dia;

    puts("Selecciona un numero de los dias de la semana (1 a 7)");
    scanf("%i",&dia);

    switch (dia)
    {
    case 1 :
        puts("Seleccionaste el Lunes");
        break;
    case 2 :
        puts("Seleccionaste el Martes");
        break;
    case 3 :
        puts("Seleccionaste el Miercoles");
        break;
    case 4 :
        puts("Seleccionaste el Jueves");
        break;
    case 5 :
        puts("Seleccionaste el Viernes");
        break;
    case 6 :
        puts("Seleccionaste el Sabado");
        break;
    case 7 :
        puts("Seleccionaste el Domingo");
        break;
    default: 
    puts("Opcion invalida");
        break;
    }


    return 0;
}