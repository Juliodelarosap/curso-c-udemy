//sacar la hipotenusa de dos catetos

#include <stdio.h>
#include <math.h>

int main(){

float c1,c2,hp;

printf("Escriba los dos catetos\n");
scanf("%f %f",&c1,&c2);

hp = sqrt(pow(c1,2)+pow(c2,2));

printf ("Hipotenusa es igual a: %.2f",hp);

    return 0;
}