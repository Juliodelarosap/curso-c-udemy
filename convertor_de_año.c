/*
Transformar años a meses
meses a semanas 
semanas a dias 
y dias a horas

1 año = 12 meses
1 mes = 4 semanas
1 semana = 7 dias
1 dia = 24 horas
*/

/*pedirle al usuario la cantidad de años con la que
se hara la conversion*/

#include <stdio.h>

int main(){

int year,meses,semanas,dias,horas;

printf("Digite la cantidad de a%cos que desea convertir\n",241);
scanf("%i",&year);

meses = (year*12);
semanas = (meses*4);
dias = (semanas*7);
horas = (dias*24);

printf("A%co es %i\nMeses son %i\nSemanas son %i\nDias es %i\nHoras son %i\n",241,year,meses,semanas,dias,horas);

    return 0;
}