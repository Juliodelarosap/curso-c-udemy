/*calcular la cantidad de segundos que estan incluidos
en el numero de horas, minutos y segundos ingresados 
por el usuario.*/

#include<stdio.h>

int main(){

int horas,min,seg,segt;

printf("Digite hora, min y seg: \n");
scanf("%i %i %i",&horas,&min,&seg);

segt = (((horas*3600)+(min*60))+seg);

printf("Los segundos totales son: %i\n",segt);

    return 0;
}