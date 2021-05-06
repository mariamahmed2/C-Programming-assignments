/* Given a 3x3 Matrix input from the user, calculate the absolute difference between the sums of its diagonals */


#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[3][3];
    int i,j;
    int sum1=0;
    int sum2=0;

    printf("Enter the 3x3 Matrix: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The Matrix is:\n");
    for(i=0; i<3; i++)
    {
        for (j = 0; j < 3; j ++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for (j = 0; j < 3; j ++)
        {
            if (i==j)
                sum1 = sum1 + arr[i][j];
        }
        sum2 = sum2 + arr[i][2-i];
    }

    printf("The sum of the left to right diagonal = %d\n", sum1);
    printf("The sum of the right ti left diagonal = %d\n", sum2);
    printf("The absolute difference = %d\n ", abs(sum1-sum2));


}
