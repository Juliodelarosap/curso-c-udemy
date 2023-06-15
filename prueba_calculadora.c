#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char expresion[100];
    char operador;
    double num1, num2, resultado;
    char opcion;

    do {
        printf("Ingrese una expresion matematica (ejemplo: 2 + 3): ");
        fgets(expresion, sizeof(expresion), stdin);

        sscanf(expresion, "%lf %c %lf", &num1, &operador, &num2);

        switch (operador) {
            case '+':
                resultado = num1 + num2;
                break;
            case '-':
                resultado = num1 - num2;
                break;
            case '*':
                resultado = num1 * num2;
                break;
            case '/':
                resultado = num1 / num2;
                break;
            default:
                printf("Operador no valido.\n");
                continue;  // Regresa al inicio del bucle
        }

        printf("El resultado es: %.2lf\n", resultado);

        printf("Desea realizar otro calculo? (s/n): ");
        scanf(" %c", &opcion);
        getchar();  // Captura el carácter de nueva línea

    } while (opcion == 's' || opcion == 'S');

    printf("¡Gracias por usar la calculadora!\n");

    return 0;
}
