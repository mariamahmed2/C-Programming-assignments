#include<stdlib.h>
#include<stdio.h>

int main()
{
   
int i, j, n, count;  

  printf(" Enter the range: ");
  scanf("%d", &n); 

  printf("\nThe prime numbers between 1 and %d are: ", n);
  for(j = 1; j <= n; j++)
  {
    count = 0;
    for (i = 2; i <= j/2; i++)
    {
  	if(j%i == 0)
  	{
     	  count++;
  	  break;
	}
    }
    if(count == 0 && j != 1 )
    {
	printf("%d ", j);
    }  
  }
  printf("\n");
  return 0;
}