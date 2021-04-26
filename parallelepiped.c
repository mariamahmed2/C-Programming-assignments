#include <stdlib.h>
#include <stdio.h>

int main()
{
int n;
int hight, width, length, vol;
printf("Enter the number of boxes: ");
scanf("%d", &n);

  do
  {
    printf("Enter the length: ");
    scanf("%d", &length);

    printf("\nEnter thr width: ");
    scanf("%d", &width);

    printf("\nEnter thr hight: ");
    scanf("%d", &hight);

  vol = hight*length*width;
    if (hight< 41)
      printf("The vol= %d", vol);
    else 
    printf("\nCan't be transported through the tunnel");
    printf("\n");
    n--;
  }
  while (n >0);


    return 0;
}