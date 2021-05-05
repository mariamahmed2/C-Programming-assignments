#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,j,rows,k,n;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    n=rows;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=n; j++)
        {
                printf(" ");
        }
        n--;
        for(k=1; k<=i; k++)
        {
                printf("%d",i);
                printf(" ");
            
        }
        printf("\n");
    
    }
    
    return 0;
}