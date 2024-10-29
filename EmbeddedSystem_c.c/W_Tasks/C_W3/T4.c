#include <stdio.h>

void showCount(int count) {
    printf("Current count - %d\n", count);
}

void increaseCount(int *count) {
    (*count)++;
}

void resetCount(int *count) {
    *count = 0;
}

int main() {
    int count = 0;
    int choice;

    printf("Program starting.\n");

    do {
        printf("Options:\n");
        printf("1 - Show count\n");
        printf("2 - Increase count\n");
        printf("3 - Reset count\n");
        printf("0 - Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showCount(count);
                break;
            case 2:
                increaseCount(&count);
                break;
            case 3:
                resetCount(&count);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("-1 - Unknown option\n");
                break;
        }
    } while (choice != 0);

    printf("Program ending.\n");
    return 0;
}
