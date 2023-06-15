/*sentencia if/else o doble */

/*
if(algo){
    accion 1
}
else {
    accion 2
}*/

#include <stdio.h>


int main (){

float a,b;

printf("Escribe a: \n");
scanf("%f",&a);


printf("Escribe b: \n");
scanf("%f",&b);


float c = a+b;

if (c > 200){

    printf("El resultado es mayor a 200 y es %.2f",c);

}
else {

    printf("El resultado es menor a 200 y es %.2f",c);

}
    return 0;
}