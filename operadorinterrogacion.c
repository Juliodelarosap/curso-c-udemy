/*sintaxis 

condicion ? expresion1 : expresion2

*/

#include <stdio.h>

int main(){

int numero;

puts("Escrube un numero");
scanf("%i",&numero);

(numero%2==0)? printf("El numero es par\n") : printf("Es impar\n");

    return 0;
}