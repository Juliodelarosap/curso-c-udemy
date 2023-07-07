//simular una tienda con entradas y salidas de capital
#include <stdio.h>

int main(){


    int opcion;
    float agregar,retirar,saldo=5000;

    printf("\t********************************\n");
    printf("\t*Este es un simulador de cajero*\n");
    printf("\t********************************\n\n");
    printf("\tSelecciona una Opcion\n");
    printf("\n1) Depositar Dinero");
    printf("\n2) Retirar Dinero");
    printf("\n3) Salir\n");
    printf("\nOpcion Seleccionada: ");
    scanf("%d",&opcion);

    switch(opcion){

        case 1 : printf("Cuanto dinero quiere depositar?\n");
        scanf("%f",&agregar); 
        
        saldo += agregar;
        printf("Tu saldo actual es de %f\n", saldo);
        break;

        case 2 : printf("cuanto dinero quiere retirar?\n");
        scanf("%f",&retirar);

        if(saldo < retirar) printf("tu saldo disponible es de solo %f\n", saldo);
        else{
            saldo -= retirar;
            printf("Tu saldo actual es de %f",saldo);
        }
            break;

        case 3 : printf("Gracias por Usar");break;


    }






    return 0;
}