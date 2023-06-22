//Write an application to view the log stored in data.csv

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

void viewLog(const char* fileName) {
    FILE* file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return;
    }

    char line[MAX_LINE_LENGTH];

    // Skip the header line
    fgets(line, MAX_LINE_LENGTH, file);

    // Read and print each line of the file
    while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

int main() {
    char fileName[] = "data.csv";

    // Call the function to view the log
    viewLog(fileName);

    return 0;
}
