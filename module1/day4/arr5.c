//Sum of even and odd indexed elements
#include <stdio.h>

void evenAndOddIndexedSums(int arr[], int length, int* evenSum, int* oddSum) {
    *evenSum = 0;
    *oddSum = 0;

    for (int i = 0; i < length; i++) {
        if (i % 2 == 0) {
            *evenSum += arr[i];
        } else {
            *oddSum += arr[i];
        }
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int arrayLength = sizeof(myArray) / sizeof(myArray[0]);
    int evenSum, oddSum;

    evenAndOddIndexedSums(myArray, arrayLength, &evenSum, &oddSum);

    printf("Sum of even-indexed elements: %d\n", evenSum);
    printf("Sum of odd-indexed elements: %d\n", oddSum);

    return 0;
}
