/* C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.*/
#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    double real;
    double imaginary;
};

// Function to read a complex number
void readComplex(struct Complex* num) {
    printf("Enter the real part: ");
    scanf("%lf", &(num->real));

    printf("Enter the imaginary part: ");
    scanf("%lf", &(num->imaginary));
}

// Function to write a complex number
void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;

    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);

    return result;
}

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("Enter the second complex number:\n");
    readComplex(&num2);

    printf("First complex number: ");
    writeComplex(num1);

    printf("Second complex number: ");
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("Sum of complex numbers: ");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("Product of complex numbers: ");
    writeComplex(product);

    return 0;
}
