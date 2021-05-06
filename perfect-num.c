#include<stdio.h>
#include<stdlib.h>

int main ()
{
int num,i,sum=0;

printf("Enter a positive number: ");
scanf("%d", &num);

   printf("The positive divisors are: ");

for(i=1; i<num; i++)
{
  
   if(num%i==0)
   {
      sum = sum+i;
      printf("%d ", i);      
   }

}
   printf("\nThe sum of the divisor is: %d\n", sum);

    if(num==sum)
    {

        printf("The number is perfect\n");
    }
    else
    {
        printf("The number is not perfect\n");
    }

    return 0;
}