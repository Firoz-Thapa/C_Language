#include <stdio.h>

// Function to compute and display the area of a rectangle
void computeArea(float width, float height) {
    float area = width * height;  // Calculate the area
    printf("\n");
    printf("Area is %.2f²\n", area);  // Display the area
}

int main() {
    float width, height;  // Variables for width and height

    printf("Program starting.\n");
    printf("Insert width: ");
    scanf("%f", &width);
    printf("Insert height: ");
    scanf("%f", &height);

    computeArea(width, height);  // Call the function to compute the area

    printf("Program ending.\n");
    return 0;
}
