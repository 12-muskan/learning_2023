//Program to rotate string
#include <stdio.h>
#include <string.h>

void rotateString(char* str) {
    int length = strlen(str);
    char temp = str[0];

    // Rotate the string
    for (int i = 0; i < length - 1; i++) {
        str[i] = str[i + 1];
    }

    str[length - 1] = temp;
}

int main() {
    char myString[] = "abcdxyz";

    printf("Original String: %s\n", myString);

    rotateString(myString);

    printf("Rotated String: %s\n", myString);

    return 0;
}
