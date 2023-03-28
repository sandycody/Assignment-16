#include<stdio.h>

int main()
{
    int arr[3][3], trans[3][3], i, j;
    printf("\nEnter the elements of a Matrix of order 3x3: \n\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            scanf("%d", &arr[i][j]);
    }

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
            trans[i][j] = arr[j][i];
    }

    printf("\nThe transpose of a given 3x3 matrix is: \n\n");
    for(i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t", trans[i][j]);
            if (j == 2)
                printf("\n\n");
        }
    }
    
    printf("\n\n");
    return 0;
}