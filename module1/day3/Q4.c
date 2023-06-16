#include <stdio.h>

void find_smallest_and_largest_digits(int count, ...) {
    if (count <= 0) {
        printf("Not Valid\n");
        return;
    }

    int smallest_digit = 10;  // Initialize with a high value
    int largest_digit = -1;   // Initialize with a low value

    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        
        while (num > 0) {
            int digit = num % 10;
            smallest_digit = (digit < smallest_digit) ? digit : smallest_digit;
            largest_digit = (digit > largest_digit) ? digit : largest_digit;
            num /= 10;
        }
    }

    va_end(args);

    if (smallest_digit == 10 || largest_digit == -1) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallest_digit);
        printf("Largest Digit: %d\n", largest_digit);
    }
}

int main() {
    find_smallest_and_largest_digits(3, 8, 156, 123450);
    
    return 0;
}
