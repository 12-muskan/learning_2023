#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    unsigned int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);
    int totalSetBits = 0;
    
    for (int i = 0; i < size; i++) {
        unsigned int num = arr[i];
        int setBits = 0;
        
        while (num) {
            setBits += num & 1;
            num >>= 1;
        }
        
        totalSetBits += setBits;
    }
    
    printf("Total number of set bits in the array: %d\n", totalSetBits);
    
    return 0;
}