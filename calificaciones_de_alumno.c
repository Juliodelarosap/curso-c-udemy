/*Un alumno desea saber cual sera su calificacion final en la 
materia de algoritmos.
Dicha calificacion se compone de los siguientes porcentajes:

55% promedio de sus tres calificaciones parciales.
30% calificacion del examen final.
15% calificacion de un trabajo final.*/

#include <stdio.h>

int main(){

float p1,p2,p3,prop,exf,propex,tf,proptf,nt;

printf("Coloque nota en base 100 primer parcial:\n");
scanf("%f", &p1);

printf("Coloque nota en base 100 segundo parcial:\n");
scanf("%f", &p2);

printf("Coloque nota en base 100 tercer parcial:\n");
scanf("%f", &p3);

prop = ((p1+p2+p3)/3)*0.55;

printf("Coloque nota en base 100 examen final:\n");
scanf("%f", &exf);

propex = (exf*0.3);


printf("Coloque nota en base 100 de trabajo final:\n");
scanf("%f", &tf);


proptf = (tf*0.15);


nt = (prop+propex+proptf);

printf("Su calificacion es: %.2f\n",nt);


    return 0;
}