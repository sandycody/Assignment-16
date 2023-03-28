#include<stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("\nEnter the elements of 1st Matrix of order 3x3: \n\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);
    } 

    printf("\nEnter the elements of 2nd Matrix of order 3x3: \n\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &b[i][j]);
    } 

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nThe addition of 2 matrices of order 3x3 is: \n\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", c[i][j]);
            if (j == 2)
                printf("\n\n");
        }
    }

    printf("\n\n");
    return 0;
}