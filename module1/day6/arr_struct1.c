//Write a function to parse the string and initialize an array of structures. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseStringAndInitializeStructs(const char* input, struct Student* students, int size) {
    char* token;
    int i = 0;

    token = strtok(input, " ");
    while (token != NULL) {
        switch (i % 3) {
            case 0:
                students[i / 3].rollno = atoi(token);
                break;
            case 1:
                strncpy(students[i / 3].name, token, sizeof(students[i / 3].name));
                break;
            case 2:
                students[i / 3].marks = atof(token);
                break;
        }
        i++;
        token = strtok(NULL, " ");
        if (i / 3 >= size)
            break;
    }
}

void initializeStructs(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        memset(students[i].name, 0, sizeof(students[i].name));
        students[i].marks = 0.0;
    }
}

int main() {
    char input[100];
    int arraySize;

    printf("Enter the number of students: ");
    scanf("%d", &arraySize);
    getchar(); // Consume the newline character

    struct Student* students = (struct Student*)malloc(arraySize * sizeof(struct Student));

    initializeStructs(students, arraySize);

    printf("Enter the student information:\n");
    for (int i = 0; i < arraySize; i++) {
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // Remove trailing newline character
        parseStringAndInitializeStructs(input, &students[i], 1);
    }

    printf("Parsed student information:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
