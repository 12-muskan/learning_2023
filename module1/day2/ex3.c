//Program to sum every alternate elements of a given array starting for element 0
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    
    printf("Sum of every alternate element: %d\n", sum);
    
    return 0;
}
