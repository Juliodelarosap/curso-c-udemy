//Se requiere aumentar el salario de una empresa el 10%
//se necesita el nombre, el salario y que se de el aumento de ese salario

#include <stdio.h>

int main(){

char nom [100] ;//como se coloco [] seria un string entonces seria %s y no %c 
float salario,aumentoS,salarioF;
 
printf("Ingrese su nombre y apellido\n");
fgets(nom,100,stdin);

printf("Digite su salario actual\n");
scanf("%f",&salario);

aumentoS = (salario*0.10);

salarioF = (salario + aumentoS);

printf("Usuario %s su salario tiene en aumento de %.2f,\n Le haria en total %.2f\n",nom,aumentoS,salarioF);

return 0;
}