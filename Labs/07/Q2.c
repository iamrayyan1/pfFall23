/*
* Programmer: Rayyan Merchant
* Desc: ROTATING AN ARRAY D SPACES
* Date: 10-10-23
*
*/


#include <stdio.h>
int main() 
{
    int a, i, j, d, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &a);
    
    int arr[a];
    
    printf("\nInput:\n");
    for (i = 0; i < a; i++) 
	{
        scanf("%d", &arr[i]);
    }
    
	printf("\nMatrix is:\n");
	for (i = 0; i < a; i++) 
	{ 
        printf("%d\t", arr[i]);
    }
    
    printf("\nEnter number of positions to rotate left: ");
    scanf("%d", &d);

    for(i=1;i<=d;i++)
    {
    	temp  = arr[0];
    	for(j=0;j<a-1;j++)
    	{
    	    arr[j] = arr[j+1];
		}
		arr[j] = temp;
	}
	
	printf("\nSorted Matrix is:\n");
	for (i = 0; i < a; i++) 
	{
        printf("%d\t", arr[i]);
    }
}
