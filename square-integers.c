#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int Perfect_Square(int i);

int main()

{
int lower, upper, i, sum=0;
printf("Enter the lower limit: ");
scanf("%d", &lower);

printf("Enter the upper limit: ");
scanf("%d", &upper);

for(i=lower; i<=upper; i++)
{
if(Perfect_Square(i))
sum = sum+1;
}
printf("The number of square integers are %d\n", sum);

    return 0;
}

/*function definition*/
int Perfect_Square(int i)
{
    int i_num;
    float f_num;
 
    f_num=sqrt((double)i);
    i_num=f_num;
 
    if(i_num==f_num)
        return 1;
    else
        return 0;
}