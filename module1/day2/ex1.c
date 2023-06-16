#include <stdio.h>

void printExponent(double num) {
    unsigned long long *ptr = (unsigned long long *)&num;
    unsigned long long exponentMask = 0x7FF0000000000000ULL;
    unsigned long long exponent = (*ptr & exponentMask) >> 52;
    
    printf("Hexadecimal: 0x%llX\n", exponent);
    
    printf("Binary: ");
    for (int i = 11; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    return 0;
}
