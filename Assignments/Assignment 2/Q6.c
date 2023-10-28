/*
* Programmer: Rayyan Merchant
* Date: 10/28/23
* Description: Making pairs of array elements to match number t.
* Related Files:
*/

#include <stdio.h>

int main()
{
	int a,t,i,j;
	
	printf("Enter number of characters you want in your array: ");
	scanf("%d",&a);
	
	int arr[a];
	
	printf("input numbers:\n");
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nSum equal to? ");
	scanf("%d",&t);
	
	printf("\npairs:");
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(arr[i]+arr[j]==t)
			{
				printf("(%d,%d),",arr[i],arr[j]);
			}
		}
	}
  return 0;
}
