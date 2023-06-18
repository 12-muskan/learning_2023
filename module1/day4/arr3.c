//Reverse array
#include <stdio.h>

void reverseArray(int arr[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move start index towards the middle
        start++;

        // Move end index towards the middle
        end--;
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int arrayLength = sizeof(myArray) / sizeof(myArray[0]);

    printf("Original Array: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    reverseArray(myArray, arrayLength);

    printf("Reversed Array: ");
    for (int i = 0; i < arrayLength; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
