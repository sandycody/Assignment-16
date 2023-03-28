#include<stdio.h>

int main()
{
    int arr[3][3], i, j, max = 0, sum = 0, index;
    printf("\nEnter the elements of a Matrix of order 3x3: \n\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &arr[i][j]);
    }

    for (i = 0; i <= 2; i++)
    {
        sum = 0;
        for (j = 0; j <= 2; j++)
        {
            if (arr[i][j] == 1)
                sum += arr[i][j];
            
            if (sum > max)
            {
                max = sum;
                index = i+1;
            }
        }
    }

    printf("\nThe maximum number of 1's is %d in a row number %d", max, index);

    printf("\n\n");
    return 0;
}