//ejercicio area trapecio

#include <stdio.h>

int main(){

float b1,b2,h,A;

printf("Digite las dos bases y luego la altura:\n");
scanf("%f %f %f",&b1,&b2,&h);

A = ((b1+b2)*h)/2;


printf("El area del trapecio de %.2f b1 y %.2f b2 y altura %.2f es %.2f",b1,b2,h,A);


    return 0;
}