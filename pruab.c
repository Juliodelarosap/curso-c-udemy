#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int arr[], int start, int end) {
    if (start == end) {
        for (int i = 0; i < end; i++) {
            printf("%d ", arr[i]);
            if ((i + 1) % 3 == 0) {
                printf("\n");
            }
        }
        printf("\n");
    } else {
        for (int i = start; i < end; i++) {
            swap(&arr[start], &arr[i]);
            permute(arr, start + 1, end);
            swap(&arr[start], &arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    permute(arr, 0, n);

    return 0;
}