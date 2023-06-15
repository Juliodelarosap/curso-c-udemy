//predir dos numeros y sumar,restar,multiplicar y dividir

#include<stdio.h>

int main(){

float n1,n2;
float suma=0,resta=0,multiplicacion=0,division=0;

printf("Digite 2 numeros:\n");
scanf("%f %f",&n1,&n2);


suma = n1+n2;
resta = n1-n2;
multiplicacion = n1*n2;
division = n1/n2;

printf("\nSuma: %.2f\nResta: %.2f\nMulti: %.2f\nDiv: %.2f\n",suma,resta,multiplicacion,division);

    return 0;
}