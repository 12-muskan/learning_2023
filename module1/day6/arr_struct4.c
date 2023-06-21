// Write a function to sort the array of structures in descending order based on marks 

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int compareMarks(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;

    if (studentA->marks < studentB->marks)
        return 1;
    else if (studentA->marks > studentB->marks)
        return -1;
    else
        return 0;
}

void sortStructsByMarks(struct Student* students, int size) {
    qsort(students, size, sizeof(struct Student), compareMarks);
}

void displayStructs(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int arraySize;

    printf("Enter the number of students: ");
    scanf("%d", &arraySize);
    getchar(); // Consume the newline character

    struct Student* students = (struct Student*)malloc(arraySize * sizeof(struct Student));

    // Assume the students array has been initialized

    sortStructsByMarks(students, arraySize);

    printf("Sorted student information:\n");
    displayStructs(students, arraySize);

    free(students);

    return 0;
}
