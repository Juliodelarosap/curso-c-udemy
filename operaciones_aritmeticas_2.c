/* 
areas de figuras trigonometricas
*/

#include <stdio.h>
#include <math.h>//hubo un warning por no incluir la al usar pow
int main(){

   /* float base, altura, area;

    printf("Calculadora de area de triangulo\nInserta la base\nInserta la altura\n");
    scanf("%f %f",&base,&altura);

    area = (base*altura)/2;

    printf("El area de un triangulo es %.2f",area);
*/
float lado,area;

printf("Calculadora de area de un cuadrado\nInserta el lado\n");
scanf("%f",&lado);

area = pow(lado,2);//pow es para elevar se coloca pow(variable,n de elevacion)

printf("El area de el cuadrado es %.2f ",area);
  return 0;  
}