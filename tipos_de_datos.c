#include <stdio.h>
#include<stdbool.h>//para usar los datos bool
int main(){
//existen diferentes tipos de datos:
int a = 1; //solo permite lo entero y no permite punto
char b = 'z'; //solos letras
float c = 1.5; //permite los punto flotante
//bool
double d = 1.555;//tiene mas tama;o que los float
short v = 2;
/*long e = 12.3;
long double x = 12.33333333332323333;
unsigned int d = 123; solo positivo*/


printf("el valor del entero: %i\n", a);
printf("el valor del char: %c\n", b);
printf("el valor del float: %f\n", c);
printf("el valor del double: %lf\n", d);
printf("el valor del short: %i\n", v);


    return 0;
}