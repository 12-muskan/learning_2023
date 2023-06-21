// Write a function to initialize all members in the above array of structures
#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStructs(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        memset(students[i].name, 0, sizeof(students[i].name));
        students[i].marks = 0.0;
    }
}

int main() {
    int arraySize;

    printf("Enter the number of students: ");
    scanf("%d", &arraySize);
    getchar(); // Consume the newline character

    struct Student* students = (struct Student*)malloc(arraySize * sizeof(struct Student));

    initializeStructs(students, arraySize);

    printf("Initialized student information:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
