/*Que se pida el nombre del usuario y signo
y que imprima el nombre si el signo es aries
en caso contrario, diga su signo no es aries*/

#include <stdio.h>

int main(){

    char nombre[100];
    char sign[25];

    printf("Digite su nombre");
    fgets(nombre,100,stdin);

    printf("digite su signo");
    fgets(sign,25,stdin);

printf("digite %s %s",nombre,sign);

    return 0;
}