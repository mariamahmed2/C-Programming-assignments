#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n, center, dimx, dimy;
    scanf("%d", &n);
    center = n-1;

    for (int i = 0; i < (2*n-1); i++)
    {
        for ( int j = 0; j < (2*n-1); j++)
        {
            dimx = abs(center -j);
            dimy = abs(center -i);

            if( dimx >= dimy)
            {
                printf("%d ", 1+ dimx);
            }
            else
            {
                printf("%d ", 1+ dimy);
            }
        }
        printf("\n");
    }
    
    return 0;
}