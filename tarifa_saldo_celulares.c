/*calular la tarifas de saldo de celulares 
y poner precios 

de 1000 a 1500 premium
de 500 a 999 intermedia
de 100 a 499 basica
*/

#define Tarifa1 "Premium"
#define Tarifa2 "Intermedia"
#define Tarifa3 "Basica"

#include <stdio.h>

int main(){

float precio;


    printf("Cuanto esta dispuesto a pagar?\n");
    scanf("%f",&precio);

    if(precio>=1000 && precio<=1500){
        printf("Tu tarifa es %s\n",Tarifa1);
    }
    else if(precio>=500 && precio<=999){
        printf("Tu tarifa es %s\n",Tarifa2);
    }
    else if(precio>=100 && precio<=499){
        printf("Tu tarifa es %s\n",Tarifa3);
    }
    else{
        printf("No contamos con tarifa para ese precio");
    }





    return 0;
}