#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Create a 3D array
    int arr[SIZE][SIZE][SIZE];

    // Fill the array with random numbers
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                arr[i][j][k] = rand();
            }
        }
    }

    // Print the array
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

