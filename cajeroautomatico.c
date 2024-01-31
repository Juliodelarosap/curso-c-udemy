#include <stdio.h>

int main (){

    float saldo = 1000, retiro, deposito;
    int opcion;

    printf("Bienvenido al cajero automatico\n");
    printf("Seleccione una opcion:\n");
    printf("1. Consultar saldo\n");
    printf("2. Realizar retiro\n");
    printf("3. Realizar deposito\n");
    printf("4. Salir\n");

    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            printf("Su saldo es: %.2f\n", saldo);
            break;
        case 2:
            printf("Ingrese la cantidad a retirar: ");
            scanf("%f", &retiro);
            if(retiro > saldo){
                printf("Saldo insuficiente\n");
            }else{
                saldo -= retiro;
                printf("Retiro exitoso\n");
                printf("Su saldo actual es: %.2f\n", saldo);
            }
            break;
        case 3:
            printf("Ingrese la cantidad a depositar: ");
            scanf("%f", &deposito);
            saldo += deposito;
            printf("Deposito exitoso\n");
            printf("Su saldo actual es: %.2f\n", saldo);
            break;
        case 4:
            printf("Gracias por utilizar el cajero automatico\n");
            break;
        default:
            printf("Opcion no valida\n");
    }
    return 0;
}