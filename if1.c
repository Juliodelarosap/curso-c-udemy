#include<stdio.h>



int main(){

float a,b;
//a=b=3;
printf("Digite un numero a :\n");
scanf("%f",&a);


printf("Digite un numero b :\n");
scanf("%f",&b);


float c=a+b; //en caso de que la condicion no se cumpla
//pues no imprimira nada

if(a+b >= 10){

    printf("El resultado es %.2f",c);

}

    return 0;
}