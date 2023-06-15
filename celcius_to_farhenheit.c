//convertir de celsius a fahrenheit


#include<stdio.h>

int main(){

float celsius, fahr;


printf("Ingrese la tempratura en celcius:\n");
scanf("%f",&celsius);

fahr = (celsius*1.8)+32;

printf("Fahrenheit seria: %.2f",fahr);


    return 0;
}