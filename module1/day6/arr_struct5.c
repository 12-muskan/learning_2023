// Write a function to perform a search operation on the array of structures based on name of the student

#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(const struct Student* students, int size, const char* name) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}

int main() {
    int arraySize;
    char searchName[20];

    printf("Enter the number of students: ");
    scanf("%d", &arraySize);
    getchar(); // Consume the newline character

    struct Student* students = (struct Student*)malloc(arraySize * sizeof(struct Student));

    // Assume the students array has been initialized

    printf("Enter the name of the student to search: ");
    fgets(searchName, sizeof(searchName), stdin);
    searchName[strcspn(searchName, "\n")] = '\0'; // Remove trailing newline character

    searchByName(students, arraySize, searchName);

    free(students);

    return 0;
}
