#include <stdio.h>
#include <math.h>

#define SAMPLE_RATE 44100
#define DURATION 1.0

void generarOndaSenoidal(float frecuencia, float *listaNumeros) {
    int numMuestras = SAMPLE_RATE * DURATION;
    float amplitud = 0.5;

    for (int i = 0; i < numMuestras; i++) {
        float tiempo = i / (float)SAMPLE_RATE;
        float muestra = amplitud * sin(2 * M_PI * frecuencia * tiempo);
        listaNumeros[i] = muestra;
    }
}

void generarOndaCuadrada(float frecuencia, float *listaNumeros) {
    int numMuestras = SAMPLE_RATE * DURATION;
    float amplitud = 0.5;

    for (int i = 0; i < numMuestras; i++) {
        float tiempo = i / (float)SAMPLE_RATE;
        float periodo = 1.0 / frecuencia;
        float fraccion = fmod(tiempo, periodo) / periodo;

        if (fraccion < 0.5) {
            listaNumeros[i] = amplitud;
        } else {
            listaNumeros[i] = -amplitud;
        }
    }
}

void generarOndaSierra(float frecuencia, float *listaNumeros) {
    int numMuestras = SAMPLE_RATE * DURATION;
    float amplitud = 0.5;

    for (int i = 0; i < numMuestras; i++) {
        float tiempo = i / (float)SAMPLE_RATE;
        float periodo = 1.0 / frecuencia;
        float muestra = amplitud * (fmod(tiempo, periodo) / periodo * 2 - 1);
        listaNumeros[i] = muestra;
    }
}

int main() {
    float frecuencia = 440.0;  // Frecuencia en Hz

    int numMuestras = SAMPLE_RATE * DURATION;
    float listaNumeros[numMuestras];

    printf("Onda senoidal:\n");
    generarOndaSenoidal(frecuencia, listaNumeros);
    for (int i = 0; i < numMuestras; i++) {
        printf("%f\n", listaNumeros[i]);
    }

    printf("\nOnda cuadrada:\n");
    generarOndaCuadrada(frecuencia, listaNumeros);
    for (int i = 0; i < numMuestras; i++) {
        printf("%f\n", listaNumeros[i]);
    }

    printf("\nOnda de sierra:\n");
    generarOndaSierra(frecuencia, listaNumeros);
    for (int i = 0; i < numMuestras; i++) {
        printf("%f\n", listaNumeros[i]);
    }

    return 0;
}
