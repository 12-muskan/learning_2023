#include <stdio.h>

int deleteDigit(int num, int digit) {
    int power = 1;
    int result = 0;

    while (num > 0) {
        int currDigit = num % 10;
        if (currDigit != digit) {
            result += currDigit * power;
            power *= 10;
        }
        num /= 10;
    }

    return result;
}

int findLargestNumber(int num) {
    int largest = 0;

    for (int i = 0; i < 4; i++) {
        int deletedNum = deleteDigit(num, num % 10);
        if (deletedNum > largest) {
            largest = deletedNum;
        }
        num /= 10;
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);

    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
