#include <stdio.h>

void calculateArea(float width, float height) {
    float area = width * height;
    printf("\n");
    printf("Area is %.2f²\n", area);
}

int main() {
    float width, height;

    printf("Program starting.\n");
    printf("Insert width: ");
    scanf("%f", &width);
    printf("Insert height: ");
    scanf("%f", &height);

    calculateArea(width, height);

    printf("Program ending.\n");
    return 0;
}
