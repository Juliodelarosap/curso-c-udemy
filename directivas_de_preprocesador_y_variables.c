#include<stdio.h>//son librerias para el programa 
/*#include<string.h>
#include<math.h>
#include<stdlib.h>*/


#define PI 3.1416/*y pi tendra ese valor en todo
el codigo*/
int y = 5; //variable global

int main(){

int x = 10;// variable local
/*diferencia entre variables es que la local solo se 
use en la funcion en que esta declarando y la global
se puede declarar en n funciones */
//int suma = 0; como entero omitira el punto 
float suma;

suma = PI + x;

printf("La Suma es: %.4f",suma);/*para poner 
ciertos digitos despues el punto de coloca %.nf 
n se refiere a la cantidad de numeros*/

    return 0;
}