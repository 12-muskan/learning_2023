#include <stdio.h>

void SumAndAverage(int arr[], int length, int* sum, float* average) {
    *sum = 0;
    for (int i = 0; i < length; i++) {
        *sum += arr[i];
    }
    *average = (float)(*sum) / length;
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int arrayLength = sizeof(myArray) / sizeof(myArray[0]);
    int sum;
    float average;

    SumAndAverage(myArray, arrayLength, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
