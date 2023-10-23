/*
* Programmer: Rayyan Merchant
* Date: 12th Sept 2023
* Description: Arranging array in ascending order
* Related Files:
*/

#include <stdio.h>

int main(void) 
{
    int a,arr[10000],i,j,temp;
    

    printf("Enter the number of elements in the array: ");
    scanf("%d", &a);

    for(i=0;i<a;i++) 
	{
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<a;i++)
    {
    	for(j=i+1;j<a;j++)
    	{
    	  if(arr[i]>arr[j])
          {
		    temp = arr[i];
		    arr[i] = arr[j];
		    arr[j] = temp;
		  }
	    }
	}
	printf("\nElements of array is ascending order: \n");
	for(i=0;i<a;i++)
	{
		printf("%d\t",arr[i]);
    }
}
