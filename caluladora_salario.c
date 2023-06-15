/*Dadas las horas trabajadas de una persona 
y el valor por hora. Calcular su salario e 
imprimirlo */

#include<stdio.h>

int main(){

float Horas,Htrab,salarioT;

printf("Inserte sus horas trabajadas:\n");
scanf("%f",&Horas);

printf("Inserte el valor por hora:\n");
scanf("%f",&Htrab);

salarioT = Horas * Htrab;

printf("Su salario es: %.2f",salarioT);

    return 0;
}