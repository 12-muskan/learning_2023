//Toggle case
#include <stdio.h>
#include <ctype.h>

void toggleCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char myString[] = "Hello, World!";
    
    printf("Original String: %s\n", myString);

    toggleCase(myString);

    printf("Toggled String: %s\n", myString);

    return 0;
}
