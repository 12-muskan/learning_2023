// Write a function to display all members in the above array of structures

#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

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

    displayStructs(students, arraySize);

    free(students);

    return 0;
}
