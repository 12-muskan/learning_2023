/* Program to demonstrate the swapping the fields of two structures using pointers*/

#include <stdio.h>

// Structure to represent a point
struct Point {
    int x;
    int y;
};

// Function to swap the fields of two structures using pointers
void swapFields(struct Point* p1, struct Point* p2) {
    // Swap the x values
    int temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;

    // Swap the y values
    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

int main() {
    struct Point point1 = { 5, 10 };
    struct Point point2 = { 15, 20 };

    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Create pointers to the structures
    struct Point* p1 = &point1;
    struct Point* p2 = &point2;

    // Swap the fields using pointers
    swapFields(p1, p2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
