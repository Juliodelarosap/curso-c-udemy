#include <stdio.h>

int main() {
    int limite_inferior = 1;
    int limite_superior = 100;
    int numero_adivinado;
    char respuesta;

    printf("Piensa en un numero entre 1 y 100. Yo tratare de adivinarlo.\n");

    do {
        numero_adivinado = (limite_inferior + limite_superior) / 2;

        printf("¿Es %d tu numero? (s/n): ", numero_adivinado);
        scanf(" %c", &respuesta);

        if (respuesta == 's') {
            printf("Adivine Tu numero es %d.\n", numero_adivinado);
            break;
        } else if (respuesta == 'n') {
            printf("Es mayor que %d (s/n): ", numero_adivinado);
            scanf(" %c", &respuesta);

            if (respuesta == 's') {
                limite_inferior = numero_adivinado + 1;
            } else {
                limite_superior = numero_adivinado - 1;
            }
        } else {
            printf("Respuesta invalida. Por favor, responde 's' o 'n'.\n");
        }
    } while (limite_inferior <= limite_superior);

    if (limite_inferior > limite_superior) {
        printf("No pude adivinar tu numero. ¡Eres muy bueno!\n");
    }

    return 0;
}
