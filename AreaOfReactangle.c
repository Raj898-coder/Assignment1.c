#include <stdio.h>

// Function to calculate the area of a rectangle
int calculateArea(int length, int width) {
    return length * width;
}

int main() {
    int length, width, area;

    // Input the length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate the area of the rectangle
    area = calculateArea(length, width);

    // Print the area of the rectangle
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}
