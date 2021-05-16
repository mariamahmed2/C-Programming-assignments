#include<stdio.h>
#include<stdlib.h>

/* function to return index where the max element is present */ 
int max(int arr[], int size)
{
    int i, index=0;
    int max = arr[0];
 
    for (i = 1; i < size; i++)
    {
        if (arr[i] > arr[index])
        {
            index = i;
        }
    }

    return index;
}


/* function to return where the min element is present */ 
int min(int arr[], int size)
{
    int i, index=0;
    int min = arr[0];
 
    for (i = 1; i < size; i++)
    {
        if (arr[i] < arr[index])
        {
            index = i;
        }
    }
    return index;
}
int main()
{
int  size, sum=0, i, average, temp1, imax, temp2, imin;

/*Array size*/
printf("Eter the size of the array: \n");
scanf("%d", &size);
 
 /*take an array from the user */
int arr[size];
printf("The array is: \n");
for(i=0; i<size; i++)
{
   scanf("%d",&arr[i]);

}

/*print sum & average*/
for(i=0; i<size; i++)
{
    sum += arr[i];
}
average = sum/size;

/* max value*/
temp1 = max(arr, size);
imax = arr[temp1];

/*min value*/
temp2 = min(arr, size);
imin = arr[temp2];

printf("The sum of all elements of the array is: %d\n", sum);
printf("The average: %d \n",average);
printf("The max value is: %d and its index: %d\n", imax, temp1);
printf("The min value is: %d and its index: %d\n", imin, temp2 );


    return 0;
}