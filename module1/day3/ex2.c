#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    unsigned char* ptrA = (unsigned char*)a;
    unsigned char* ptrB = (unsigned char*)b;
    
    for (size_t i = 0; i < size; i++) {
        unsigned char temp = ptrA[i];
        ptrA[i] = ptrB[i];
        ptrB[i] = temp;
    }
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    
    double d1 = 3.14, d2 = 2.71;
    printf("Before swap: d1 = %f, d2 = %f\n", d1, d2);
    swap(&d1, &d2, sizeof(double));
    printf("After swap: d1 = %f, d2 = %f\n", d1, d2);
    
    char c1 = 'A', c2 = 'B';
    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);
    
    return 0;
}
