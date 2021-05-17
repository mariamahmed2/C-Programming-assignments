#include <stdio.h>
#include <stdlib.h>

void oct(int num)
{
    int remainder = num%8;
    if (num == 0)
    {
        return;                      
    }
    oct(num/8);
    printf("%d",remainder);
}


int main()
{
    
    int num;
  
    printf("Enter the decimal number: \n");
    scanf("%d",&num);
     if(num<0)
   {
       printf("Please enter a positive number!\n");
   }
   else
   {

    printf("The Octal number: \n");
    oct(num);
    printf("\n\n");
   }
    return 0;
}

