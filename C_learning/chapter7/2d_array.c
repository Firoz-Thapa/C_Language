#include <stdio.h>

int main()
{
    int arr[3][2];

    // Input loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of arr[%d][%d]:\n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Output loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
