/* C program to copy a file by considering the user option to handle the text case
-u, to change file content to Upper Case
-l, to change file content to Lower Case
-s, to change file content to Sentence Case
if no options are passed then it should be a normal copy*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void copyFile(const char *sourceFileName, const char *destinationFileName, char option) {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return;
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return;
    }

    // Copy the contents of the source file to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (option == 'u') {
            fputc(toupper(ch), destinationFile);  // Convert to uppercase
        } else if (option == 'l') {
            fputc(tolower(ch), destinationFile);  // Convert to lowercase
        } else if (option == 's') {
            static int sentenceStart = 1;
            if (sentenceStart && isalpha(ch)) {
                fputc(toupper(ch), destinationFile);  // Convert to uppercase
                sentenceStart = 0;
            } else {
                fputc(tolower(ch), destinationFile);  // Convert to lowercase
                if (ch == '.' || ch == '?' || ch == '!') {
                    sentenceStart = 1;
                }
            }
        } else {
            fputc(ch, destinationFile);  // Normal copy
        }
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);
}

int main(int argc, char *argv[]) {
    char option = '\0';
    char *sourceFileName, *destinationFileName;

    if (argc < 3) {
        printf("Insufficient arguments. Usage: ./cp [option] source_file destination_file\n");
        return 1;
    }

    if (argc >= 4) {
        option = argv[1][1];
        sourceFileName = argv[2];
        destinationFileName = argv[3];
    } else {
        sourceFileName = argv[1];
        destinationFileName = argv[2];
    }

    copyFile(sourceFileName, destinationFileName, option);

    return 0;
}
