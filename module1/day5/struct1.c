/* Structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.*/
#include <stdio.h>

// Define the structure for a box
struct Box {
    double length;
    double width;
    double height;
};

// Function to calculate the volume of the box
double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

// Function to calculate the total surface area of the box
double calculateSurfaceArea(struct Box* boxPtr) {
    double length = boxPtr->length;
    double width = boxPtr->width;
    double height = boxPtr->height;

    return 2 * (length * width + length * height + width * height);
}

int main() {
    // Create a box object
    struct Box myBox = { 5.0, 3.0, 4.0 };

    // Create a pointer to the box object
    struct Box* boxPtr = &myBox;

    // Calculate the volume using indirection and dot operator
    double volume = (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;

    // Calculate the surface area using arrow operator and dot representation
    double surfaceArea = boxPtr->length * boxPtr->width * boxPtr->height;

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
