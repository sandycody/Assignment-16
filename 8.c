#include<stdio.h>

int main()
{
    int arr[3][3], lo[3][3], i, j;
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
            if (i > j)
                arr[i][j] = 0;
        }
    }

    printf("\nThe upper triangular matrix can be represented as: \n\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", arr[i][j]);
            if (j == 2)
                printf("\n\n");
        }    
    }
    
    printf("\n\n");
    return 0;
}