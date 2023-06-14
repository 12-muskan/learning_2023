#include <stdio.h>

int biggest_if_else(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int result = biggest_if_else(num1, num2);
    printf("The biggest number is: %d\n", result);
    return 0;
}
