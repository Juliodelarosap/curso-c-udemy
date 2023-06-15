/*
Se quiere hacer un 15% de descuento y el programa 
que se den los precios con el descuento
y el descuento

se tiene que entrar el precio y dar el descuento y precio
*/

#include <stdio.h>

int main(){

float precio,descuento,descuentoapli;

printf("Digite el precio del producto \n");
scanf("%f",&precio);

descuento = (precio*15)/100;
descuentoapli = precio-descuento;

printf("Descuento aplicado es %.2f\n",descuentoapli);
printf("El descuento de %.2f es %.2f\n",precio,descuento);


    return 0;
}