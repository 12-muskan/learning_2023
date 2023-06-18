#include <stdio.h>

void MinMax(int arr[], int length, int* min, int* max) {
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < length; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int myArray[] = {5, 2, 8, 3, 1};
    int arrayLength = sizeof(myArray) / sizeof(myArray[0]);
    int min, max;

    MinMax(myArray, arrayLength, &min, &max);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}
