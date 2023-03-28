#include<stdio.h>

int main()
{
    int arr[3][3], i, j, count = 0;
    printf("\nEnter the elements of a Matrix of order 3x3: \n\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &arr[i][j]);
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {   
            if (arr[i][j] != 0)
                count++;
        }
    }

    if (count < (3*3)/2)
        printf("\nThe given 3x3 matrix is a Sparse matrix.");

    else    
        printf("\nThe given 3x3 matrix is not a Sparse matrix.");


    printf("\n\n");
    return 0;
}