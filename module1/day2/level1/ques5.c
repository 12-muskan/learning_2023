#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= 1;       // Set 1st bit
            break;
        case 2:
            num &= ~(1 << 31);  // Clear 31st bit
            break;
        case 3:
            num ^= (1 << 15);   // Toggle 16th bit
            break;
        default:
            printf("Invalid operation type.\n");
            return num;
    }
    
    return num;
}

int main() {
    int num, oper_type, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
