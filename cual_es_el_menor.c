//calcular el menor de dos numeros 

#include <stdio.h>

int main(){

    float num1, num2;

    printf("Digita 2 numeros:\n");
    scanf("%f %f", &num1, &num2);

    if(num1 < num2){
        printf("El menor es: %.2f\n", num1);
    }else{
        printf("El menor es: %.2f\n", num2);
    }

    return 0;
}