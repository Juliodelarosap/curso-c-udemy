#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Función para verificar el algoritmo de Luhn
int luhnCheck(const char *numeroTarjeta) {
    int longitud = 0;
    int suma = 0;
    bool doble = false;

    while (numeroTarjeta[longitud] != '\0') {
        longitud++;
    }

    for (int i = longitud - 1; i >= 0; i--) {
        int digito = numeroTarjeta[i] - '0';

        if (doble) {
            digito *= 2;

            if (digito > 9) {
                digito = digito % 10 + 1;
            }
        }

        suma += digito;
        doble = !doble;
    }

    return (suma % 10 == 0);
}

// Función para generar un número de tarjeta aleatorio
void generarNumeroAleatorio(char *numeroTarjeta) {
    for (int i = 0; i < 16; i++) {
        numeroTarjeta[i] = rand() % 10 + '0';
    }
    numeroTarjeta[16] = '\0';
}

int main() {
    // Semilla para generar números aleatorios
    srand(time(NULL));

    // Generar 10 grupos de 16 números aleatorios
    for (int grupo = 1; grupo <= 10; grupo++) {
        char numeroTarjeta[17];

        // Generar número aleatorio
        generarNumeroAleatorio(numeroTarjeta);

        // Asegurar que cumple con el algoritmo de Luhn
        int digitoVerificador = 0;
        do {
            numeroTarjeta[15] = (digitoVerificador + '0');
            digitoVerificador = (digitoVerificador + 1) % 10;
        } while (!luhnCheck(numeroTarjeta));

        // Imprimir el grupo generado
        printf("Grupo %d: %s\n", grupo, numeroTarjeta);
    }

    return 0;
}
