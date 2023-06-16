#include <stdio.h>

int biggest_ternary(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int result = biggest_ternary(num1, num2);
    printf("The biggest number is: %d\n", result);
    return 0;
}
