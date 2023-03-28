#include<stdio.h>

int main()
{
    int arr[3][3], i, j, sum = 0;
    printf("\nEnter the elements of Matrix of order 3x3: \n\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &arr[i][j]);
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum += arr[i][j];
            if (j == 2)
            {
                printf("\nThe sum of %dth row is: %d\n", i + 1, sum);
                sum = 0;
            }
        }
    }

    sum = 0;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum += arr[j][i];
            if (j == 2)
            {
                printf("\n\nThe sum of %dth column is: %d\n", j + 1, sum);
                sum = 0;
            }
        }
    }

    printf("\n\n");
    return 0;
}