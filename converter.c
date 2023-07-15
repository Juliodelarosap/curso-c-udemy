#include <stdio.h>

int main() {
    FILE *wavFile = fopen("audio.wav", "rb");
    FILE *cFile = fopen("audio.c", "w");

    if (wavFile == NULL || cFile == NULL) {
        printf("Error al abrir los archivos.\n");
        return 1;
    }

    fprintf(cFile, "const unsigned char audio[] = {\n");

    // Leer los datos del archivo WAV
    unsigned char buffer[1024];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, sizeof(unsigned char), sizeof(buffer), wavFile)) > 0) {
        for (size_t i = 0; i < bytesRead; i++) {
            fprintf(cFile, "0x%02X, ", buffer[i]);
        }
        fprintf(cFile, "\n");
    }

    fprintf(cFile, "};\n");

    fclose(wavFile);
    fclose(cFile);

    return 0;
}
