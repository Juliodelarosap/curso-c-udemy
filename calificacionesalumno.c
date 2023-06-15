//decirle a un alumno con base a sus calificaciones 
/*9-10 excelente 
8-9 muy bien 
7-8 regular
0-6 mejorar*/

#include <stdio.h>

int main(){

    int calificacion;

    printf("coloca tu calificacion aqui:\n");
    scanf("%d",&calificacion);

    switch (calificacion) {

        case 10:
            printf("excelente");
            break;
            
        case 9:
            printf("muy bien");
            break;
            
        case 8:
            printf("regular");
            break;
            
        case 7:
            printf("regular");
            break;
            
        case 6:
            printf("mejorar");
            break;
            
        case 5:
            printf("mejorar");
            break;
            
        case 4:
            printf("mejorar");
            break;
            
        case 3:
            printf("mejorar");
            break;
            
        case 2:
            printf("mejorar");
            break;
            
        case 1:
            printf("mejorar");
            break;
            
        case 0:
            printf("mejorar");
            break;
            
        default:
            printf("calificacion invalida");


    }




    return 0;
}