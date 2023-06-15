/*pedirle al usuario que digite 2 numeros y 
se tiene que sumar, restar, multiplicar y dividir*/

#include <stdio.h>


int main(){

   float n1 = 0, n2 = 0;
   float suma = 0,resta = 0,multi = 0,div = 0;

   printf("escribe 2 numeros \n");
   scanf("%f %f", &n1,&n2);

suma = n1+n2;
resta = n1-n2;
multi = n1*n2;
div = n1/n2;

printf("La suma de los numeros es %.2f\nLa resta es %.2f\nLa multip %.2f\nLa div %.2f\n",suma,resta,multi,div);
printf("Gracias por usar\n");
    return 0;
}