#include<stdio.h>

int main()
{
    int arr[3][3], i, j, sum = 0;
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
            if (i + j == 2)
                sum += arr[i][j];
        }
    }

    printf("\nElements on the left diagonal of a given matrix are: \t");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (i + j == 2)
                printf("%d\t", arr[i][j]);
        }
    }
    printf("\n\nThe sum of left diagonal elements of a given 3x3 matrix is: %d", sum);
    
    printf("\n\n");
    return 0;
}